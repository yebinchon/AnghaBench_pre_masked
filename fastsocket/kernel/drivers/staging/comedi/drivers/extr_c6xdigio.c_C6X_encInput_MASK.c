
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sb0; int sb1; int sb2; int sb3; int sb4; int sb5; int sb6; int sb7; } ;
union encvaluetype {int value; TYPE_1__ bits; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,int) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_1, unsigned VAR_2)
{
 unsigned VAR_3;
 union encvaluetype VAR_4;
 int VAR_5 = 0;
 int VAR_6;



 VAR_4.value = 0;
 if (VAR_2 == 0) {
  VAR_3 = 0x48;
 } else {
  VAR_3 = 0x50;
 }
 FUNC_1(VAR_1, VAR_3);
 VAR_6 = FUNC_0(VAR_1 + 1);
 while (((VAR_6 & 0x80) == 0) && (VAR_5 < VAR_0)) {
  VAR_6 = FUNC_0(VAR_1 + 1);
  VAR_5++;
 }

 VAR_4.bits.sb0 = ((FUNC_0(VAR_1 + 1) >> 3) & 0x7);
 FUNC_1(VAR_1, VAR_3 + 0x4);
 VAR_5 = 0;
 VAR_6 = FUNC_0(VAR_1 + 1);
 while (((VAR_6 & 0x80) == 0x80) && (VAR_5 < VAR_0)) {
  VAR_6 = FUNC_0(VAR_1 + 1);
  VAR_5++;
 }
 VAR_4.bits.sb1 = ((FUNC_0(VAR_1 + 1) >> 3) & 0x7);
 FUNC_1(VAR_1, VAR_3);
 VAR_5 = 0;
 VAR_6 = FUNC_0(VAR_1 + 1);
 while (((VAR_6 & 0x80) == 0) && (VAR_5 < VAR_0)) {
  VAR_6 = FUNC_0(VAR_1 + 1);
  VAR_5++;
 }
 VAR_4.bits.sb2 = ((FUNC_0(VAR_1 + 1) >> 3) & 0x7);
 FUNC_1(VAR_1, VAR_3 + 0x4);
 VAR_5 = 0;
 VAR_6 = FUNC_0(VAR_1 + 1);
 while (((VAR_6 & 0x80) == 0x80) && (VAR_5 < VAR_0)) {
  VAR_6 = FUNC_0(VAR_1 + 1);
  VAR_5++;
 }
 VAR_4.bits.sb3 = ((FUNC_0(VAR_1 + 1) >> 3) & 0x7);
 FUNC_1(VAR_1, VAR_3);
 VAR_5 = 0;
 VAR_6 = FUNC_0(VAR_1 + 1);
 while (((VAR_6 & 0x80) == 0) && (VAR_5 < VAR_0)) {
  VAR_6 = FUNC_0(VAR_1 + 1);
  VAR_5++;
 }
 VAR_4.bits.sb4 = ((FUNC_0(VAR_1 + 1) >> 3) & 0x7);
 FUNC_1(VAR_1, VAR_3 + 0x4);
 VAR_5 = 0;
 VAR_6 = FUNC_0(VAR_1 + 1);
 while (((VAR_6 & 0x80) == 0x80) && (VAR_5 < VAR_0)) {
  VAR_6 = FUNC_0(VAR_1 + 1);
  VAR_5++;
 }
 VAR_4.bits.sb5 = ((FUNC_0(VAR_1 + 1) >> 3) & 0x7);
 FUNC_1(VAR_1, VAR_3);
 VAR_5 = 0;
 VAR_6 = FUNC_0(VAR_1 + 1);
 while (((VAR_6 & 0x80) == 0x0) && (VAR_5 < VAR_0)) {
  VAR_6 = FUNC_0(VAR_1 + 1);
  VAR_5++;
 }
 VAR_4.bits.sb6 = ((FUNC_0(VAR_1 + 1) >> 3) & 0x7);
 FUNC_1(VAR_1, VAR_3 + 0x4);
 VAR_5 = 0;
 VAR_6 = FUNC_0(VAR_1 + 1);
 while (((VAR_6 & 0x80) == 0x80) && (VAR_5 < VAR_0)) {
  VAR_6 = FUNC_0(VAR_1 + 1);
  VAR_5++;
 }
 VAR_4.bits.sb7 = ((FUNC_0(VAR_1 + 1) >> 3) & 0x7);
 FUNC_1(VAR_1, VAR_3);
 VAR_5 = 0;
 VAR_6 = FUNC_0(VAR_1 + 1);
 while (((VAR_6 & 0x80) == 0x0) && (VAR_5 < VAR_0)) {
  VAR_6 = FUNC_0(VAR_1 + 1);
  VAR_5++;
 }

 FUNC_1(VAR_1, 0x0);
 VAR_5 = 0;
 VAR_6 = FUNC_0(VAR_1 + 1);
 while (((VAR_6 & 0x80) == 0x80) && (VAR_5 < VAR_0)) {
  VAR_6 = FUNC_0(VAR_1 + 1);
  VAR_5++;
 }

 return VAR_4.value ^ 0x800000;
}
