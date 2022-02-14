
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* priv; } ;
struct TYPE_9__ {int channels; TYPE_4__* dst; } ;
struct TYPE_8__ {double ratioA; double ratioB; } ;
struct TYPE_7__ {TYPE_2__* chan; } ;
typedef TYPE_1__ DeesserContext ;
typedef TYPE_2__ DeesserChannel ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->dst;
    DeesserContext *VAR_3 = VAR_2->priv;

    VAR_3->chan = FUNC_1(VAR_1->channels, sizeof(*VAR_3->chan));
    if (!VAR_3->chan)
        return FUNC_0(VAR_0);

    for (int VAR_4 = 0; VAR_4 < VAR_1->channels; VAR_4++) {
        DeesserChannel *VAR_5 = &VAR_3->chan[VAR_4];

        VAR_5->ratioA = VAR_5->ratioB = 1.0;
    }

    return 0;
}
