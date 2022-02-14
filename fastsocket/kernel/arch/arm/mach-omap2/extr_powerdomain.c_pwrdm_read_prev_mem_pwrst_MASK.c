
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct powerdomain {int banks; int prcm_offs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;

int FUNC_2(struct powerdomain *VAR_7, u8 VAR_8)
{
 u32 VAR_9;

 if (!VAR_7)
  return -VAR_1;

 if (VAR_7->banks < (VAR_8 + 1))
  return -VAR_0;







 switch (VAR_8) {
 case 0:
  VAR_9 = VAR_3;
  break;
 case 1:
  VAR_9 = VAR_4;
  break;
 case 2:
  VAR_9 = VAR_5;
  break;
 case 3:
  VAR_9 = VAR_2;
  break;
 default:
  FUNC_0(1);
  return -VAR_0;
 }

 return FUNC_1(VAR_7->prcm_offs,
     VAR_6, VAR_9);
}
