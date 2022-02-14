
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* A; int* N; int limit; int* B; int twonear; int qbpp; } ;
typedef TYPE_1__ JLSState ;
typedef int GetBitContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *,int,int,int ) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static inline int FUNC_4(GetBitContext *VAR_0, JLSState *VAR_1,
                                      int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7;
    int VAR_8 = 365 + VAR_2;

    VAR_6 = VAR_1->A[VAR_8];
    if (VAR_2)
        VAR_6 += VAR_1->N[VAR_8] >> 1;

    for (VAR_4 = 0; (VAR_1->N[VAR_8] << VAR_4) < VAR_6; VAR_4++)
        ;





    VAR_5 = FUNC_2(VAR_0, VAR_4, VAR_1->limit - VAR_3 - 1,
                               VAR_1->qbpp);


    VAR_7 = 0;
    if (!VAR_4 && (VAR_2 || VAR_5) && (2 * VAR_1->B[VAR_8] < VAR_1->N[VAR_8]))
        VAR_7 = 1;
    VAR_5 += VAR_2 + VAR_7;

    if (VAR_5 & 1) {
        VAR_5 = VAR_7 - ((VAR_5 + 1) >> 1);
        VAR_1->B[VAR_8]++;
    } else {
        VAR_5 = VAR_5 >> 1;
    }

    if(FUNC_0(VAR_5) > 0xFFFF)
        return -0x10000;

    VAR_1->A[VAR_8] += FUNC_0(VAR_5) - VAR_2;
    VAR_5 *= VAR_1->twonear;
    FUNC_1(VAR_1, VAR_8);

    return VAR_5;
}
