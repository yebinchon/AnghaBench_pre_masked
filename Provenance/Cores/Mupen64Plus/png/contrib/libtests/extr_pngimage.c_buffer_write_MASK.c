
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display {int dummy; } ;
struct buffer_list {scalar_t__ buffer; struct buffer_list* next; } ;
struct buffer {size_t end_count; struct buffer_list* last; } ;
typedef scalar_t__ png_size_t ;
typedef size_t png_bytep ;


 int VAR_0 ;
 struct buffer_list* FUNC_0 (struct buffer_list*) ;
 int FUNC_1 (struct display*,int ,char*) ;
 int FUNC_2 (scalar_t__,size_t,size_t) ;

__attribute__((used)) static void
FUNC_3(struct display *VAR_1, struct buffer *VAR_2, png_bytep VAR_3,
   png_size_t VAR_4)



{

   struct buffer_list *VAR_5 = VAR_2->last;
   size_t VAR_6 = VAR_2->end_count;

   while (VAR_4 > 0)
   {
      size_t VAR_7;

      if (VAR_6 >= sizeof VAR_5->buffer)
      {
         if (VAR_5->next == ((void*)0))
         {
            VAR_5 = FUNC_0(VAR_5);

            if (VAR_5 == ((void*)0))
               FUNC_1(VAR_1, VAR_0, "out of memory saving file");
         }

         else
            VAR_5 = VAR_5->next;

         VAR_2->last = VAR_5;
         VAR_6 = 0;
      }

      VAR_7 = (sizeof VAR_5->buffer) - VAR_6;
      if (VAR_7 > VAR_4)
         VAR_7 = VAR_4;

      FUNC_2(VAR_5->buffer + VAR_6, VAR_3, VAR_7);
      VAR_6 += VAR_7;
      VAR_4 -= VAR_7;
      VAR_3 += VAR_7;
   }

   VAR_2->end_count = VAR_6;
}
