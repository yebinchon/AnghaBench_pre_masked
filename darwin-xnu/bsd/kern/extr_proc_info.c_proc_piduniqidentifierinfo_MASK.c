
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_uniqidentifierinfo {scalar_t__ p_reserve4; scalar_t__ p_reserve3; scalar_t__ p_reserve2; int p_puniqueid; int p_uuid; int p_uniqueid; } ;
typedef int proc_t ;


 int FUNC_0 (int ,unsigned char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(proc_t VAR_0, struct proc_uniqidentifierinfo *VAR_1)
{
 VAR_1->p_uniqueid = FUNC_2(VAR_0);
 FUNC_0(VAR_0, (unsigned char *)&VAR_1->p_uuid, sizeof(VAR_1->p_uuid));
 VAR_1->p_puniqueid = FUNC_1(VAR_0);
 VAR_1->p_reserve2 = 0;
 VAR_1->p_reserve3 = 0;
 VAR_1->p_reserve4 = 0;
}
