
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ s32 ;
typedef int WPADDataCallback ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

s32 FUNC_1(s32 VAR_3, WPADDataCallback VAR_4)
{
   u32 VAR_5;
   s32 VAR_6 = 0;
   s32 VAR_7;

   for(VAR_5= VAR_0; VAR_5 < VAR_2; VAR_5++)
      if((VAR_7 = FUNC_0(VAR_5)) >= VAR_1)
         VAR_6 += VAR_7;
   return VAR_6;
}
