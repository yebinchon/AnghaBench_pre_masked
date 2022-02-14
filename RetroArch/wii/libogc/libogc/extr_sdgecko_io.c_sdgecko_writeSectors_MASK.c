
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
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int,int*) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,int,int*) ;
 scalar_t__* VAR_4 ;
 scalar_t__ FUNC_10 (scalar_t__) ;

s32 FUNC_11(s32 VAR_5,u32 VAR_6,u32 VAR_7,const void *VAR_8)
{
 u32 VAR_9;
 s32 VAR_10;
 u8 VAR_11[4];
 char *VAR_12 = (char*)VAR_8;

 if(VAR_5<0 || VAR_5>=VAR_2) return VAR_1;

 VAR_10 = FUNC_10(VAR_5);
 if(VAR_10!=0) return VAR_10;

 if(VAR_7<1) return VAR_0;

 if(VAR_3!=VAR_4[VAR_5]) {
  VAR_4[VAR_5] = VAR_3;
  if((VAR_10=FUNC_7(VAR_5,VAR_4[VAR_5]))!=0) return VAR_10;
 }


 VAR_11[0] = (VAR_7>>24)&0xff;
 VAR_11[1] = (VAR_7>>16)&0xff;
 VAR_11[2] = (VAR_7>>8)&0xff;
 VAR_11[3] = VAR_7&0xff;
 if((VAR_10=FUNC_5(VAR_5))!=0) return VAR_10;
 if((VAR_10=FUNC_6(VAR_5,0x17,VAR_11))!=0) return VAR_10;
 if((VAR_10=FUNC_3(VAR_5))!=0) return VAR_10;


 FUNC_9(VAR_5,VAR_6,VAR_11);

 if((VAR_10=FUNC_6(VAR_5,0x19,VAR_11))!=0) return VAR_10;
 if((VAR_10=FUNC_3(VAR_5))!=0) return VAR_10;

 for(VAR_9=0;VAR_9<VAR_7;VAR_9++) {
  if((VAR_10=FUNC_1(VAR_5,VAR_12,VAR_4[VAR_5]))!=0) return VAR_10;
  if((VAR_10=FUNC_0(VAR_5))!=0) {
   if((VAR_10=FUNC_6(VAR_5,0x0C,VAR_11))!=0) return VAR_10;
   return FUNC_8(VAR_5);
  }
  VAR_12 += VAR_4[VAR_5];
 }

 if((VAR_10=FUNC_2(VAR_5))!=0) return VAR_10;
 if((VAR_10=FUNC_6(VAR_5,0x0D,((void*)0)))!=0) return VAR_10;
 return FUNC_4(VAR_5);
}
