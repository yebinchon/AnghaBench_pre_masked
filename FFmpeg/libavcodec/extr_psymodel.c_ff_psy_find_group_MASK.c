
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ num_ch; } ;
struct TYPE_5__ {TYPE_2__* group; } ;
typedef TYPE_1__ FFPsyContext ;
typedef TYPE_2__ FFPsyChannelGroup ;



FFPsyChannelGroup *FUNC_0(FFPsyContext *VAR_0, int VAR_1)
{
    int VAR_2 = 0, VAR_3 = 0;

    while (VAR_3 <= VAR_1)
        VAR_3 += VAR_0->group[VAR_2++].num_ch;

    return &VAR_0->group[VAR_2-1];
}
