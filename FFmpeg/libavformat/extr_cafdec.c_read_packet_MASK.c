
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_13__ {TYPE_2__* priv_data; TYPE_3__** streams; int * pb; } ;
struct TYPE_12__ {int size; int dts; int pts; scalar_t__ stream_index; } ;
struct TYPE_11__ {int nb_index_entries; int duration; TYPE_1__* index_entries; } ;
struct TYPE_10__ {scalar_t__ data_size; int data_start; int frames_per_packet; int bytes_per_packet; int packet_cnt; int num_bytes; int frame_cnt; } ;
struct TYPE_9__ {int pos; int timestamp; } ;
typedef TYPE_2__ CafContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,TYPE_4__*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    AVIOContext *VAR_5 = VAR_3->pb;
    AVStream *VAR_6 = VAR_3->streams[0];
    CafContext *VAR_7 = VAR_3->priv_data;
    int VAR_8, VAR_9 = 0, VAR_10 = 0;
    int64_t VAR_11 = VAR_1;

    if (FUNC_3(VAR_5))
        return VAR_0;


    if (VAR_7->data_size > 0) {
        VAR_11 = (VAR_7->data_start + VAR_7->data_size) - FUNC_4(VAR_5);
        if (!VAR_11)
            return VAR_0;
        if (VAR_11 < 0)
            return FUNC_0(VAR_2);
    }

    VAR_10 = VAR_7->frames_per_packet;
    VAR_9 = VAR_7->bytes_per_packet;

    if (VAR_9 > 0 && VAR_10 == 1) {
        VAR_9 = (VAR_1 / VAR_9) * VAR_9;
        VAR_9 = FUNC_1(VAR_9, VAR_11);
        VAR_10 = VAR_9 / VAR_7->bytes_per_packet;
    } else if (VAR_6->nb_index_entries) {
        if (VAR_7->packet_cnt < VAR_6->nb_index_entries - 1) {
            VAR_9 = VAR_6->index_entries[VAR_7->packet_cnt + 1].pos - VAR_6->index_entries[VAR_7->packet_cnt].pos;
            VAR_10 = VAR_6->index_entries[VAR_7->packet_cnt + 1].timestamp - VAR_6->index_entries[VAR_7->packet_cnt].timestamp;
        } else if (VAR_7->packet_cnt == VAR_6->nb_index_entries - 1) {
            VAR_9 = VAR_7->num_bytes - VAR_6->index_entries[VAR_7->packet_cnt].pos;
            VAR_10 = VAR_6->duration - VAR_6->index_entries[VAR_7->packet_cnt].timestamp;
        } else {
            return FUNC_0(VAR_2);
        }
    }

    if (VAR_9 == 0 || VAR_10 == 0 || VAR_9 > VAR_11)
        return FUNC_0(VAR_2);

    VAR_8 = FUNC_2(VAR_5, VAR_4, VAR_9);
    if (VAR_8 < 0)
        return VAR_8;

    VAR_4->size = VAR_8;
    VAR_4->stream_index = 0;
    VAR_4->dts = VAR_4->pts = VAR_7->frame_cnt;

    VAR_7->packet_cnt++;
    VAR_7->frame_cnt += VAR_10;

    return 0;
}
