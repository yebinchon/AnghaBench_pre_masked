
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int*,int,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,int) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static s32 FUNC_7(s32 VAR_11)
{
 s32 VAR_12,VAR_13,VAR_14;
 u8 VAR_15[32];

 if(VAR_11<0 || VAR_11>=VAR_7) return VAR_2;

 for(VAR_13=0;VAR_13<32;VAR_13++) VAR_15[VAR_13] = VAR_9;

 FUNC_5(VAR_11);

 if(FUNC_2(VAR_11,VAR_4,VAR_8)==0) {
  FUNC_3(VAR_11);
  return VAR_2;
 }

 VAR_12 = VAR_3;
 VAR_15[0] = 0xfd;
 if(VAR_10) VAR_15[0] = 0x02;
 if(FUNC_1(VAR_11,VAR_15,1,VAR_6)==0) {
  FUNC_0(VAR_11);
  FUNC_3(VAR_11);
  return VAR_0;
 }

 VAR_15[0] = VAR_9;
 if(FUNC_1(VAR_11,VAR_15,1,VAR_5)==0) {
  FUNC_0(VAR_11);
  FUNC_3(VAR_11);
  return VAR_0;
 }

 VAR_15[0] = VAR_9;
 if(FUNC_1(VAR_11,VAR_15,1,VAR_5)==0) {
  FUNC_0(VAR_11);
  FUNC_3(VAR_11);
  return VAR_0;
 }

 VAR_15[0] = VAR_9;
 if(FUNC_1(VAR_11,VAR_15,1,VAR_5)==0) {
  FUNC_0(VAR_11);
  FUNC_3(VAR_11);
  return VAR_0;
 }

 VAR_15[0] = VAR_9;
 if(FUNC_1(VAR_11,VAR_15,1,VAR_5)==0) {
  FUNC_0(VAR_11);
  FUNC_3(VAR_11);
  return VAR_0;
 }

 VAR_14 = FUNC_6();
 VAR_12 = VAR_3;
 while(VAR_15[0]==0) {
  VAR_15[0] = VAR_9;
  if(FUNC_1(VAR_11,VAR_15,1,VAR_5)==0) {
   FUNC_0(VAR_11);
   FUNC_3(VAR_11);
   return VAR_0;
  }
  if(VAR_15[0]) break;
  if(FUNC_4(VAR_11,VAR_14,1500)!=0) {
   VAR_15[0] = VAR_9;
   if(FUNC_1(VAR_11,VAR_15,1,VAR_5)==0) {
    FUNC_0(VAR_11);
    FUNC_3(VAR_11);
    return VAR_0;
   }
   if(!VAR_15[0]) VAR_12 = VAR_1;
   break;
  }
 }

 FUNC_0(VAR_11);
 FUNC_3(VAR_11);
 return VAR_12;
}
