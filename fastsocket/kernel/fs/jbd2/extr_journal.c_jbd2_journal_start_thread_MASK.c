
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_4__ {int * j_task; int j_wait_done_commit; int j_devname; } ;
typedef TYPE_1__ journal_t ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 int VAR_0 ;
 struct task_struct* FUNC_2 (int ,TYPE_1__*,char*,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(journal_t *VAR_1)
{
 struct task_struct *VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1, "jbd2/%s",
   VAR_1->j_devname);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 FUNC_3(VAR_1->j_wait_done_commit, VAR_1->j_task != ((void*)0));
 return 0;
}
