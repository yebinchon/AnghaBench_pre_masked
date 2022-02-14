
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int entries ;
struct TYPE_3__ {scalar_t__ ref_count; int current_folder_position; int FileEntry; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,int ) ;

int FUNC_3(void)
{
   int VAR_4 = -1;
   int VAR_5 = 0;
   FUNC_0();


   for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4)
   {
      if (VAR_2[VAR_4] == ((void*)0))
      {

         for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5)
         {
            if (VAR_3[VAR_5].ref_count == 0)
            {
               VAR_2[VAR_4] = &VAR_3[VAR_5];
               VAR_2[VAR_4]->ref_count = 1;
               VAR_2[VAR_4]->current_folder_position = -1;
               VAR_2[VAR_4]->FileEntry = FUNC_2(sizeof(entries), VAR_0);
               FUNC_1();
               return VAR_1 - VAR_4;
            }
         }
      }
   }


   FUNC_1();
   return -1;
}
