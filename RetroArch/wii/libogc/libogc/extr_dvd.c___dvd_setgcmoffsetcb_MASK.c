
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ s64 ;
typedef int s32 ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_3(s32 VAR_2)
{
 s64 *VAR_3,VAR_4;
 if(VAR_2==0x0010) {
  FUNC_2();
  return;
 }
 if(VAR_2==0x0001) {
  VAR_3 = (s64*)VAR_1;
  VAR_1 = ((void*)0);

  VAR_4 = 0;
  if(VAR_3) VAR_4 = *VAR_3;
  FUNC_0(VAR_4,VAR_0);
  return;
 }
 FUNC_1();
}
