
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int nb_streams; TYPE_1__** asf_st; scalar_t__ sub_dts; scalar_t__ prop_flags; scalar_t__ nb_sub; scalar_t__ nb_mult_left; scalar_t__ mult_sub_len; scalar_t__ dts_delta; scalar_t__ rep_data_len; scalar_t__ pad_len; int first_packet_offset; int packet_offset; scalar_t__ sub_header_offset; scalar_t__ sub_left; scalar_t__ return_subpayload; scalar_t__ offset; int state; } ;
struct TYPE_8__ {int avpkt; scalar_t__ duration; scalar_t__ dts; scalar_t__ flags; scalar_t__ data_size; scalar_t__ size_left; } ;
struct TYPE_7__ {TYPE_4__* priv_data; } ;
struct TYPE_6__ {TYPE_3__ pkt; } ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ ASFPacket ;
typedef TYPE_4__ ASFContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(AVFormatContext *VAR_1)
{
    ASFContext *VAR_2 = VAR_1->priv_data;
    int VAR_3;

    VAR_2->state = VAR_0;
    VAR_2->offset = 0;
    VAR_2->return_subpayload = 0;
    VAR_2->sub_left = 0;
    VAR_2->sub_header_offset = 0;
    VAR_2->packet_offset = VAR_2->first_packet_offset;
    VAR_2->pad_len = 0;
    VAR_2->rep_data_len = 0;
    VAR_2->dts_delta = 0;
    VAR_2->mult_sub_len = 0;
    VAR_2->nb_mult_left = 0;
    VAR_2->nb_sub = 0;
    VAR_2->prop_flags = 0;
    VAR_2->sub_dts = 0;
    for (VAR_3 = 0; VAR_3 < VAR_2->nb_streams; VAR_3++) {
        ASFPacket *VAR_4 = &VAR_2->asf_st[VAR_3]->pkt;
        VAR_4->size_left = 0;
        VAR_4->data_size = 0;
        VAR_4->duration = 0;
        VAR_4->flags = 0;
        VAR_4->dts = 0;
        VAR_4->duration = 0;
        FUNC_1(&VAR_4->avpkt);
        FUNC_0(&VAR_4->avpkt);
    }
}
