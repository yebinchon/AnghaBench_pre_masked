
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int transient; size_t size; int framebits; int start_band; int end_band; int* tf_change; } ;
typedef int OpusRangeCoder ;
typedef TYPE_1__ CeltFrame ;


 int**** VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(CeltFrame *VAR_1, OpusRangeCoder *VAR_2)
{
    int VAR_3, VAR_4 = 0, VAR_5 = 0, VAR_6 = 0, VAR_7;
    int VAR_8, VAR_9 = VAR_1->transient ? 2 : 4;

    VAR_8 = FUNC_1(VAR_2);
    VAR_7 = (VAR_1->size != 0 && VAR_8+VAR_9+1 <= VAR_1->framebits);

    for (VAR_3 = VAR_1->start_band; VAR_3 < VAR_1->end_band; VAR_3++) {
        if (VAR_8+VAR_9+VAR_7 <= VAR_1->framebits) {
            VAR_4 ^= FUNC_0(VAR_2, VAR_9);
            VAR_8 = FUNC_1(VAR_2);
            VAR_6 |= VAR_4;
        }
        VAR_1->tf_change[VAR_3] = VAR_4;
        VAR_9 = VAR_1->transient ? 4 : 5;
    }

    if (VAR_7 && VAR_0[VAR_1->size][VAR_1->transient][0][VAR_6] !=
                         VAR_0[VAR_1->size][VAR_1->transient][1][VAR_6])
        VAR_5 = FUNC_0(VAR_2, 1);

    for (VAR_3 = VAR_1->start_band; VAR_3 < VAR_1->end_band; VAR_3++) {
        VAR_1->tf_change[VAR_3] = VAR_0[VAR_1->size][VAR_1->transient][VAR_5][VAR_1->tf_change[VAR_3]];
    }
}
