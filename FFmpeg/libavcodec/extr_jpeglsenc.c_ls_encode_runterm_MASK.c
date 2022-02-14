
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* A; int* N; int* B; int limit; int qbpp; } ;
typedef int PutBitContext ;
typedef TYPE_1__ JLSState ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,int,int,int,int ) ;

__attribute__((used)) static inline void FUNC_2(JLSState *VAR_0, PutBitContext *VAR_1,
                                     int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5;
    int VAR_6, VAR_7;
    int VAR_8 = 365 + VAR_2;
    int VAR_9;

    VAR_9 = VAR_0->A[VAR_8];
    if (VAR_2)
        VAR_9 += VAR_0->N[VAR_8] >> 1;
    for (VAR_5 = 0; (VAR_0->N[VAR_8] << VAR_5) < VAR_9; VAR_5++)
        ;
    VAR_7 = 0;
    if (!VAR_5 && VAR_3 && (2 * VAR_0->B[VAR_8] < VAR_0->N[VAR_8]))
        VAR_7 = 1;

    if (VAR_3 < 0)
        VAR_6 = -(2 * VAR_3) - 1 - VAR_2 + VAR_7;
    else
        VAR_6 = 2 * VAR_3 - VAR_2 - VAR_7;
    FUNC_1(VAR_1, VAR_6, VAR_5, VAR_0->limit - VAR_4 - 1, VAR_0->qbpp);

    if (VAR_3 < 0)
        VAR_0->B[VAR_8]++;
    VAR_0->A[VAR_8] += (VAR_6 + 1 - VAR_2) >> 1;

    FUNC_0(VAR_0, VAR_8);
}
