
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
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,int) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static s32 FUNC_7(s32 VAR_9,void *VAR_10)
{
 u8 *VAR_11;
 s32 VAR_12,VAR_13;

 if(VAR_9<0 || VAR_9>=VAR_6) return VAR_2;

 VAR_11 = VAR_10;

 FUNC_5(VAR_9);

 if(FUNC_2(VAR_9,VAR_4,VAR_7)==0) {
  FUNC_3(VAR_9);
  return VAR_2;
 }

 VAR_13 = VAR_3;
 *VAR_11 = VAR_8;
 if(FUNC_1(VAR_9,VAR_11,1,VAR_5)==0) {
  FUNC_0(VAR_9);
  FUNC_3(VAR_9);
  return VAR_0;
 }
 VAR_12 = FUNC_6();
 while(*VAR_11&0x10) {
  *VAR_11 = VAR_8;
  if(FUNC_1(VAR_9,VAR_11,1,VAR_5)==0) {
   FUNC_0(VAR_9);
   FUNC_3(VAR_9);
   return VAR_0;
  }
  if(!(*VAR_11&0x10)) break;
  if(FUNC_4(VAR_9,VAR_12,1500)!=0) {
   *VAR_11 = VAR_8;
   if(FUNC_1(VAR_9,VAR_11,1,VAR_5)==0) {
    FUNC_0(VAR_9);
    FUNC_3(VAR_9);
    return VAR_0;
   }
   if(*VAR_11&0x10) VAR_13 = VAR_1;
   break;
  }
 }

 *(++VAR_11) = VAR_8;
 if(FUNC_1(VAR_9,VAR_11,1,VAR_5)==0) {
  FUNC_0(VAR_9);
  FUNC_3(VAR_9);
  return VAR_0;
 }

 VAR_12 = FUNC_6();
 while(!*VAR_11) {
  *VAR_11 = VAR_8;
  if(FUNC_1(VAR_9,VAR_11,1,VAR_5)==0) {
   FUNC_0(VAR_9);
   FUNC_3(VAR_9);
   return VAR_0;
  }
  if(*VAR_11) break;
  if(FUNC_4(VAR_9,VAR_12,1500)!=0) {
   *VAR_11 = VAR_8;
   if(FUNC_1(VAR_9,VAR_11,1,VAR_5)==0) {
    FUNC_0(VAR_9);
    FUNC_3(VAR_9);
    return VAR_0;
   }
   if(!*VAR_11) VAR_13 = VAR_1;
   break;
  }
 }
 FUNC_0(VAR_9);
 FUNC_3(VAR_9);

 return VAR_13;
}
