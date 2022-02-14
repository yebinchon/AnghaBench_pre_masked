
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_3__ {int ** v; int ** u; } ;
typedef TYPE_1__ XYRemap ;


 int FUNC_0 (float) ;

__attribute__((used)) static void FUNC_1(float VAR_0, float VAR_1, const XYRemap *VAR_2,
                           uint16_t *VAR_3, uint16_t *VAR_4, int16_t *VAR_5)
{
    const int VAR_6 = FUNC_0(VAR_1) + 1;
    const int VAR_7 = FUNC_0(VAR_0) + 1;

    VAR_3[0] = VAR_2->u[VAR_6][VAR_7];
    VAR_4[0] = VAR_2->v[VAR_6][VAR_7];
}
