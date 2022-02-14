
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 (struct pt_regs*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct pt_regs *VAR_3)
{
 VAR_1 = FUNC_0(VAR_3);
 switch (FUNC_0(VAR_3)) {
 case 0x200:
  VAR_2 = 0;
  break;
 case 0x300:
 case 0x380:
  VAR_2 = 1;
  break;
 default:
  VAR_2 = 2;
 }

 FUNC_1(VAR_0, 1);

 return 0;
}
