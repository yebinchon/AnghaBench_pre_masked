
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int*,int) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 scalar_t__* VAR_6 ;
 int* VAR_7 ;
 int ** VAR_8 ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static s32 FUNC_6(s32 VAR_9)
{
 u8 VAR_10[5] = {0,0,0,0,0};
 s32 VAR_11;
 s32 VAR_12;

 if(VAR_9<0 || VAR_9>=VAR_4) return VAR_1;
 VAR_11 = 0;
 VAR_12 = FUNC_5();
 do {
  if(VAR_6[VAR_9]==VAR_5) {
   FUNC_2(VAR_9);
   VAR_10[0] = 0x29;
   VAR_10[1] = 0x40;
  } else
   VAR_10[0] = 0x01;

  if((VAR_11=FUNC_3(VAR_9,VAR_10,5))!=0) {
   return VAR_11;
  }
  if((VAR_11=FUNC_1(VAR_9,VAR_8[VAR_9],1))!=0) return VAR_11;
  if((VAR_11=FUNC_4(VAR_9,VAR_8[VAR_9][0]))!=0) return VAR_11;
  if(!(VAR_7[VAR_9]&VAR_3)) return VAR_2;

  VAR_11 = FUNC_0(VAR_9,VAR_12,1500);
 } while(VAR_11==0);

 if(VAR_6[VAR_9]==VAR_5) {
  FUNC_2(VAR_9);
  VAR_10[0] = 0x29;
  VAR_10[1] = 0x40;
 } else
  VAR_10[0] = 0x01;

 if((VAR_11=FUNC_3(VAR_9,VAR_10,5))!=0) {
  return VAR_11;
 }
 if((VAR_11=FUNC_1(VAR_9,VAR_8[VAR_9],1))!=0) return VAR_11;
 if((VAR_11=FUNC_4(VAR_9,VAR_8[VAR_9][0]))!=0) return VAR_11;
 if(VAR_7[VAR_9]&VAR_3) return VAR_0;

 return VAR_2;
}
