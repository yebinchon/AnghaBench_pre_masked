
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
__attribute__((used)) static void FUNC_0(u32 VAR_0,u16 VAR_1,u16 VAR_2,u32 *VAR_3,u32 *VAR_4,u32 *VAR_5)
{
 u32 VAR_6,VAR_7,VAR_8;

 switch(VAR_0) {
  case 137:
  case 135:
  case 146:
  case 144:
  case 140:
   VAR_6 = 3;
   VAR_7 = 3;
   break;
  case 128:
  case 136:
  case 150:
  case 145:
  case 148:
  case 149:
  case 138:
  case 139:
   VAR_6 = 3;
   VAR_7 = 2;
   break;
  case 134:
  case 143:
  case 142:
  case 147:
  case 130:
  case 129:
  case 141:
  case 133:
  case 132:
  case 131:
   VAR_6 = 2;
   VAR_7 = 2;
   break;
  default:
   VAR_6 = 0;
   VAR_7 = 0;
   break;
 }

 if(!(VAR_1&0xffff)) VAR_1 = 1;
 if(!(VAR_2&0xffff)) VAR_2 = 1;

 VAR_1 &= 0xffff;
 VAR_8 = (VAR_1+((1<<VAR_6)-1))>>VAR_6;
 *VAR_3 = VAR_8;

 VAR_2 &= 0xffff;
 VAR_8 = (VAR_2+((1<<VAR_7)-1))>>VAR_7;
 *VAR_4 = VAR_8;

 *VAR_5 = 1;
 if(VAR_0==131 || VAR_0==129) *VAR_5 = 2;
}
