
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powerdomain {int prcm_offs; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int ,int ) ;

int FUNC_2(struct powerdomain *VAR_2)
{
 if (!VAR_2)
  return -VAR_0;






 FUNC_0("powerdomain: clearing previous power state reg for %s\n",
   VAR_2->name);

 FUNC_1(0, VAR_2->prcm_offs, VAR_1);

 return 0;
}
