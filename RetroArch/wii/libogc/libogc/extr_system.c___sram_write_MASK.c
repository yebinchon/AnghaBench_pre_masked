
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int*,int,int ,int *) ;
 scalar_t__ FUNC_2 (int ,void*,int,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static u32 FUNC_7(void *VAR_5,u32 VAR_6,u32 VAR_7)
{
 u32 VAR_8,VAR_9;

 if(FUNC_3(VAR_0,VAR_1,VAR_4)==0) return 0;
 if(FUNC_4(VAR_0,VAR_1,VAR_2)==0) {
  FUNC_6(VAR_0);
  return 0;
 }

 VAR_9 = 0;
 VAR_8 = 0xa0000100+(VAR_6<<6);
 if(FUNC_1(VAR_0,&VAR_8,4,VAR_3,((void*)0))==0) VAR_9 |= 0x01;
 if(FUNC_5(VAR_0)==0) VAR_9 |= 0x02;
 if(FUNC_2(VAR_0,VAR_5,VAR_7,VAR_3)==0) VAR_9 |= 0x04;
 if(FUNC_0(VAR_0)==0) VAR_9 |= 0x08;
 if(FUNC_6(VAR_0)==0) VAR_9 |= 0x10;

 if(VAR_9) return 0;
 return 1;
}
