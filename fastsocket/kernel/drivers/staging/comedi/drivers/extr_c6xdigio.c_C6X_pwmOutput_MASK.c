
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sb0; int sb1; int sb2; int sb3; int sb4; } ;
union pwmcmdtype {int cmd; TYPE_1__ bits; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,int) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_1, unsigned VAR_2, int VAR_3)
{
 unsigned VAR_4;
 union pwmcmdtype VAR_5;
 int VAR_6 = 0;
 unsigned VAR_7;



 VAR_5.cmd = VAR_3;
 if (VAR_5.cmd > 498)
  VAR_5.cmd = 498;
 if (VAR_5.cmd < 2)
  VAR_5.cmd = 2;

 if (VAR_2 == 0) {
  VAR_4 = 0x28;
 } else {
  VAR_4 = 0x30;
 }

 FUNC_1(VAR_1, VAR_4 + VAR_5.bits.sb0);
 VAR_7 = FUNC_0(VAR_1 + 1);
 while (((VAR_7 & 0x80) == 0) && (VAR_6 < VAR_0)) {
  VAR_7 = FUNC_0(VAR_1 + 1);
  VAR_6++;
 }

 FUNC_1(VAR_1, VAR_4 + VAR_5.bits.sb1 + 0x4);
 VAR_6 = 0;
 VAR_7 = FUNC_0(VAR_1 + 1);
 while (((VAR_7 & 0x80) == 0x80) && (VAR_6 < VAR_0)) {
  VAR_7 = FUNC_0(VAR_1 + 1);
  VAR_6++;
 }

 FUNC_1(VAR_1, VAR_4 + VAR_5.bits.sb2);
 VAR_7 = FUNC_0(VAR_1 + 1);
 while (((VAR_7 & 0x80) == 0) && (VAR_6 < VAR_0)) {
  VAR_7 = FUNC_0(VAR_1 + 1);
  VAR_6++;
 }

 FUNC_1(VAR_1, VAR_4 + VAR_5.bits.sb3 + 0x4);
 VAR_6 = 0;
 VAR_7 = FUNC_0(VAR_1 + 1);
 while (((VAR_7 & 0x80) == 0x80) && (VAR_6 < VAR_0)) {
  VAR_7 = FUNC_0(VAR_1 + 1);
  VAR_6++;
 }

 FUNC_1(VAR_1, VAR_4 + VAR_5.bits.sb4);
 VAR_7 = FUNC_0(VAR_1 + 1);
 while (((VAR_7 & 0x80) == 0) && (VAR_6 < VAR_0)) {
  VAR_7 = FUNC_0(VAR_1 + 1);
  VAR_6++;
 }

 FUNC_1(VAR_1, 0x0);
 VAR_6 = 0;
 VAR_7 = FUNC_0(VAR_1 + 1);
 while (((VAR_7 & 0x80) == 0x80) && (VAR_6 < VAR_0)) {
  VAR_7 = FUNC_0(VAR_1 + 1);
  VAR_6++;
 }

}
