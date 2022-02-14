
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_19__ {TYPE_3__* pb; TYPE_1__* priv_data; } ;
struct TYPE_18__ {int error; scalar_t__ eof_reached; } ;
struct TYPE_17__ {int duration; int stream_index; int flags; } ;
struct TYPE_16__ {int next_chunk_is_video; int current_audio_chunk; unsigned int audio_chunk_size2; unsigned int audio_chunk_size1; unsigned int block_align; scalar_t__ audio_present; int audio_stream_index; int video_stream_index; } ;
typedef TYPE_1__ IdcinDemuxContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,unsigned int) ;
 int FUNC_2 (TYPE_4__*,int ,char*,...) ;
 int * FUNC_3 (TYPE_2__*,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,unsigned char*,int) ;
 unsigned int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int) ;
 int FUNC_9 (int *,int*,int ) ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_9,
                             AVPacket *VAR_10)
{
    int VAR_11;
    unsigned int VAR_12;
    unsigned int VAR_13;
    IdcinDemuxContext *VAR_14 = VAR_9->priv_data;
    AVIOContext *VAR_15 = VAR_9->pb;
    int VAR_16;
    int VAR_17;
    unsigned char VAR_18, VAR_19, VAR_20;
    unsigned char VAR_21[768];
    uint32_t VAR_22[256];

    if (FUNC_5(VAR_9->pb))
        return VAR_9->pb->error ? VAR_9->pb->error : VAR_0;

    if (VAR_14->next_chunk_is_video) {
        VAR_12 = FUNC_7(VAR_15);
        if (VAR_12 == 2) {
            return FUNC_0(VAR_6);
        } else if (VAR_12 == 1) {

            VAR_11 = FUNC_6(VAR_15, VAR_21, 768);
            if (VAR_11 < 0) {
                return VAR_11;
            } else if (VAR_11 != 768) {
                FUNC_2(VAR_9, VAR_3, "incomplete packet\n");
                return FUNC_0(VAR_6);
            }

            VAR_17 = 2;
            for (VAR_16 = 0; VAR_16 < 768; VAR_16++)
                if (VAR_21[VAR_16] > 63) {
                    VAR_17 = 0;
                    break;
                }

            for (VAR_16 = 0; VAR_16 < 256; VAR_16++) {
                VAR_18 = VAR_21[VAR_16 * 3 ] << VAR_17;
                VAR_19 = VAR_21[VAR_16 * 3 + 1] << VAR_17;
                VAR_20 = VAR_21[VAR_16 * 3 + 2] << VAR_17;
                VAR_22[VAR_16] = (0xFFU << 24) | (VAR_18 << 16) | (VAR_19 << 8) | (VAR_20);
                if (VAR_17 == 2)
                    VAR_22[VAR_16] |= VAR_22[VAR_16] >> 6 & 0x30303;
            }
        }

        if (VAR_9->pb->eof_reached) {
            FUNC_2(VAR_9, VAR_3, "incomplete packet\n");
            return VAR_9->pb->error ? VAR_9->pb->error : VAR_0;
        }
        VAR_13 = FUNC_7(VAR_15);
        if (VAR_13 < 4 || VAR_13 > VAR_8 - 4) {
            FUNC_2(VAR_9, VAR_3, "invalid chunk size: %u\n", VAR_13);
            return VAR_1;
        }

        FUNC_8(VAR_15, 4);
        VAR_13 -= 4;
        VAR_11= FUNC_1(VAR_15, VAR_10, VAR_13);
        if (VAR_11 < 0)
            return VAR_11;
        else if (VAR_11 != VAR_13) {
            FUNC_2(VAR_9, VAR_3, "incomplete packet\n");
            FUNC_4(VAR_10);
            return FUNC_0(VAR_6);
        }
        if (VAR_12 == 1) {
            uint8_t *VAR_23;

            VAR_23 = FUNC_3(VAR_10, VAR_4,
                                          VAR_2);
            if (!VAR_23) {
                FUNC_4(VAR_10);
                return FUNC_0(VAR_7);
            }
            FUNC_9(VAR_23, VAR_22, VAR_2);
            VAR_10->flags |= VAR_5;
        }
        VAR_10->stream_index = VAR_14->video_stream_index;
        VAR_10->duration = 1;
    } else {

        if (VAR_14->current_audio_chunk)
            VAR_13 = VAR_14->audio_chunk_size2;
        else
            VAR_13 = VAR_14->audio_chunk_size1;
        VAR_11= FUNC_1(VAR_15, VAR_10, VAR_13);
        if (VAR_11 < 0)
            return VAR_11;
        VAR_10->stream_index = VAR_14->audio_stream_index;
        VAR_10->duration = VAR_13 / VAR_14->block_align;

        VAR_14->current_audio_chunk ^= 1;
    }

    if (VAR_14->audio_present)
        VAR_14->next_chunk_is_video ^= 1;

    return 0;
}
