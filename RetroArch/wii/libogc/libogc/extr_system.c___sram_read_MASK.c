
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (void*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,void*,int,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int*,int,int ,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_4 ;

__attribute__((used)) static u32 FUNC_8(void *VAR_5)
{
 u32 VAR_6,VAR_7;

 FUNC_0(VAR_5,64);

 if(FUNC_4(VAR_0,VAR_1,((void*)0))==0) return 0;
 if(FUNC_5(VAR_0,VAR_1,VAR_3)==0) {
  FUNC_7(VAR_0);
  return 0;
 }

 VAR_7 = 0;
 VAR_6 = 0x20000100;
 if(FUNC_3(VAR_0,&VAR_6,4,VAR_4,((void*)0))==0) VAR_7 |= 0x01;
 if(FUNC_6(VAR_0)==0) VAR_7 |= 0x02;
 if(FUNC_2(VAR_0,VAR_5,64,VAR_2,((void*)0))==0) VAR_7 |= 0x04;
 if(FUNC_6(VAR_0)==0) VAR_7 |= 0x08;
 if(FUNC_1(VAR_0)==0) VAR_7 |= 0x10;
 if(FUNC_7(VAR_0)==0) VAR_7 |= 0x20;

 if(VAR_7) return 0;
 return 1;
}
