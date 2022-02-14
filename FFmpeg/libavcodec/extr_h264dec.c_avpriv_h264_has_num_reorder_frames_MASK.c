
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* priv_data; } ;
struct TYPE_7__ {TYPE_1__* sps; } ;
struct TYPE_8__ {TYPE_2__ ps; } ;
struct TYPE_6__ {int num_reorder_frames; } ;
typedef TYPE_3__ H264Context ;
typedef TYPE_4__ AVCodecContext ;



int FUNC_0(AVCodecContext *VAR_0)
{
    H264Context *VAR_1 = VAR_0->priv_data;
    return VAR_1 && VAR_1->ps.sps ? VAR_1->ps.sps->num_reorder_frames : 0;
}
