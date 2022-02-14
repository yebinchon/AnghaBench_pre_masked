
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int* tevTexMap; int tevTexCoordEnable; int* tevRasOrder; int dirtyState; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int) ;
 TYPE_1__* VAR_5 ;
 int* VAR_6 ;

void FUNC_3(u8 VAR_7,u8 VAR_8,u32 VAR_9,u8 VAR_10)
{
 u8 VAR_11;
 u32 VAR_12,VAR_13,VAR_14;
 u32 VAR_15 = 3+(FUNC_2(VAR_7,1,3));

 VAR_5->tevTexMap[(VAR_7&0xf)] = VAR_9;

 VAR_12 = (VAR_9&~0x100);
 if(VAR_12>=VAR_3) VAR_12 = 0;
 if(VAR_8>=VAR_2) {
  VAR_13 = 0;
  VAR_5->tevTexCoordEnable &= ~(FUNC_1(1,VAR_7,1));
 } else {
  VAR_13 = VAR_8;
  VAR_5->tevTexCoordEnable |= (FUNC_1(1,VAR_7,1));
 }

 if(VAR_7&1) {
  VAR_5->tevRasOrder[VAR_15] = (VAR_5->tevRasOrder[VAR_15]&~0x7000)|(FUNC_1(VAR_12,12,3));
  VAR_5->tevRasOrder[VAR_15] = (VAR_5->tevRasOrder[VAR_15]&~0x38000)|(FUNC_1(VAR_13,15,3));

  VAR_11 = VAR_0;
  if(VAR_10!=VAR_1) VAR_11 = VAR_6[VAR_10];
  VAR_5->tevRasOrder[VAR_15] = (VAR_5->tevRasOrder[VAR_15]&~0x380000)|(FUNC_1(VAR_11,19,3));

  VAR_14 = 1;
  if(VAR_9==VAR_4 || VAR_9&0x100) VAR_14 = 0;
  VAR_5->tevRasOrder[VAR_15] = (VAR_5->tevRasOrder[VAR_15]&~0x40000)|(FUNC_1(VAR_14,18,1));
 } else {
  VAR_5->tevRasOrder[VAR_15] = (VAR_5->tevRasOrder[VAR_15]&~0x7)|(VAR_12&0x7);
  VAR_5->tevRasOrder[VAR_15] = (VAR_5->tevRasOrder[VAR_15]&~0x38)|(FUNC_1(VAR_13,3,3));

  VAR_11 = VAR_0;
  if(VAR_10!=VAR_1) VAR_11 = VAR_6[VAR_10];
  VAR_5->tevRasOrder[VAR_15] = (VAR_5->tevRasOrder[VAR_15]&~0x380)|(FUNC_1(VAR_11,7,3));

  VAR_14 = 1;
  if(VAR_9==VAR_4 || VAR_9&0x100) VAR_14 = 0;
  VAR_5->tevRasOrder[VAR_15] = (VAR_5->tevRasOrder[VAR_15]&~0x40)|(FUNC_1(VAR_14,6,1));
 }
 FUNC_0(VAR_5->tevRasOrder[VAR_15]);
 VAR_5->dirtyState |= 0x0001;
}
