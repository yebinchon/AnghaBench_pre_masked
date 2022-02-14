
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef float uint16_t ;
typedef int ptrdiff_t ;
struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {int depth; } ;
typedef TYPE_1__ DeflickerContext ;
typedef TYPE_2__ AVFilterContext ;


 float FUNC_0 (float const,int ,int const) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_0,
                       const uint8_t *VAR_1, ptrdiff_t VAR_2,
                       uint8_t *VAR_3, ptrdiff_t VAR_4,
                       int VAR_5, int VAR_6, float VAR_7)
{
    DeflickerContext *VAR_8 = VAR_0->priv;
    const uint16_t *VAR_9 = (const uint16_t *)VAR_1;
    uint16_t *VAR_10 = (uint16_t *)VAR_3;
    const int VAR_11 = (1 << VAR_8->depth) - 1;
    int VAR_12, VAR_13;

    for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
        for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
            VAR_10[VAR_12] = FUNC_0(VAR_9[VAR_12] * VAR_7, 0, VAR_11);
        }

        VAR_10 += VAR_4 / 2;
        VAR_9 += VAR_2 / 2;
    }

    return 0;
}
