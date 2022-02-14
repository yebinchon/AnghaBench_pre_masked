
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int*,int,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static s32 FUNC_7(s32 VAR_9)
{
 u8 VAR_10;
 u32 VAR_11;
 u8 VAR_12[128];
 u8 VAR_13[5] = {0,0,0,0,0};

 if(VAR_9<0 || VAR_9>=VAR_5) return VAR_1;

 VAR_7 = 0xff;
 VAR_13[0] = 0x40;
 VAR_10 = FUNC_6(VAR_13,5);

 if(VAR_8) {
  VAR_7 = 0x00;
  for(VAR_11=0;VAR_11<5;VAR_11++) VAR_13[VAR_11] ^= -1;
 }

 for(VAR_11=0;VAR_11<128;VAR_11++) VAR_12[VAR_11] = VAR_7;

 FUNC_5(VAR_9);

 if(FUNC_3(VAR_9,VAR_3,VAR_6)==0) {
  FUNC_4(VAR_9);
  return VAR_1;
 }

 VAR_11 = 0;
 while(VAR_11<20) {
  if(FUNC_1(VAR_9,VAR_12,128,VAR_4)==0) {
   FUNC_0(VAR_9);
   FUNC_4(VAR_9);
   return VAR_0;
  }
  VAR_11++;
 }
 FUNC_0(VAR_9);

 if(FUNC_2(VAR_9,VAR_3,VAR_6)==0) {
  FUNC_4(VAR_9);
  return VAR_1;
 }

 VAR_10 |= 0x01;
 if(VAR_8) VAR_10 ^= -1;
 if(FUNC_1(VAR_9,VAR_13,5,VAR_4)==0) {
  FUNC_0(VAR_9);
  FUNC_4(VAR_9);
  return VAR_0;
 }

 if(FUNC_1(VAR_9,&VAR_10,1,VAR_4)==0) {
  FUNC_0(VAR_9);
  FUNC_4(VAR_9);
  return VAR_0;
 }

 FUNC_0(VAR_9);
 FUNC_4(VAR_9);
 return VAR_2;
}
