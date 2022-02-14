
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float** m; } ;
typedef TYPE_1__ VG_MAT3X3_T ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__ const*) ;

float FUNC_2(const VG_MAT3X3_T *VAR_0)
{
   FUNC_0(FUNC_1(VAR_0));
   return (VAR_0->m[0][0] * VAR_0->m[1][1]) - (VAR_0->m[1][0] * VAR_0->m[0][1]);
}
