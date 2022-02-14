
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zlib {scalar_t__ extra_bytes; scalar_t__ rewrite_offset; struct chunk* chunk; TYPE_2__* idat; TYPE_1__* global; int file; } ;
struct chunk {scalar_t__ chunk_length; } ;
struct IDAT_list {unsigned int count; scalar_t__* lengths; struct IDAT_list* next; } ;
struct TYPE_4__ {struct IDAT_list* idat_list_tail; struct IDAT_list* idat_list_head; } ;
struct TYPE_3__ {int errors; } ;




 int FUNC_0 (int) ;
 int FUNC_1 (struct chunk*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct zlib*,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct zlib *VAR_0)

{







   VAR_0->extra_bytes = 0;

   if (VAR_0->idat != ((void*)0))
   {
      struct IDAT_list *VAR_1 = VAR_0->idat->idat_list_head;
      struct IDAT_list *VAR_2 = VAR_0->idat->idat_list_tail;
      int VAR_3 = 0;




      FUNC_0(VAR_0->rewrite_offset == 0);




      for (;;)
      {
         const unsigned int VAR_4 = VAR_1->count;
         unsigned int VAR_5;

         for (VAR_5 = 0; VAR_5<VAR_4; ++VAR_5)
         {
            int VAR_6;

            if (VAR_3 > 0)
               FUNC_2(VAR_0->file);

            VAR_3 = 12;

            VAR_6 = FUNC_3(VAR_0, VAR_1->lengths[VAR_5]);

            switch (VAR_6)
            {
               case 129:
                  break;

               case 128:




                  if (VAR_0->global->errors && VAR_0->extra_bytes == 0)
                  {
                     struct IDAT_list *VAR_7 = VAR_1;
                     int VAR_8 = VAR_5+1, VAR_9 = VAR_4;

                     for (;;)
                     {
                        for (; VAR_8<VAR_9; ++VAR_8)
                           if (VAR_7->lengths[VAR_8] > 0)
                           {
                              FUNC_1(VAR_0->chunk,
                                 "extra compressed data");
                              goto end_check;
                           }

                        if (VAR_7 == VAR_2)
                           break;

                        VAR_7 = VAR_7->next;
                        VAR_9 = VAR_7->count;
                        VAR_8 = 0;
                     }
                  }

               end_check:



                  VAR_1->lengths[VAR_5] -= VAR_0->extra_bytes;
                  VAR_1->count = VAR_5+1;
                  VAR_0->idat->idat_list_tail = VAR_1;


               default:
                  return VAR_6;
            }
         }


         if (VAR_1 == VAR_2)
            return 129;

         VAR_1 = VAR_1->next;
      }
   }

   else
   {
      struct chunk *VAR_10 = VAR_0->chunk;
      int VAR_11;

      FUNC_0(VAR_0->rewrite_offset < VAR_10->chunk_length);

      VAR_11 = FUNC_3(VAR_0, VAR_10->chunk_length - VAR_0->rewrite_offset);






      VAR_10->chunk_length -= VAR_0->extra_bytes;
      return VAR_11;
   }
}
