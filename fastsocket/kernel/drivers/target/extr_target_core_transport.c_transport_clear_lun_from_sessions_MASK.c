
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct se_lun {int lun_shutdown_comp; int unpacked_lun; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 struct task_struct* FUNC_2 (int ,struct se_lun*,char*,int ) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;

int FUNC_5(struct se_lun *VAR_1)
{
 struct task_struct *VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1,
   "tcm_cl_%u", VAR_1->unpacked_lun);
 if (FUNC_0(VAR_2)) {
  FUNC_3("Unable to start clear_lun thread\n");
  return FUNC_1(VAR_2);
 }
 FUNC_4(&VAR_1->lun_shutdown_comp);

 return 0;
}
