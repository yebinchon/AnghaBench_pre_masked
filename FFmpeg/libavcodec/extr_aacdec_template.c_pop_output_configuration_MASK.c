
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* oc; TYPE_1__* avctx; } ;
struct TYPE_7__ {scalar_t__ status; int layout_map_tags; int layout_map; int channel_layout; int channels; } ;
struct TYPE_6__ {int channel_layout; int channels; } ;
typedef TYPE_3__ AACContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(AACContext *VAR_2) {
    if (VAR_2->oc[1].status != VAR_0 && VAR_2->oc[0].status != VAR_1) {
        VAR_2->oc[1] = VAR_2->oc[0];
        VAR_2->avctx->channels = VAR_2->oc[1].channels;
        VAR_2->avctx->channel_layout = VAR_2->oc[1].channel_layout;
        FUNC_0(VAR_2, VAR_2->oc[1].layout_map, VAR_2->oc[1].layout_map_tags,
                         VAR_2->oc[1].status, 0);
    }
}
