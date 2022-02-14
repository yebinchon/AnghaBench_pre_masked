
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numleafbrushes; int firstleafbrush; } ;
typedef TYPE_1__ sin_dleaf_t ;


 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 TYPE_1__* VAR_3 ;

void FUNC_0(int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 sin_dleaf_t *VAR_8;

 VAR_8 = &VAR_3[VAR_4];
 for (VAR_6 = 0; VAR_6 < VAR_8->numleafbrushes; VAR_6++)
 {
  VAR_7 = VAR_2[VAR_8->firstleafbrush + VAR_6];
  VAR_0[VAR_7] = VAR_5;
  VAR_1[VAR_7] = VAR_4;
 }
}
