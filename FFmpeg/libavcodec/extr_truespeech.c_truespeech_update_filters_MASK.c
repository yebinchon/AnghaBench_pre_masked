
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int16_t ;
struct TYPE_3__ {int* newvec; scalar_t__* filtbuf; } ;
typedef TYPE_1__ TSContext ;


 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_1(TSContext *VAR_0, int16_t *VAR_1, int VAR_2)
{
    int VAR_3;

    FUNC_0(VAR_0->filtbuf, &VAR_0->filtbuf[60], 86 * sizeof(*VAR_0->filtbuf));
    for(VAR_3 = 0; VAR_3 < 60; VAR_3++){
        VAR_0->filtbuf[VAR_3 + 86] = VAR_1[VAR_3] + VAR_0->newvec[VAR_3] - (VAR_0->newvec[VAR_3] >> 3);
        VAR_1[VAR_3] += VAR_0->newvec[VAR_3];
    }
}
