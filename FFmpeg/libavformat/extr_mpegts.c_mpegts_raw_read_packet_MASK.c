
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int const uint8_t ;
typedef int int64_t ;
struct TYPE_12__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_11__ {int pts; int duration; scalar_t__ stream_index; int const* data; void* pos; } ;
struct TYPE_10__ {int raw_packet_size; int pcr_incr; int cur_pcr; scalar_t__ mpeg2ts_compute_pcr; } ;
typedef TYPE_1__ MpegTSContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int const*,int) ;
 int FUNC_4 (int ,int,int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (int const*,int const*,int) ;
 scalar_t__ FUNC_8 (int*,int*,int const*) ;
 int FUNC_9 (TYPE_3__*,int const*,int,int const**) ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_4, AVPacket *VAR_5)
{
    MpegTSContext *VAR_6 = VAR_4->priv_data;
    int VAR_7, VAR_8;
    int64_t VAR_9, VAR_10, VAR_11;
    int VAR_12, VAR_13;
    uint8_t VAR_14[12];
    const uint8_t *VAR_15;

    if (FUNC_1(VAR_5, VAR_3) < 0)
        return FUNC_0(VAR_0);
    VAR_7 = FUNC_9(VAR_4, VAR_5->data, VAR_6->raw_packet_size, &VAR_15);
    VAR_5->pos = FUNC_5(VAR_4->pb);
    if (VAR_7 < 0) {
        FUNC_2(VAR_5);
        return VAR_7;
    }
    if (VAR_15 != VAR_5->data)
        FUNC_7(VAR_5->data, VAR_15, VAR_6->raw_packet_size);
    FUNC_6(VAR_4, VAR_6->raw_packet_size);
    if (VAR_6->mpeg2ts_compute_pcr) {

        if (FUNC_8(&VAR_9, &VAR_12, VAR_5->data) == 0) {

            VAR_11 = FUNC_5(VAR_4->pb);
            for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
                FUNC_4(VAR_4->pb, VAR_11 + VAR_8 * VAR_6->raw_packet_size, VAR_2);
                FUNC_3(VAR_4->pb, VAR_14, 12);
                if (FUNC_8(&VAR_10, &VAR_13, VAR_14) == 0) {

                    VAR_6->pcr_incr =
                        ((VAR_10 - VAR_9) * 300 + (VAR_13 - VAR_12)) /
                        (VAR_8 + 1);
                    break;
                }
            }
            FUNC_4(VAR_4->pb, VAR_11, VAR_2);

            VAR_6->cur_pcr = VAR_9 * 300 + VAR_12;
        }
        VAR_5->pts = VAR_6->cur_pcr;
        VAR_5->duration = VAR_6->pcr_incr;
        VAR_6->cur_pcr += VAR_6->pcr_incr;
    }
    VAR_5->stream_index = 0;
    return 0;
}
