
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int transient; size_t size; scalar_t__ framebits; int start_band; int end_band; int* tf_change; int const tf_select; } ;
typedef int OpusRangeCoder ;
typedef TYPE_1__ CeltFrame ;


 scalar_t__**** VAR_0 ;
 int FUNC_0 (int *,int const,int) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(CeltFrame *VAR_1, OpusRangeCoder *VAR_2)
{
    int VAR_3 = 0, VAR_4 = 0, VAR_5 = 0, VAR_6;
    int VAR_7 = VAR_1->transient ? 2 : 4;

    VAR_6 = ((VAR_1->size && (FUNC_1(VAR_2) + VAR_7 + 1) <= VAR_1->framebits));

    for (int VAR_8 = VAR_1->start_band; VAR_8 < VAR_1->end_band; VAR_8++) {
        if ((FUNC_1(VAR_2) + VAR_7 + VAR_6) <= VAR_1->framebits) {
            const int VAR_9 = (VAR_4 ^ 1) == VAR_1->tf_change[VAR_8];
            FUNC_0(VAR_2, VAR_9, VAR_7);
            VAR_4 ^= VAR_9;
            VAR_5 |= VAR_4;
        }
        VAR_7 = VAR_1->transient ? 4 : 5;
    }

    if (VAR_6 && VAR_0[VAR_1->size][VAR_1->transient][0][VAR_5] !=
                            VAR_0[VAR_1->size][VAR_1->transient][1][VAR_5]) {
        FUNC_0(VAR_2, VAR_1->tf_select, 1);
        VAR_3 = VAR_1->tf_select;
    }

    for (int VAR_10 = VAR_1->start_band; VAR_10 < VAR_1->end_band; VAR_10++)
        VAR_1->tf_change[VAR_10] = VAR_0[VAR_1->size][VAR_1->transient][VAR_3][VAR_1->tf_change[VAR_10]];
}
