
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct powerdomain {int banks; int* pwrsts_mem_on; int prcm_offs; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int,int) ;
 int FUNC_3 (int ,int,int ,int ) ;

int FUNC_4(struct powerdomain *VAR_7, u8 VAR_8, u8 VAR_9)
{
 u32 VAR_10;

 if (!VAR_7)
  return -VAR_1;

 if (VAR_7->banks < (VAR_8 + 1))
  return -VAR_0;

 if (!(VAR_7->pwrsts_mem_on[VAR_8] & (1 << VAR_9)))
  return -VAR_1;

 FUNC_2("powerdomain: setting next memory powerstate for domain %s "
   "bank %0x while pwrdm-ON to %0x\n", VAR_7->name, VAR_8, VAR_9);







 switch (VAR_8) {
 case 0:
  VAR_10 = VAR_4;
  break;
 case 1:
  VAR_10 = VAR_2;
  break;
 case 2:
  VAR_10 = VAR_5;
  break;
 case 3:
  VAR_10 = VAR_3;
  break;
 default:
  FUNC_0(1);
  return -VAR_0;
 }

 FUNC_3(VAR_10, (VAR_9 << FUNC_1(VAR_10)),
        VAR_7->prcm_offs, VAR_6);

 return 0;
}
