
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int packet_loss; int max_frame_size; int frame_data; int pb; TYPE_2__* frame; TYPE_1__** cdlms; scalar_t__ next_packet_start; scalar_t__ frame_offset; scalar_t__ num_saved_bits; scalar_t__ packet_done; } ;
typedef TYPE_3__ WmallDecodeCtx ;
struct TYPE_9__ {TYPE_3__* priv_data; } ;
struct TYPE_7__ {scalar_t__ nb_samples; } ;
struct TYPE_6__ {scalar_t__ order; } ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_0)
{
    WmallDecodeCtx *VAR_1 = VAR_0->priv_data;
    VAR_1->packet_loss = 1;
    VAR_1->packet_done = 0;
    VAR_1->num_saved_bits = 0;
    VAR_1->frame_offset = 0;
    VAR_1->next_packet_start = 0;
    VAR_1->cdlms[0][0].order = 0;
    VAR_1->frame->nb_samples = 0;
    FUNC_0(&VAR_1->pb, VAR_1->frame_data, VAR_1->max_frame_size);
}
