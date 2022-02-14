
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ** m; } ;
typedef TYPE_1__ VG_MAT3X3_T ;


 int FUNC_0 (int ,float) ;

bool FUNC_1(const VG_MAT3X3_T *VAR_0)
{
   return !FUNC_0(VAR_0->m[2][0], 0.0f) && !FUNC_0(VAR_0->m[2][1], 0.0f) && !FUNC_0(VAR_0->m[2][2], 1.0f);
}
