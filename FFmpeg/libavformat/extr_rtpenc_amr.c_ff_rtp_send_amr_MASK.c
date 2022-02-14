
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int max_delay; TYPE_2__** streams; TYPE_1__* priv_data; } ;
struct TYPE_7__ {int time_base; } ;
struct TYPE_6__ {int max_frames_per_packet; int* buf_ptr; int* buf; int num_frames; int max_payload_size; scalar_t__ cur_timestamp; scalar_t__ timestamp; } ;
typedef TYPE_1__ RTPMuxContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int*,int,int) ;
 int FUNC_2 (int*,int const*,int) ;
 int FUNC_3 (int*,int*,int) ;

void FUNC_4(AVFormatContext *VAR_1, const uint8_t *VAR_2, int VAR_3)
{
    RTPMuxContext *VAR_4 = VAR_1->priv_data;
    AVStream *VAR_5 = VAR_1->streams[0];
    int VAR_6 = 1 + VAR_4->max_frames_per_packet;
    uint8_t *VAR_7;
    int VAR_8;


    VAR_8 = VAR_4->buf_ptr - VAR_4->buf;
    if (VAR_4->num_frames &&
        (VAR_4->num_frames == VAR_4->max_frames_per_packet ||
         VAR_8 + VAR_3 - 1 > VAR_4->max_payload_size ||
         FUNC_0(VAR_4->cur_timestamp - VAR_4->timestamp, VAR_5->time_base,
                       VAR_1->max_delay, VAR_0) >= 0)) {
        int VAR_9 = VAR_4->num_frames + 1;
        VAR_7 = VAR_4->buf + VAR_6 - VAR_9;
        if (VAR_7 != VAR_4->buf)
            FUNC_3(VAR_7, VAR_4->buf, VAR_9);

        FUNC_1(VAR_1, VAR_7, VAR_4->buf_ptr - VAR_7, 1);

        VAR_4->num_frames = 0;
    }

    if (!VAR_4->num_frames) {
        VAR_4->buf[0] = 0xf0;
        VAR_4->buf_ptr = VAR_4->buf + VAR_6;
        VAR_4->timestamp = VAR_4->cur_timestamp;
    } else {

        VAR_4->buf[1 + VAR_4->num_frames - 1] |= 0x80;
    }


    VAR_4->buf[1 + VAR_4->num_frames++] = VAR_2[0] & 0x7C;
    VAR_2++;
    VAR_3--;
    FUNC_2(VAR_4->buf_ptr, VAR_2, VAR_3);
    VAR_4->buf_ptr += VAR_3;
}
