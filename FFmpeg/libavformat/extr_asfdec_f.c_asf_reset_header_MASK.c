
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * asf_st; TYPE_2__* streams; scalar_t__ packet_time_start; scalar_t__ packet_time_delta; scalar_t__ packet_multi_size; scalar_t__ packet_frag_timestamp; scalar_t__ packet_frag_size; scalar_t__ packet_frag_offset; scalar_t__ packet_padsize; scalar_t__ packet_key_frame; scalar_t__ packet_replic_size; scalar_t__ packet_seq; scalar_t__ packet_segments; scalar_t__ packet_segsizetype; scalar_t__ packet_timestamp; scalar_t__ packet_property; scalar_t__ packet_flags; scalar_t__ packet_size_left; } ;
struct TYPE_6__ {scalar_t__ seq; scalar_t__ frag_offset; scalar_t__ packet_obj_size; int pkt; } ;
struct TYPE_5__ {TYPE_3__* priv_data; } ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ ASFStream ;
typedef TYPE_3__ ASFContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(AVFormatContext *VAR_0)
{
    ASFContext *VAR_1 = VAR_0->priv_data;
    ASFStream *VAR_2;
    int VAR_3;

    VAR_1->packet_size_left = 0;
    VAR_1->packet_flags = 0;
    VAR_1->packet_property = 0;
    VAR_1->packet_timestamp = 0;
    VAR_1->packet_segsizetype = 0;
    VAR_1->packet_segments = 0;
    VAR_1->packet_seq = 0;
    VAR_1->packet_replic_size = 0;
    VAR_1->packet_key_frame = 0;
    VAR_1->packet_padsize = 0;
    VAR_1->packet_frag_offset = 0;
    VAR_1->packet_frag_size = 0;
    VAR_1->packet_frag_timestamp = 0;
    VAR_1->packet_multi_size = 0;
    VAR_1->packet_time_delta = 0;
    VAR_1->packet_time_start = 0;

    for (VAR_3 = 0; VAR_3 < 128; VAR_3++) {
        VAR_2 = &VAR_1->streams[VAR_3];
        FUNC_0(&VAR_2->pkt);
        VAR_2->packet_obj_size = 0;
        VAR_2->frag_offset = 0;
        VAR_2->seq = 0;
    }
    VAR_1->asf_st = ((void*)0);
}
