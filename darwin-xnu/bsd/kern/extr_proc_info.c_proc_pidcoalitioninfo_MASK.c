
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_pidcoalitioninfo {int coalition_id; } ;
typedef int proc_t ;


 int FUNC_0 (struct proc_pidcoalitioninfo*,int) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(proc_t VAR_0, struct proc_pidcoalitioninfo *VAR_1)
{
 FUNC_0(VAR_1, sizeof(*VAR_1));
 FUNC_1(VAR_0, VAR_1->coalition_id);
}
