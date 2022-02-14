
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_fattr {int * group_name; int * owner_name; int gencount; int time_start; scalar_t__ valid; } ;


 int VAR_0 ;
 int FUNC_0 () ;

void FUNC_1(struct nfs_fattr *VAR_1)
{
 VAR_1->valid = 0;
 VAR_1->time_start = VAR_0;
 VAR_1->gencount = FUNC_0();
 VAR_1->owner_name = ((void*)0);
 VAR_1->group_name = ((void*)0);
}
