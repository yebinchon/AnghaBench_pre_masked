
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct powerdomain {int pwrsts; int prcm_offs; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ,int,int ,int ) ;

int FUNC_2(struct powerdomain *VAR_4, u8 VAR_5)
{
 if (!VAR_4)
  return -VAR_0;

 if (!(VAR_4->pwrsts & (1 << VAR_5)))
  return -VAR_0;

 FUNC_0("powerdomain: setting next powerstate for %s to %0x\n",
   VAR_4->name, VAR_5);

 FUNC_1(VAR_1,
        (VAR_5 << VAR_2),
        VAR_4->prcm_offs, VAR_3);

 return 0;
}
