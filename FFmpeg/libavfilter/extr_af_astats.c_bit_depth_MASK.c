
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {unsigned int den; scalar_t__ num; } ;
struct TYPE_5__ {unsigned int maxbitdepth; } ;
typedef TYPE_1__ AudioStatsContext ;
typedef TYPE_2__ AVRational ;



__attribute__((used)) static void FUNC_0(AudioStatsContext *VAR_0, uint64_t VAR_1, uint64_t VAR_2, AVRational *VAR_3)
{
    unsigned VAR_4 = VAR_0->maxbitdepth;

    VAR_1 = VAR_1 & (~VAR_2);

    for (; VAR_4 && !(VAR_1 & 1); --VAR_4, VAR_1 >>= 1);

    VAR_3->den = VAR_4;
    VAR_3->num = 0;

    for (; VAR_4; --VAR_4, VAR_1 >>= 1)
        if (VAR_1 & 1)
            VAR_3->num++;
}
