
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct powerdomain {int pwrsts_logic_ret; int prcm_offs; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,int,int ,int ) ;

int FUNC_3(struct powerdomain *VAR_3, u8 VAR_4)
{
 if (!VAR_3)
  return -VAR_0;

 if (!(VAR_3->pwrsts_logic_ret & (1 << VAR_4)))
  return -VAR_0;

 FUNC_1("powerdomain: setting next logic powerstate for %s to %0x\n",
   VAR_3->name, VAR_4);







 FUNC_2(VAR_1,
        (VAR_4 << FUNC_0(VAR_1)),
        VAR_3->prcm_offs, VAR_2);

 return 0;
}
