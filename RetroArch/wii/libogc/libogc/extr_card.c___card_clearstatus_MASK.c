
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
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int*,int,int ,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_6 ;

__attribute__((used)) static s32 FUNC_4(s32 VAR_7)
{
 u8 VAR_8;
 u32 VAR_9;
 s32 VAR_10;
 if(VAR_7<VAR_2 || VAR_7>=VAR_3) return VAR_0;
 if(FUNC_2(VAR_7,VAR_4,VAR_5)==0) return VAR_0;

 VAR_9 = 0;
 VAR_8 = 0x89;
 if(FUNC_1(VAR_7,&VAR_8,1,VAR_6,((void*)0))==0) VAR_9 |= 0x01;
 if(FUNC_3(VAR_7)==0) VAR_9 |= 0x02;
 if(FUNC_0(VAR_7)==0) VAR_9 |= 0x04;

 if(VAR_9) VAR_10 = VAR_0;
 else VAR_10 = VAR_1;

 return VAR_10;
}
