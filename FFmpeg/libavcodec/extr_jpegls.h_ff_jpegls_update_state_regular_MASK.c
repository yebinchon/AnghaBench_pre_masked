
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* A; int twonear; int* B; int* N; int* C; } ;
typedef TYPE_1__ JLSState ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static inline int FUNC_4(JLSState *VAR_0,
                                                 int VAR_1, int VAR_2)
{
    if(FUNC_0(VAR_2) > 0xFFFF)
        return -0x10000;
    VAR_0->A[VAR_1] += FUNC_0(VAR_2);
    VAR_2 *= VAR_0->twonear;
    VAR_0->B[VAR_1] += VAR_2;

    FUNC_3(VAR_0, VAR_1);

    if (VAR_0->B[VAR_1] <= -VAR_0->N[VAR_1]) {
        VAR_0->B[VAR_1] = FUNC_1(VAR_0->B[VAR_1] + VAR_0->N[VAR_1], 1 - VAR_0->N[VAR_1]);
        if (VAR_0->C[VAR_1] > -128)
            VAR_0->C[VAR_1]--;
    } else if (VAR_0->B[VAR_1] > 0) {
        VAR_0->B[VAR_1] = FUNC_2(VAR_0->B[VAR_1] - VAR_0->N[VAR_1], 0);
        if (VAR_0->C[VAR_1] < 127)
            VAR_0->C[VAR_1]++;
    }

    return VAR_2;
}
