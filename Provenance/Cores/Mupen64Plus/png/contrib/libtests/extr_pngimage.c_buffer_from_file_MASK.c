
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_list {struct buffer_list* next; scalar_t__ buffer; } ;
struct buffer {size_t end_count; struct buffer_list* last; struct buffer_list first; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct buffer_list* FUNC_1 (struct buffer_list*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 size_t FUNC_3 (scalar_t__,int,int,int *) ;

__attribute__((used)) static int
FUNC_4(struct buffer *VAR_3, FILE *VAR_4)
{
   struct buffer_list *VAR_5 = &VAR_3->first;
   size_t VAR_6 = 0;

   for (;;)
   {
      size_t VAR_7 = FUNC_3(VAR_5->buffer+VAR_6, 1 ,
         (sizeof VAR_5->buffer)-VAR_6, VAR_4);

      if (VAR_7 > 0)
      {
         VAR_6 += VAR_7;

         if (VAR_6 >= sizeof VAR_5->buffer)
         {
            FUNC_0(VAR_6 == sizeof VAR_5->buffer);
            VAR_6 = 0;

            if (VAR_5->next == ((void*)0))
            {
               VAR_5 = FUNC_1(VAR_5);
               if (VAR_5 == ((void*)0))
                  return VAR_1;
            }

            else
               VAR_5 = VAR_5->next;
         }
      }

      else
      {
         if (FUNC_2(VAR_4))
         {
            VAR_3->last = VAR_5;
            VAR_3->end_count = VAR_6;
            return 0;
         }


         return VAR_2 == 0 ? VAR_0 : VAR_2;
      }
   }
}
