
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef float uint8_t ;
struct TYPE_6__ {int grad_mode; int grad_boundary; int q_unit_cnt; int* gradient; } ;
struct TYPE_5__ {float** alloc_curve; } ;
typedef int GetBitContext ;
typedef TYPE_1__ ATRAC9Context ;
typedef TYPE_2__ ATRAC9BlockData ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static inline int FUNC_2(ATRAC9Context *VAR_1, ATRAC9BlockData *VAR_2,
                                 GetBitContext *VAR_3)
{
    int VAR_4[2];
    int VAR_5[2];
    int VAR_6, VAR_7, VAR_8;
    uint8_t *VAR_9;
    float VAR_10;

    VAR_2->grad_mode = FUNC_1(VAR_3, 2);
    if (VAR_2->grad_mode) {
        VAR_4[0] = FUNC_1(VAR_3, 5);
        VAR_4[1] = 31;
        VAR_5[0] = FUNC_1(VAR_3, 5);
        VAR_5[1] = 31;
    } else {
        VAR_4[0] = FUNC_1(VAR_3, 6);
        VAR_4[1] = FUNC_1(VAR_3, 6) + 1;
        VAR_5[0] = FUNC_1(VAR_3, 5);
        VAR_5[1] = FUNC_1(VAR_3, 5);
    }
    VAR_2->grad_boundary = FUNC_1(VAR_3, 4);

    if (VAR_4[0] >= VAR_4[1] || VAR_4[1] > 31)
        return VAR_0;

    if (VAR_2->grad_boundary > VAR_2->q_unit_cnt)
        return VAR_0;

    VAR_6 = VAR_5[1] - VAR_5[0];
    VAR_7 = 1 - 2*(VAR_6 < 0);
    VAR_8 = VAR_5[0] + VAR_7;
    VAR_10 = (FUNC_0(VAR_6) - 1) / 31.0f;
    VAR_9 = VAR_1->alloc_curve[VAR_4[1] - VAR_4[0] - 1];

    for (int VAR_11 = 0; VAR_11 <= VAR_2->q_unit_cnt; VAR_11++)
        VAR_2->gradient[VAR_11] = VAR_5[VAR_11 >= VAR_4[0]];

    for (int VAR_12 = VAR_4[0]; VAR_12 < VAR_4[1]; VAR_12++)
        VAR_2->gradient[VAR_12] = VAR_8 + VAR_7*((int)(VAR_10*VAR_9[VAR_12 - VAR_4[0]]));

    return 0;
}
