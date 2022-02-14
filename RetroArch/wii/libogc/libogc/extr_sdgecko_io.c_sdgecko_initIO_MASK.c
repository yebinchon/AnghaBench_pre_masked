
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t s32 ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (size_t,int ,int*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (size_t) ;
 int VAR_13 ;
 scalar_t__ FUNC_5 (size_t) ;
 scalar_t__ FUNC_6 (size_t) ;
 scalar_t__ FUNC_7 (size_t) ;
 scalar_t__ FUNC_8 (size_t) ;
 scalar_t__ FUNC_9 (size_t,int) ;
 scalar_t__ FUNC_10 (size_t) ;
 scalar_t__* VAR_14 ;
 int * VAR_15 ;
 int VAR_16 ;
 scalar_t__* VAR_17 ;
 int * VAR_18 ;
 int* VAR_19 ;
 int** VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 size_t FUNC_11 (size_t) ;

s32 FUNC_12(s32 VAR_24)
{
 if(VAR_24<0 || VAR_24>=VAR_8) return VAR_2;

 u32 VAR_25 = 0;
 FUNC_0(VAR_24,VAR_4,&VAR_25);
 if ( VAR_25 != -1 ) return VAR_2;

 if(VAR_22>5) {
  VAR_22 = 0;
  return VAR_1;
 }

 VAR_17[VAR_24] = FUNC_2(VAR_24);

 if(VAR_17[VAR_24]==VAR_10) {
  VAR_23 = 0;
  VAR_16 = VAR_5;
  VAR_14[VAR_24] = VAR_11;
  VAR_18[VAR_24] = VAR_7;
  VAR_15[VAR_24] = VAR_0;
  if(FUNC_10(VAR_24)!=0) {
   VAR_23 = 1;
   if(FUNC_10(VAR_24)!=0) goto exit;
  }

  if(FUNC_7(VAR_24)!=0) goto exit;
  if((VAR_20[VAR_24][3]==1) && (VAR_20[VAR_24][4]==0xAA)) VAR_14[VAR_24] = VAR_12;

  if(FUNC_8(VAR_24)!=0) goto exit;
  if(FUNC_4(VAR_24)!=0) goto exit;
  if(FUNC_3(VAR_24)!=0) goto exit;

  if(VAR_14[VAR_24]==VAR_12) {
   if(FUNC_6(VAR_24)!=0) goto exit;
   if(VAR_20[VAR_24][1]&0x40) VAR_15[VAR_24] = VAR_9;
  }

  VAR_19[VAR_24] = 1<<FUNC_1(VAR_24);
  if(FUNC_9(VAR_24,VAR_19[VAR_24])!=0) goto exit;

  if(FUNC_5(VAR_24)!=0) goto exit;

  VAR_22 = 0;
  VAR_18[VAR_24] = VAR_6;
  return VAR_3;
exit:
  VAR_21 = VAR_13;
  return FUNC_11(VAR_24);
 }
 return VAR_2;
}
