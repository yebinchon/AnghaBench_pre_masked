
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int block_align; } ;
struct TYPE_9__ {int max_delay; TYPE_2__** streams; TYPE_1__* priv_data; } ;
struct TYPE_8__ {int time_base; TYPE_6__* codecpar; } ;
struct TYPE_7__ {scalar_t__ num_frames; scalar_t__ max_frames_per_packet; scalar_t__ buf; scalar_t__ buf_ptr; scalar_t__ cur_timestamp; scalar_t__ timestamp; } ;
typedef TYPE_1__ RTPMuxContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ,int ) ;
 int FUNC_1 (TYPE_6__*,int ) ;
 int FUNC_2 (TYPE_3__*,scalar_t__,scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int const*,int) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_1, const uint8_t *VAR_2, int VAR_3)
{
    RTPMuxContext *VAR_4 = VAR_1->priv_data;
    AVStream *VAR_5 = VAR_1->streams[0];
    int VAR_6 = FUNC_1(VAR_5->codecpar, 0);
    int VAR_7 = VAR_5->codecpar->block_align;
    int VAR_8 = VAR_3 / VAR_7;

    while (VAR_8 > 0) {
        if (VAR_4->num_frames > 0 &&
            FUNC_0(VAR_4->cur_timestamp - VAR_4->timestamp, VAR_5->time_base,
                          VAR_1->max_delay, VAR_0) >= 0) {
            FUNC_2(VAR_1, VAR_4->buf, VAR_4->buf_ptr - VAR_4->buf, 1);
            VAR_4->num_frames = 0;
        }

        if (!VAR_4->num_frames) {
            VAR_4->buf_ptr = VAR_4->buf;
            VAR_4->timestamp = VAR_4->cur_timestamp;
        }
        FUNC_3(VAR_4->buf_ptr, VAR_2, VAR_7);
        VAR_8--;
        VAR_4->num_frames++;
        VAR_4->buf_ptr += VAR_7;
        VAR_2 += VAR_7;
        VAR_4->cur_timestamp += VAR_6;

        if (VAR_4->num_frames == VAR_4->max_frames_per_packet) {
            FUNC_2(VAR_1, VAR_4->buf, VAR_4->buf_ptr - VAR_4->buf, 1);
            VAR_4->num_frames = 0;
        }
    }
    return 0;
}
