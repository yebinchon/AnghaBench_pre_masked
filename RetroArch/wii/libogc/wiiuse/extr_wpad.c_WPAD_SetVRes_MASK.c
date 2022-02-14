
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int ** VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int *,int ,int ) ;

s32 FUNC_3(s32 VAR_9,u32 VAR_10,u32 VAR_11)
{
 u32 VAR_12;
 s32 VAR_13;
 int VAR_14;

 if(VAR_9 == VAR_1) {
  for(VAR_14=VAR_0; VAR_14<VAR_5; VAR_14++)
   if((VAR_13 = FUNC_3(VAR_14, VAR_10, VAR_11)) < VAR_3)
    return VAR_13;
  return VAR_3;
 }

 if(VAR_9<VAR_0 || VAR_9>=VAR_5) return VAR_2;

 FUNC_0(VAR_12);
 if(VAR_8==VAR_6) {
  FUNC_1(VAR_12);
  return VAR_4;
 }

 if(VAR_7[VAR_9]!=((void*)0))
  FUNC_2(VAR_7[VAR_9],VAR_10,VAR_11);

 FUNC_1(VAR_12);
 return VAR_3;
}
