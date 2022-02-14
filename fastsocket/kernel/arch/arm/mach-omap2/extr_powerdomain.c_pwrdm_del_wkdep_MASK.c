
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powerdomain {int dep_bit; int prcm_offs; int name; int wkdep_srcs; } ;


 int VAR_0 ;
 int FUNC_0 (struct powerdomain*) ;
 int VAR_1 ;
 struct powerdomain* FUNC_1 (struct powerdomain*,int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int,int ,int ) ;

int FUNC_4(struct powerdomain *VAR_2, struct powerdomain *VAR_3)
{
 struct powerdomain *VAR_4;

 if (!VAR_2)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_3, VAR_2->wkdep_srcs);
 if (FUNC_0(VAR_4)) {
  FUNC_2("powerdomain: hardware cannot set/clear wake up of "
    "%s when %s wakes up\n", VAR_2->name, VAR_3->name);
  return FUNC_0(VAR_4);
 }

 FUNC_2("powerdomain: hardware will no longer wake up %s after %s "
   "wakes up\n", VAR_2->name, VAR_3->name);

 FUNC_3((1 << VAR_3->dep_bit),
          VAR_2->prcm_offs, VAR_1);

 return 0;
}
