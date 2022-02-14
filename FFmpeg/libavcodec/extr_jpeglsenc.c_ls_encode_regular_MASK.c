
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* N; int* A; int* B; int range; int qbpp; int limit; int near; } ;
typedef int PutBitContext ;
typedef TYPE_1__ JLSState ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (int *,int,int,int ,int ) ;

__attribute__((used)) static inline void FUNC_3(JLSState *VAR_0, PutBitContext *VAR_1, int VAR_2,
                                     int VAR_3)
{
    int VAR_4;
    int VAR_5;
    int VAR_6;

    for (VAR_4 = 0; (VAR_0->N[VAR_2] << VAR_4) < VAR_0->A[VAR_2]; VAR_4++)
        ;

    VAR_6 = !VAR_0->near && !VAR_4 && (2 * VAR_0->B[VAR_2] <= -VAR_0->N[VAR_2]);

    if (VAR_3 < 0)
        VAR_3 += VAR_0->range;
    if (VAR_3 >= ((VAR_0->range + 1) >> 1)) {
        VAR_3 -= VAR_0->range;
        VAR_5 = 2 * FUNC_0(VAR_3) - 1 - VAR_6;
    } else
        VAR_5 = 2 * VAR_3 + VAR_6;

    FUNC_2(VAR_1, VAR_5, VAR_4, VAR_0->limit, VAR_0->qbpp);

    FUNC_1(VAR_0, VAR_2, VAR_3);
}
