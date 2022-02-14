
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef int Mtx ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (int ,void*) ;
 scalar_t__ FUNC_3 (scalar_t__,int,int) ;
 scalar_t__ VAR_2 ;

void FUNC_4(Mtx VAR_3,u32 VAR_4,u8 VAR_5)
{
 u32 VAR_6 = 0;
 u32 VAR_7 = (VAR_5==VAR_1)?2:3;

 if(VAR_4<VAR_0) VAR_6 = (FUNC_3(VAR_4,2,8));
 else {
  VAR_4 -= VAR_0;
  VAR_6 = 0x0500 + (FUNC_3(VAR_4,2,8));
 }

 FUNC_0(VAR_6,(VAR_7*4));
 if(VAR_5==VAR_1)
  FUNC_1(VAR_3,(void*)VAR_2);
 else
  FUNC_2(VAR_3,(void*)VAR_2);
}
