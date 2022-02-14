
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;


 int FUNC_0 () ;



 scalar_t__ VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_1(struct mtd_info *VAR_5, int VAR_6)
{
 volatile unsigned short *VAR_7 = (volatile unsigned short *)(VAR_4 + VAR_0);
 unsigned short VAR_8;

 switch (VAR_6) {
 case 130:
  VAR_8 = VAR_1 | VAR_2;

  *VAR_7 = VAR_8;
  break;

 case 129:
  VAR_8 = 0x00;

  *VAR_7 = VAR_8;
  break;

 case 128:
  VAR_8 = VAR_1 | VAR_3 | VAR_2;

  *VAR_7 = VAR_8;
  break;

 default:
  FUNC_0();
  break;
 }

}
