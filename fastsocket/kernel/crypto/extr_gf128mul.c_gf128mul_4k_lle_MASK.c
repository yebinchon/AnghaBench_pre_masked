
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct gf128mul_4k {int * t; } ;
typedef int be128 ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(be128 *VAR_0, struct gf128mul_4k *VAR_1)
{
 u8 *VAR_2 = (u8 *)VAR_0;
 be128 VAR_3[1];
 int VAR_4 = 15;

 *VAR_3 = VAR_1->t[VAR_2[15]];
 while (VAR_4--) {
  FUNC_1(VAR_3);
  FUNC_0(VAR_3, VAR_3, &VAR_1->t[VAR_2[VAR_4]]);
 }
 *VAR_0 = *VAR_3;
}
