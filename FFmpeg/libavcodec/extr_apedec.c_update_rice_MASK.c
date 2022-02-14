
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int k; unsigned int ksum; } ;
typedef TYPE_1__ APERice ;



__attribute__((used)) static inline void FUNC_0(APERice *VAR_0, unsigned int VAR_1)
{
    int VAR_2 = VAR_0->k ? (1 << (VAR_0->k + 4)) : 0;
    VAR_0->ksum += ((VAR_1 + 1) / 2) - ((VAR_0->ksum + 16) >> 5);

    if (VAR_0->ksum < VAR_2)
        VAR_0->k--;
    else if (VAR_0->ksum >= (1 << (VAR_0->k + 5)) && VAR_0->k < 24)
        VAR_0->k++;
}
