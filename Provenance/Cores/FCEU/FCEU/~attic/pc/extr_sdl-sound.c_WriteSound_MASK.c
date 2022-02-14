
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;


 int * VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int) ;

void FUNC_1(int32 *VAR_4, int VAR_5)
{
 while(VAR_5)
 {
  while(VAR_1 == VAR_2) FUNC_0(1);
  VAR_0[VAR_3] = *VAR_4;
  VAR_5--;
  VAR_3 = (VAR_3 + 1) % VAR_2;
  VAR_1++;
  VAR_4++;
 }
}
