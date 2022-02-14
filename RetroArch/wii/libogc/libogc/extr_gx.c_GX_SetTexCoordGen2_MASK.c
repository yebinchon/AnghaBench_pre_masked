
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int* texCoordGen; int* texCoordGen2; int mtxIdxLo; int mtxIdxHi; int dirtyState; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int,int,int) ;
 TYPE_1__* VAR_8 ;

void FUNC_1(u16 VAR_9,u32 VAR_10,u32 VAR_11,u32 VAR_12,u32 VAR_13,u32 VAR_14)
{
 u32 VAR_15;
 u32 VAR_16;
 u8 VAR_17,VAR_18;

 if(VAR_9>=VAR_1) return;

 VAR_18 = 0;
 switch(VAR_11) {
  case 137:
   VAR_17 = 0;
   VAR_18 = 1;
   break;
  case 138:
   VAR_17 = 1;
   VAR_18 = 1;
   break;
  case 141:
   VAR_17 = 3;
   VAR_18 = 1;
   break;
  case 136:
   VAR_17 = 4;
   VAR_18 = 1;
   break;
  case 140:
   VAR_17 = 2;
   break;
  case 139:
   VAR_17 = 2;
   break;
  case 135:
   VAR_17 = 5;
   break;
  case 134:
   VAR_17 = 6;
   break;
  case 133:
   VAR_17 = 7;
   break;
  case 132:
   VAR_17 = 8;
   break;
  case 131:
   VAR_17 = 9;
   break;
  case 130:
   VAR_17 = 10;
   break;
  case 129:
   VAR_17 = 11;
   break;
  case 128:
   VAR_17 = 12;
   break;
  default:
   VAR_17 = 5;
   break;
 }

 VAR_16 = 0;
 VAR_15 = (VAR_9&7);
 if((VAR_10==VAR_5 || VAR_10==VAR_4))
 {
  if(VAR_10==VAR_5) VAR_16 = 0x02;

  VAR_16 |= (FUNC_0(VAR_18,2,1));
  VAR_16 |= (FUNC_0(VAR_17,7,5));
 } else if((VAR_10>=VAR_2 && VAR_10<=VAR_3))
 {
  VAR_11 -= VAR_7;
  VAR_10 -= VAR_2;

  VAR_16 = 0x10;
  VAR_16 |= (FUNC_0(VAR_18,2,1));
  VAR_16 |= (FUNC_0(VAR_17,7,5));
  VAR_16 |= (FUNC_0(VAR_11,12,3));
  VAR_16 |= (FUNC_0(VAR_10,15,3));
 } else if(VAR_10==VAR_6) {
  if(VAR_11==140) VAR_16 = 0x20;
  else if(VAR_11==139) VAR_16 = 0x30;
  VAR_16 |= (FUNC_0(VAR_18,2,1));
  VAR_16 |= (FUNC_0(2,7,5));
 }

 VAR_14 -= VAR_0;
 VAR_8->texCoordGen[VAR_15] = VAR_16;
 VAR_8->texCoordGen2[VAR_15] = ((FUNC_0(VAR_13,8,1))|(VAR_14&0x3f));

 switch(VAR_9) {
  case 149:
   VAR_8->mtxIdxLo = (VAR_8->mtxIdxLo&~0xfc0)|(FUNC_0(VAR_12,6,6));
   break;
  case 148:
   VAR_8->mtxIdxLo = (VAR_8->mtxIdxLo&~0x3f000)|(FUNC_0(VAR_12,12,6));
   break;
  case 147:
   VAR_8->mtxIdxLo = (VAR_8->mtxIdxLo&~0xfc0000)|(FUNC_0(VAR_12,18,6));
   break;
  case 146:
   VAR_8->mtxIdxLo = (VAR_8->mtxIdxLo&~0x3f000000)|(FUNC_0(VAR_12,24,6));
   break;
  case 145:
   VAR_8->mtxIdxHi = (VAR_8->mtxIdxHi&~0x3f)|(VAR_12&0x3f);
   break;
  case 144:
   VAR_8->mtxIdxHi = (VAR_8->mtxIdxHi&~0xfc0)|(FUNC_0(VAR_12,6,6));
   break;
  case 143:
   VAR_8->mtxIdxHi = (VAR_8->mtxIdxHi&~0x3f000)|(FUNC_0(VAR_12,12,6));
   break;
  case 142:
   VAR_8->mtxIdxHi = (VAR_8->mtxIdxHi&~0xfc0000)|(FUNC_0(VAR_12,18,6));
   break;
 }
 VAR_8->dirtyState |= (0x04000000|(0x00010000<<VAR_9));
}
