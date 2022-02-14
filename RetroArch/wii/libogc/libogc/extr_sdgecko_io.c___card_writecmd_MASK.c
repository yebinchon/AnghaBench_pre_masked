
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int*,int,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (void*,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static s32 FUNC_6(s32 VAR_9,void *VAR_10,s32 VAR_11)
{
 u8 VAR_12,*VAR_13;
 u8 VAR_14[32];
 u32 VAR_15;

 if(VAR_9<0 || VAR_9>=VAR_5) return VAR_1;

 VAR_13 = VAR_10;
 VAR_13[0] |= 0x40;
 VAR_12 = FUNC_5(VAR_10,VAR_11);

 if(VAR_8) {
  for(VAR_15=0;VAR_15<VAR_11;VAR_15++) VAR_13[VAR_15] ^= -1;
 }

 FUNC_4(VAR_9);

 if(FUNC_2(VAR_9,VAR_3,VAR_6)==0) {
  FUNC_3(VAR_9);
  return VAR_1;
 }

 for(VAR_15=0;VAR_15<32;VAR_15++) VAR_14[VAR_15] = VAR_7;

 if(FUNC_1(VAR_9,VAR_14,10,VAR_4)==0) {
  FUNC_0(VAR_9);
  FUNC_3(VAR_9);
  return VAR_0;
 }

 VAR_12 |= 0x01;
 if(VAR_8) VAR_12 ^= -1;
 if(FUNC_1(VAR_9,VAR_10,VAR_11,VAR_4)==0) {
  FUNC_0(VAR_9);
  FUNC_3(VAR_9);
  return VAR_0;
 }
 if(FUNC_1(VAR_9,&VAR_12,1,VAR_4)==0) {
  FUNC_0(VAR_9);
  FUNC_3(VAR_9);
  return VAR_0;
 }

 FUNC_0(VAR_9);
 FUNC_3(VAR_9);
 return VAR_2;
}
