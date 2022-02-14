
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_3__ {int ** v; int ** u; } ;
typedef TYPE_1__ XYRemap ;


 int FUNC_0 (float,float*) ;
 int FUNC_1 (float) ;

__attribute__((used)) static void FUNC_2(float VAR_0, float VAR_1, const XYRemap *VAR_2,
                           uint16_t *VAR_3, uint16_t *VAR_4, int16_t *VAR_5)
{
    float VAR_6[4];
    float VAR_7[4];

    FUNC_0(VAR_0, VAR_6);
    FUNC_0(VAR_1, VAR_7);

    for (int VAR_8 = 0; VAR_8 < 4; VAR_8++) {
        for (int VAR_9 = 0; VAR_9 < 4; VAR_9++) {
            VAR_3[VAR_8 * 4 + VAR_9] = VAR_2->u[VAR_8][VAR_9];
            VAR_4[VAR_8 * 4 + VAR_9] = VAR_2->v[VAR_8][VAR_9];
            VAR_5[VAR_8 * 4 + VAR_9] = FUNC_1(VAR_6[VAR_9] * VAR_7[VAR_8] * 16385.f);
        }
    }
}
