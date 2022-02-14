
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ s32 ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static bool FUNC_4(s32 VAR_5)
{
 s32 VAR_6;

 if(VAR_5<0 || VAR_5>=VAR_2) return VAR_1;
 while((VAR_6=FUNC_2(VAR_5))==0);
 if(VAR_6!=1) return VAR_1;

 if(!(FUNC_1(VAR_5)&VAR_0)) {
  if(FUNC_0(VAR_5,VAR_4)==0) return VAR_1;
  FUNC_3(VAR_5);
 }
 return VAR_3;
}
