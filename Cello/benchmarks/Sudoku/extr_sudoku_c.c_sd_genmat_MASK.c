
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int** c; int** r; } ;
typedef TYPE_1__ sdaux_t ;
typedef scalar_t__ int8_t ;


 TYPE_1__* FUNC_0 (int,int) ;

sdaux_t *FUNC_1()
{
 sdaux_t *VAR_0;
 int VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 int8_t VAR_8[324];
 VAR_0 = FUNC_0(1, sizeof(sdaux_t));
 for (VAR_1 = VAR_4 = 0; VAR_1 < 9; ++VAR_1)
  for (VAR_2 = 0; VAR_2 < 9; ++VAR_2)
   for (VAR_3 = 0; VAR_3 < 9; ++VAR_3)
    VAR_0->c[VAR_4][0] = 9 * VAR_1 + VAR_2,
    VAR_0->c[VAR_4][1] = (VAR_1/3*3 + VAR_2/3) * 9 + VAR_3 + 81,
    VAR_0->c[VAR_4][2] = 9 * VAR_1 + VAR_3 + 162,
    VAR_0->c[VAR_4][3] = 9 * VAR_2 + VAR_3 + 243,
    ++VAR_4;
 for (VAR_5 = 0; VAR_5 < 324; ++VAR_5) VAR_8[VAR_5] = 0;
 for (VAR_4 = 0; VAR_4 < 729; ++VAR_4)
  for (VAR_6 = 0; VAR_6 < 4; ++VAR_6)
   VAR_3 = VAR_0->c[VAR_4][VAR_6], VAR_0->r[VAR_3][VAR_8[VAR_3]++] = VAR_4;
 return VAR_0;
}
