
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_struct {int pid; int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct task_struct*,int ) ;

void FUNC_6(struct task_struct *VAR_6)
{
 u32 VAR_7;

 if (VAR_6)
  FUNC_2("ocd_enable: child=%s [%u]\n",
    VAR_6->comm, VAR_6->pid);
 else
  FUNC_2("ocd_enable (no child)\n");

 if (!VAR_6 || !FUNC_5(VAR_6, VAR_3)) {
  FUNC_3(&VAR_5);
  VAR_4++;
  VAR_7 = FUNC_0(VAR_0);
  VAR_7 |= (1 << VAR_2) | (1 << VAR_1);
  FUNC_1(VAR_0, VAR_7);
  FUNC_4(&VAR_5);
 }
}
