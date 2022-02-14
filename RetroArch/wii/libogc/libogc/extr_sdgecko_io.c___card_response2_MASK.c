
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef size_t s32 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t FUNC_0 (size_t,int*,int) ;
 int** VAR_4 ;

__attribute__((used)) static s32 FUNC_1(s32 VAR_5)
{
 u32 VAR_6;

 if(VAR_5<0 || VAR_5>=VAR_3) return VAR_1;

 if((VAR_6=FUNC_0(VAR_5,VAR_4[VAR_5],2))!=0) return VAR_6;
 if(!(VAR_4[VAR_5][0]&0x7c) && !(VAR_4[VAR_5][1]&0x9e)) return VAR_2;
 return VAR_0;
}
