
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; TYPE_1__* avctx; } ;
typedef TYPE_2__ WavPackEncodeContext ;
struct TYPE_4__ {scalar_t__ sample_rate; } ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static void FUNC_0(WavPackEncodeContext *VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < 15; VAR_3++) {
        if (VAR_1[VAR_3] == VAR_2->avctx->sample_rate)
            break;
    }

    VAR_2->flags = VAR_3 << VAR_0;
}
