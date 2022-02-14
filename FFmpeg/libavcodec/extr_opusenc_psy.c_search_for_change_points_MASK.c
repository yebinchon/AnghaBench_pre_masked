
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* inflection_points; int inflection_points_count; TYPE_1__** steps; } ;
struct TYPE_4__ {scalar_t__ total_change; } ;
typedef TYPE_2__ OpusPsyContext ;



__attribute__((used)) static void FUNC_0(OpusPsyContext *VAR_0, float VAR_1,
                                     int VAR_2, int VAR_3, int VAR_4,
                                     int VAR_5)
{
    int VAR_6;
    float VAR_7 = 0.0f;
    if ((VAR_3 - VAR_2) <= VAR_4)
        return;
    for (VAR_6 = VAR_2; VAR_6 < VAR_3; VAR_6++) {
        VAR_7 += VAR_0->steps[VAR_6]->total_change;
        if (VAR_7 > VAR_1)
            break;
    }
    if (VAR_6 == VAR_3)
        return;
    FUNC_0(VAR_0, VAR_1 / 2.0f, VAR_2, VAR_6 + 0, VAR_4, VAR_5 + 1);
    VAR_0->inflection_points[VAR_0->inflection_points_count++] = VAR_6;
    FUNC_0(VAR_0, VAR_1 / 2.0f, VAR_6 + 1, VAR_3, VAR_4, VAR_5 + 1);
}
