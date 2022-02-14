
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ eof_reached; } ;
struct TYPE_13__ {TYPE_6__* pb; TYPE_1__* priv_data; } ;
struct TYPE_12__ {int size; int stream_index; int pts; int duration; int data; } ;
struct TYPE_11__ {int get_next; int size; int* packet; int audio_pos; } ;
typedef TYPE_1__ BMVContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_3__*,int ,char*,int,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int**,int) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*,int*,int) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (int ,int*,int) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_8, AVPacket *VAR_9)
{
    BMVContext *VAR_10 = VAR_8->priv_data;
    int VAR_11, VAR_12;

    while (VAR_10->get_next) {
        if (VAR_8->pb->eof_reached)
            return VAR_0;
        VAR_11 = FUNC_4(VAR_8->pb);
        if (VAR_11 == VAR_5)
            continue;
        if (VAR_11 == VAR_4)
            return VAR_0;
        VAR_10->size = FUNC_6(VAR_8->pb);
        if (!VAR_10->size)
            return VAR_1;
        if ((VAR_12 = FUNC_3(&VAR_10->packet, VAR_10->size + 1)) < 0)
            return VAR_12;
        VAR_10->packet[0] = VAR_11;
        if (FUNC_5(VAR_8->pb, VAR_10->packet + 1, VAR_10->size) != VAR_10->size)
            return FUNC_0(VAR_6);
        if (VAR_11 & VAR_3) {
            int VAR_13 = VAR_10->packet[1] * 65 + 1;
            if (VAR_13 >= VAR_10->size) {
                FUNC_1(VAR_8, VAR_2, "Reported audio size %d is bigger than packet size (%d)\n",
                       VAR_13, VAR_10->size);
                return VAR_1;
            }
            if (FUNC_2(VAR_9, VAR_13) < 0)
                return FUNC_0(VAR_7);
            FUNC_7(VAR_9->data, VAR_10->packet + 1, VAR_9->size);
            VAR_9->stream_index = 1;
            VAR_9->pts = VAR_10->audio_pos;
            VAR_9->duration = VAR_10->packet[1] * 32;
            VAR_10->audio_pos += VAR_9->duration;
            VAR_10->get_next = 0;
            return VAR_9->size;
        } else
            break;
    }
    if (FUNC_2(VAR_9, VAR_10->size + 1) < 0)
        return FUNC_0(VAR_7);
    VAR_9->stream_index = 0;
    VAR_10->get_next = 1;
    FUNC_7(VAR_9->data, VAR_10->packet, VAR_9->size);
    return VAR_9->size;
}
