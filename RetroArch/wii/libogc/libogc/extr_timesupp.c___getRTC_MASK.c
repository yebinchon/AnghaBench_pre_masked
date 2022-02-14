
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int*) ;
 int FUNC_2 () ;

__attribute__((used)) static u32 FUNC_3(u32 *VAR_1)
{
 u32 VAR_2,VAR_3,VAR_4;

 FUNC_2();

 VAR_2 = 0;

 while(VAR_2<16) {
  if(FUNC_1(&VAR_3)==0
   || FUNC_1(&VAR_4)==0) {
   FUNC_0(VAR_0);
   break;
  }
  if(VAR_3==VAR_4) {
   *VAR_1 = VAR_3;
   FUNC_0(VAR_0);
   return 1;
  }
  VAR_2++;
 }
 return 0;
}
