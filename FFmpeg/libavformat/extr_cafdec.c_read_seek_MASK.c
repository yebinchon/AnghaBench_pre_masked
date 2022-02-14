
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t int64_t ;
struct TYPE_10__ {int pb; TYPE_2__* priv_data; TYPE_3__** streams; } ;
struct TYPE_9__ {TYPE_1__* index_entries; scalar_t__ nb_index_entries; } ;
struct TYPE_8__ {size_t frames_per_packet; size_t bytes_per_packet; scalar_t__ data_size; size_t packet_cnt; size_t frame_cnt; scalar_t__ data_start; } ;
struct TYPE_7__ {size_t timestamp; size_t pos; } ;
typedef TYPE_2__ CafContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 size_t FUNC_0 (size_t,int ) ;
 size_t FUNC_1 (size_t,scalar_t__) ;
 int VAR_0 ;
 size_t FUNC_2 (TYPE_3__*,size_t,int) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_1, int VAR_2,
                     int64_t VAR_3, int VAR_4)
{
    AVStream *VAR_5 = VAR_1->streams[0];
    CafContext *VAR_6 = VAR_1->priv_data;
    int64_t VAR_7, VAR_8, VAR_9;

    VAR_3 = FUNC_0(VAR_3, 0);

    if (VAR_6->frames_per_packet > 0 && VAR_6->bytes_per_packet > 0) {

        VAR_7 = VAR_6->bytes_per_packet * (VAR_3 / VAR_6->frames_per_packet);
        if (VAR_6->data_size > 0)
            VAR_7 = FUNC_1(VAR_7, VAR_6->data_size);
        VAR_8 = VAR_7 / VAR_6->bytes_per_packet;
        VAR_9 = VAR_6->frames_per_packet * VAR_8;
    } else if (VAR_5->nb_index_entries) {
        VAR_8 = FUNC_2(VAR_5, VAR_3, VAR_4);
        VAR_9 = VAR_5->index_entries[VAR_8].timestamp;
        VAR_7 = VAR_5->index_entries[VAR_8].pos;
    } else {
        return -1;
    }

    if (FUNC_3(VAR_1->pb, VAR_7 + VAR_6->data_start, VAR_0) < 0)
        return -1;

    VAR_6->packet_cnt = VAR_8;
    VAR_6->frame_cnt = VAR_9;

    return 0;
}
