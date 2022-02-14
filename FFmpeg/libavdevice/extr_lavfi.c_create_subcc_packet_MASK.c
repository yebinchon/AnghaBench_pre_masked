
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int stream_index; int pos; int pts; int data; } ;
struct TYPE_11__ {TYPE_1__* priv_data; } ;
struct TYPE_10__ {int nb_side_data; int pkt_pos; int pts; TYPE_2__** side_data; } ;
struct TYPE_9__ {scalar_t__ type; int size; int data; } ;
struct TYPE_8__ {int* sink_stream_subcc_map; TYPE_7__ subcc_packet; } ;
typedef TYPE_1__ LavfiContext ;
typedef TYPE_2__ AVFrameSideData ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_7__*,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_1, AVFrame *VAR_2,
                               int VAR_3)
{
    LavfiContext *VAR_4 = VAR_1->priv_data;
    AVFrameSideData *VAR_5;
    int VAR_6, VAR_7, VAR_8;

    if ((VAR_6 = VAR_4->sink_stream_subcc_map[VAR_3]) < 0)
        return 0;
    for (VAR_7 = 0; VAR_7 < VAR_2->nb_side_data; VAR_7++)
        if (VAR_2->side_data[VAR_7]->type == VAR_0)
            break;
    if (VAR_7 >= VAR_2->nb_side_data)
        return 0;
    VAR_5 = VAR_2->side_data[VAR_7];
    if ((VAR_8 = FUNC_0(&VAR_4->subcc_packet, VAR_5->size)) < 0)
        return VAR_8;
    FUNC_1(VAR_4->subcc_packet.data, VAR_5->data, VAR_5->size);
    VAR_4->subcc_packet.stream_index = VAR_6;
    VAR_4->subcc_packet.pts = VAR_2->pts;
    VAR_4->subcc_packet.pos = VAR_2->pkt_pos;
    return 0;
}
