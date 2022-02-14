
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int url ;
typedef int retro_task_t ;
struct TYPE_6__ {int * http_task; scalar_t__ overwrite; } ;
typedef TYPE_1__ pl_thumb_handle_t ;
typedef int path ;
struct TYPE_7__ {int path; int enum_idx; } ;
typedef TYPE_2__ file_transfer_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*,char*,int,char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 (char*,int,int *,int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(pl_thumb_handle_t *VAR_3)
{
   char VAR_4[VAR_1];
   char VAR_5[2048];

   VAR_4[0] = '\0';
   VAR_5[0] = '\0';


   if (FUNC_1(VAR_3, VAR_4, sizeof(VAR_4), VAR_5, sizeof(VAR_5)))
   {

      if (!FUNC_2(VAR_4) || VAR_3->overwrite)
      {
         file_transfer_t *VAR_6 = (file_transfer_t*)FUNC_0(1, sizeof(file_transfer_t));
         if (!VAR_6)
            return;


         VAR_6->enum_idx = VAR_0;
         FUNC_3(VAR_6->path, VAR_4, sizeof(VAR_6->path));




         VAR_3->http_task = (retro_task_t*)FUNC_4(VAR_5, 1, ((void*)0), VAR_2, VAR_6);
      }
   }
}
