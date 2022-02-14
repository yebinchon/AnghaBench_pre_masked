
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ s32 ;
typedef int card_block ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int **) ;

s32 FUNC_2(s32 VAR_4)
{
 s32 VAR_5;
 card_block *VAR_6 = ((void*)0);

 if(VAR_4<VAR_2 || VAR_4>=VAR_3) return VAR_0;

 if((VAR_5=FUNC_1(VAR_4,&VAR_6))<0) VAR_5 = VAR_0;

 FUNC_0(VAR_4,VAR_5);
 return VAR_1;
}
