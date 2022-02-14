
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ state; } ;
typedef TYPE_1__ retro_task_t ;
struct TYPE_11__ {int archive; int callback_error; TYPE_9__* userdata; int valid_ext; int source_file; } ;
typedef TYPE_2__ decompress_state_t ;
struct TYPE_12__ {int archive_path; } ;


 int FUNC_0 (int *,int*,int ,int ,int ,TYPE_9__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_8(retro_task_t *VAR_1)
{
   bool VAR_2;
   int VAR_3;
   decompress_state_t *VAR_4 = (decompress_state_t*)
      VAR_1->state;

   FUNC_3(VAR_4->userdata->archive_path,
         VAR_4->source_file, sizeof(VAR_4->userdata->archive_path));

   VAR_3 = FUNC_0(&VAR_4->archive,
         &VAR_2, VAR_4->source_file,
         VAR_4->valid_ext, VAR_0, VAR_4->userdata);

   FUNC_7(VAR_1,
         FUNC_2(&VAR_4->archive));

   if (FUNC_5(VAR_1) || VAR_3 != 0)
   {
      FUNC_6(VAR_1, VAR_4->callback_error);
      FUNC_1(&VAR_4->archive);

      FUNC_4(VAR_1, VAR_4);
   }
}
