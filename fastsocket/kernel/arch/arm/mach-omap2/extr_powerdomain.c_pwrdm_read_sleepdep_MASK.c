
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powerdomain {int dep_bit; int prcm_offs; int name; int sleepdep_srcs; } ;


 int VAR_0 ;
 int FUNC_0 (struct powerdomain*) ;
 int VAR_1 ;
 struct powerdomain* FUNC_1 (struct powerdomain*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;

int FUNC_5(struct powerdomain *VAR_2, struct powerdomain *VAR_3)
{
 struct powerdomain *VAR_4;

 if (!VAR_2)
  return -VAR_0;

 if (!FUNC_2())
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_3, VAR_2->sleepdep_srcs);
 if (FUNC_0(VAR_4)) {
  FUNC_3("powerdomain: hardware cannot set/clear sleep "
    "dependency affecting %s from %s\n", VAR_2->name,
    VAR_3->name);
  return FUNC_0(VAR_4);
 }

 return FUNC_4(VAR_2->prcm_offs, VAR_1,
     (1 << VAR_3->dep_bit));
}
