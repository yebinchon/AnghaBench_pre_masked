
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct gf128mul_64k {TYPE_1__** t; } ;
typedef int be128 ;
struct TYPE_2__ {int * t; } ;


 int FUNC_0 (int *,int *,int *) ;

void FUNC_1(be128 *VAR_0, struct gf128mul_64k *VAR_1)
{
 u8 *VAR_2 = (u8 *)VAR_0;
 be128 VAR_3[1];
 int VAR_4;

 *VAR_3 = VAR_1->t[0]->t[VAR_2[15]];
 for (VAR_4 = 1; VAR_4 < 16; ++VAR_4)
  FUNC_0(VAR_3, VAR_3, &VAR_1->t[VAR_4]->t[VAR_2[15 - VAR_4]]);
 *VAR_0 = *VAR_3;
}
