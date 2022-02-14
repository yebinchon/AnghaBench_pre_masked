
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int * proc_fops; } ;


 struct proc_dir_entry* FUNC_0 (char*,int ,int *) ;
 int VAR_0 ;

void FUNC_1(void)
{
 struct proc_dir_entry *VAR_1 =
     FUNC_0("octeon_ethernet_stats", 0, ((void*)0));
 if (VAR_1)
  VAR_1->proc_fops = &VAR_0;
}
