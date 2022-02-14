
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int retro_task_t ;
struct TYPE_6__ {TYPE_2__* source_file; } ;
typedef TYPE_1__ decompress_task_data_t ;
struct TYPE_7__ {struct TYPE_7__* target_dir; struct TYPE_7__* userdata; struct TYPE_7__* valid_ext; struct TYPE_7__* subdir; struct TYPE_7__* source_file; } ;
typedef TYPE_2__ decompress_state_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void FUNC_8(retro_task_t *VAR_0,
      decompress_state_t *VAR_1)
{
   FUNC_7(VAR_0, 1);

   if (!FUNC_4(VAR_0) && FUNC_3(VAR_0))
      FUNC_6(VAR_0, FUNC_2("Task canceled"));

   if (FUNC_4(VAR_0))
      FUNC_1(VAR_1->source_file);
   else
   {
      decompress_task_data_t *VAR_2 =
         (decompress_task_data_t*)FUNC_0(1, sizeof(*VAR_2));

      VAR_2->source_file = VAR_1->source_file;
      FUNC_5(VAR_0, VAR_2);
   }

   if (VAR_1->subdir)
      FUNC_1(VAR_1->subdir);
   if (VAR_1->valid_ext)
      FUNC_1(VAR_1->valid_ext);
   if (VAR_1->userdata)
      FUNC_1(VAR_1->userdata);
   FUNC_1(VAR_1->target_dir);
   FUNC_1(VAR_1);
}
