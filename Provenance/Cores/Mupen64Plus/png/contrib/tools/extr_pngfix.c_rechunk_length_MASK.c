
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct IDAT_list {scalar_t__* lengths; unsigned int count; struct IDAT_list const* next; } const IDAT_list ;
struct IDAT {scalar_t__ idat_length; unsigned int idat_count; scalar_t__ idat_index; struct IDAT_list const* idat_list_tail; struct IDAT_list const* idat_cur; TYPE_1__* global; } ;
typedef scalar_t__ png_uint_32 ;
struct TYPE_2__ {scalar_t__ idat_max; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static png_uint_32
FUNC_1(struct IDAT *VAR_0, int VAR_1)



{
   png_uint_32 VAR_2 = VAR_0->global->idat_max;

   if (VAR_2 == 0)
   {
      const struct IDAT_list *VAR_3;
      unsigned int VAR_4;

      if (VAR_1)
         return VAR_0->idat_length;




      VAR_3 = VAR_0->idat_cur;
      VAR_4 = VAR_0->idat_count;

      FUNC_0(VAR_0->idat_index == VAR_0->idat_length &&
         VAR_0->idat_length == VAR_3->lengths[VAR_4]);


      if (++VAR_4 < VAR_3->count)
         return VAR_3->lengths[VAR_4];


      FUNC_0(VAR_3 != VAR_0->idat_list_tail);
      VAR_3 = VAR_3->next;
      FUNC_0(VAR_3 != ((void*)0) && VAR_3->count > 0);
      return VAR_3->lengths[0];
   }

   else
   {



      png_uint_32 VAR_5 = VAR_0->idat_length - VAR_0->idat_index;

      if (VAR_2 > VAR_5)
      {
         struct IDAT_list *VAR_6 = VAR_0->idat_cur;
         unsigned int VAR_7 = VAR_0->idat_count+1;

         do
         {




            FUNC_0(VAR_6 != ((void*)0));

            for (;;)
            {

               for (; VAR_7 < VAR_6->count; ++VAR_7)
               {
                  VAR_5 += VAR_6->lengths[VAR_7];
                  if (VAR_2 <= VAR_5)
                     return VAR_2;
               }


               if (VAR_6 == VAR_0->idat_list_tail)
                  return VAR_5;

               VAR_6 = VAR_6->next;
               VAR_7 = 0;
            }
         }
         while (VAR_2 > VAR_5);
      }

      return VAR_2;
   }
}
