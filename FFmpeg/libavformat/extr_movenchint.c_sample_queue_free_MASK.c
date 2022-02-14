
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* data; scalar_t__ own_data; } ;
struct TYPE_4__ {int len; scalar_t__ size; TYPE_3__* samples; } ;
typedef TYPE_1__ HintSampleQueue ;


 int FUNC_0 (TYPE_3__**) ;

__attribute__((used)) static void FUNC_1(HintSampleQueue *VAR_0)
{
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->len; VAR_1++)
        if (VAR_0->samples[VAR_1].own_data)
            FUNC_0(&VAR_0->samples[VAR_1].data);
    FUNC_0(&VAR_0->samples);
    VAR_0->len = 0;
    VAR_0->size = 0;
}
