
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* N; int* A; int* B; int near; int qbpp; int limit; } ;
typedef TYPE_1__ JLSState ;
typedef int GetBitContext ;


 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (int *,int,int ,int ) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static inline int FUNC_3(GetBitContext *VAR_0, JLSState *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4;

    for (VAR_3 = 0; (VAR_1->N[VAR_2] << VAR_3) < VAR_1->A[VAR_2]; VAR_3++)
        ;





    VAR_4 = FUNC_1(VAR_0, VAR_3, VAR_1->limit, VAR_1->qbpp);


    if (VAR_4 & 1)
        VAR_4 = -((VAR_4 + 1) >> 1);
    else
        VAR_4 >>= 1;


    if (!VAR_1->near && !VAR_3 && (2 * VAR_1->B[VAR_2] <= -VAR_1->N[VAR_2]))
        VAR_4 = -(VAR_4 + 1);

    VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_4);

    return VAR_4;
}
