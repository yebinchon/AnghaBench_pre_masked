
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display {int dummy; } ;
struct buffer_list {scalar_t__ buffer; struct buffer_list* next; } ;
struct buffer {size_t read_count; size_t end_count; struct buffer_list* current; struct buffer_list* last; } ;
typedef scalar_t__ png_size_t ;
typedef size_t png_bytep ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct display*,int ,char*,...) ;
 int FUNC_1 (size_t,scalar_t__,size_t) ;

__attribute__((used)) static void
FUNC_2(struct display *VAR_2, struct buffer *VAR_3, png_bytep VAR_4,
   png_size_t VAR_5)
{
   struct buffer_list *VAR_6 = VAR_3->current;
   size_t VAR_7 = VAR_3->read_count;

   while (VAR_5 > 0)
   {
      size_t VAR_8;

      if (VAR_6 == ((void*)0) ||
         (VAR_6 == VAR_3->last && VAR_7 >= VAR_3->end_count))
      {
         FUNC_0(VAR_2, VAR_1, "file truncated (%lu bytes)",
            (unsigned long)VAR_5);

         break;
      }

      else if (VAR_7 >= sizeof VAR_6->buffer)
      {

         VAR_6 = VAR_6->next;
         VAR_7 = 0;
         VAR_3->current = VAR_6;


         if (VAR_6 == ((void*)0))
         {
            FUNC_0(VAR_2, VAR_0, "damaged buffer list");

            break;
         }
      }

      VAR_8 = (sizeof VAR_6->buffer) - VAR_7;
      if (VAR_8 > VAR_5)
         VAR_8 = VAR_5;

      FUNC_1(VAR_4, VAR_6->buffer + VAR_7, VAR_8);
      VAR_7 += VAR_8;
      VAR_5 -= VAR_8;
      VAR_4 += VAR_8;
   }

   VAR_3->read_count = VAR_7;
}
