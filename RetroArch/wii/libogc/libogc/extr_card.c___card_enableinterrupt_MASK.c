
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
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int*,int,int ,int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_7 ;

__attribute__((used)) static s32 FUNC_4(s32 VAR_8,u32 VAR_9)
{
 u8 VAR_10[2];
 u32 VAR_11;
 s32 VAR_12;

 if(VAR_8<VAR_3 || VAR_8>=VAR_4) return VAR_1;
 if(FUNC_2(VAR_8,VAR_5,VAR_6)==0) return VAR_1;

 VAR_11 = 0;
 VAR_10[0] = 0x81;
 if(VAR_9) VAR_10[1] = 0x01;
 else VAR_10[1] = 0x00;
 if(FUNC_1(VAR_8,VAR_10,2,VAR_7,((void*)0))==0) VAR_11 |= 0x01;
 if(FUNC_3(VAR_8)==0) VAR_11 |= 0x02;
 if(FUNC_0(VAR_8)==0) VAR_11 |= 0x04;

 if(VAR_11) VAR_12 = VAR_0;
 else VAR_12 = VAR_2;

 return VAR_12;
}
