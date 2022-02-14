
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
typedef int u16 ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int*,int,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (void*,size_t) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int) ;

__attribute__((used)) static s32 FUNC_9(s32 VAR_10,void *VAR_11,u32 VAR_12)
{
 u8 *VAR_13;
 u32 VAR_14;
 u8 VAR_15[2];
 u16 VAR_16,VAR_17;
 s32 VAR_18,VAR_19;

 if(VAR_10<0 || VAR_10>=VAR_7) return VAR_2;

 FUNC_5(VAR_10);

 if(FUNC_2(VAR_10,VAR_5,VAR_8)==0) {
  FUNC_3(VAR_10);
  return VAR_2;
 }

 VAR_19 = VAR_3;
 VAR_13 = VAR_11;
 for(VAR_14=0;VAR_14<VAR_12;VAR_14++) VAR_13[VAR_14] = VAR_9;
 if(FUNC_1(VAR_10,VAR_13,1,VAR_6)==0) {
  FUNC_0(VAR_10);
  FUNC_3(VAR_10);
  return VAR_0;
 }

 VAR_18 = FUNC_7();
 while(*VAR_13!=0xfe) {
  *VAR_13 = VAR_9;
  if(FUNC_1(VAR_10,VAR_13,1,VAR_6)==0) {
   FUNC_0(VAR_10);
   FUNC_3(VAR_10);
   return VAR_0;
  }
  if(*VAR_13==0xfe) break;
  if(FUNC_4(VAR_10,VAR_18,1500)!=0) {
   *VAR_13 = VAR_9;
   if(FUNC_1(VAR_10,VAR_13,1,VAR_6)==0) {
    FUNC_0(VAR_10);
    FUNC_3(VAR_10);
    return VAR_0;
   }
   if(*VAR_13!=0xfe) VAR_19 = VAR_1;
   break;
  }
 }

 *VAR_13 = VAR_9;
 if(FUNC_1(VAR_10,VAR_13,VAR_12,VAR_6)==0) {
  FUNC_0(VAR_10);
  FUNC_3(VAR_10);
  return VAR_0;
 }


 FUNC_8(1);

 VAR_15[0] = VAR_15[1] = VAR_9;
 if(FUNC_1(VAR_10,VAR_15,2,VAR_6)==0) {
  FUNC_0(VAR_10);
  FUNC_3(VAR_10);
  return VAR_0;
 }
 VAR_17 = ((VAR_15[0]<<8)&0xff00)|(VAR_15[1]&0xff);

 FUNC_0(VAR_10);
 FUNC_3(VAR_10);

 VAR_16 = FUNC_6(VAR_11,VAR_12);
 if(VAR_16!=VAR_17) VAR_19 = VAR_4;
 return VAR_19;
}
