
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__* priv_data; } ;
struct TYPE_8__ {TYPE_3__* sps; } ;
struct TYPE_11__ {TYPE_1__ ps; } ;
struct TYPE_10__ {int max_sub_layers; TYPE_2__* temporal_layer; } ;
struct TYPE_9__ {scalar_t__ max_dec_pic_buffering; } ;
typedef TYPE_3__ HEVCSPS ;
typedef TYPE_4__ HEVCContext ;
typedef TYPE_5__ AVCodecContext ;
typedef int AVBufferRef ;


 int FUNC_0 (TYPE_5__*,int *,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_0,
                                   AVBufferRef *VAR_1)
{
    const HEVCContext *VAR_2 = VAR_0->priv_data;
    const HEVCSPS *VAR_3 = VAR_2->ps.sps;
    return FUNC_0(VAR_0, VAR_1, VAR_3->temporal_layer[VAR_3->max_sub_layers - 1].max_dec_pic_buffering + 1, 1);
}
