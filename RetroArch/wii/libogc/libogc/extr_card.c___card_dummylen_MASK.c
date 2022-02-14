
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;

__attribute__((used)) static u32 FUNC_3()
{
 u32 VAR_0 = FUNC_2();
 u32 VAR_1 = 0,VAR_2 = 0,VAR_3 = 1;

 FUNC_1(VAR_0);
 VAR_1 = (FUNC_0()&0x1f)+1;

 do {
  VAR_0 = FUNC_2();
  VAR_1 = VAR_0<<VAR_3;
  VAR_3++;
  if(VAR_3>16) VAR_3 = 1;
  FUNC_1(VAR_1);
  VAR_1 = (FUNC_0()&0x1f)+1;
  VAR_2++;
 }while(VAR_1<4 && VAR_2<10);
 if(VAR_1<4) VAR_1 = 4;

 return VAR_1;

}
