
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
u32 FUNC_0(u16 VAR_0,u16 VAR_1,u32 VAR_2,u8 VAR_3,u8 VAR_4)
{
 u32 VAR_5,VAR_6,VAR_7,VAR_8,VAR_9,VAR_10;

 switch(VAR_2) {
  case 137:
  case 138:
  case 147:
  case 145:
  case 141:
   VAR_5 = 3;
   VAR_6 = 3;
   break;
  case 128:
  case 136:
  case 135:
  case 151:
  case 146:
  case 149:
  case 150:
  case 143:
  case 148:
  case 139:
  case 140:
   VAR_5 = 3;
   VAR_6 = 2;
   break;
  case 134:
  case 130:
  case 129:
  case 133:
  case 132:
  case 131:
  case 142:
  case 144:
   VAR_5 = 2;
   VAR_6 = 2;
   break;
  default:
   VAR_5 = 2;
   VAR_6 = 2;
   break;
 }

 VAR_9 = 32;
 if(VAR_2==131 || VAR_2==129) VAR_9 = 64;

 VAR_10 = 0;
 if(VAR_3) {
  u32 VAR_11 = (VAR_4&0xff);
  while(VAR_11) {
   u32 VAR_12 = VAR_0&0xffff;
   u32 VAR_13 = VAR_1&0xffff;
   VAR_7 = ((VAR_12+(1<<VAR_5))-1)>>VAR_5;
   VAR_8 = ((VAR_13+(1<<VAR_6))-1)>>VAR_6;
   if(VAR_11==0) return VAR_10;

   VAR_10 += ((VAR_7*VAR_8)*VAR_9);
   if(VAR_12==0x0001 && VAR_13==0x0001) return VAR_10;
   if(VAR_0>0x0001) VAR_0 = (VAR_12>>1);
   else VAR_0 = 0x0001;
   if(VAR_1>0x0001) VAR_1 = (VAR_13>>1);
   else VAR_1 = 0x0001;

   --VAR_11;
  }
  return VAR_10;
 }

 VAR_0 &= 0xffff;
 VAR_7 = (VAR_0+((1<<VAR_5)-1))>>VAR_5;

 VAR_1 &= 0xffff;
 VAR_8 = (VAR_1+((1<<VAR_6)-1))>>VAR_6;

 VAR_10 = ((VAR_7*VAR_8)*VAR_9);

 return VAR_10;
}
