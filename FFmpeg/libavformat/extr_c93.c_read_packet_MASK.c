
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_21__ {TYPE_2__* priv_data; int * pb; } ;
struct TYPE_20__ {int stream_index; int size; int * data; int flags; } ;
struct TYPE_19__ {size_t frames; int index; int length; } ;
struct TYPE_18__ {size_t current_block; int next_pkt_is_audio; size_t current_frame; int* frame_offsets; TYPE_10__* audio; TYPE_3__* block_records; } ;
struct TYPE_17__ {int codec_type; } ;
struct TYPE_16__ {TYPE_1__* codecpar; } ;
typedef TYPE_2__ C93DemuxContext ;
typedef TYPE_3__ C93BlockRecord ;
typedef TYPE_4__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;


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
 int VAR_9 ;
 int FUNC_1 (TYPE_5__*,int ,char*,int) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_10__* FUNC_4 (TYPE_5__*,int *) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (TYPE_5__*,TYPE_4__*,TYPE_10__*,int) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_10, AVPacket *VAR_11)
{
    AVIOContext *VAR_12 = VAR_10->pb;
    C93DemuxContext *VAR_13 = VAR_10->priv_data;
    C93BlockRecord *VAR_14 = &VAR_13->block_records[VAR_13->current_block];
    int VAR_15;
    int VAR_16, VAR_17;

    if (VAR_13->next_pkt_is_audio) {
        VAR_13->current_frame++;
        VAR_13->next_pkt_is_audio = 0;
        VAR_15 = FUNC_6(VAR_12);
        if (VAR_15 > 42) {
            if (!VAR_13->audio) {
                VAR_13->audio = FUNC_4(VAR_10, ((void*)0));
                if (!VAR_13->audio)
                    return FUNC_0(VAR_8);
                VAR_13->audio->codecpar->codec_type = VAR_2;
            }
            FUNC_9(VAR_12, 26);
            VAR_16 = FUNC_10(VAR_10, VAR_11, VAR_13->audio, VAR_15 - 26);
            if (VAR_16 > 0) {
                VAR_11->stream_index = 1;
                VAR_11->flags |= VAR_4;
                return VAR_16;
            }
        }
    }
    if (VAR_13->current_frame >= VAR_14->frames) {
        if (VAR_13->current_block >= 511 || !VAR_14[1].length)
            return VAR_0;
        VAR_14++;
        VAR_13->current_block++;
        VAR_13->current_frame = 0;
    }

    if (VAR_13->current_frame == 0) {
        FUNC_8(VAR_12, VAR_14->index * 2048, VAR_9);
        for (VAR_17 = 0; VAR_17 < 32; VAR_17++) {
            VAR_13->frame_offsets[VAR_17] = FUNC_7(VAR_12);
        }
    }

    FUNC_8(VAR_12,VAR_14->index * 2048 +
            VAR_13->frame_offsets[VAR_13->current_frame], VAR_9);
    VAR_15 = FUNC_6(VAR_12);

    VAR_16 = FUNC_2(VAR_11, VAR_15 + 768 + 1);
    if (VAR_16 < 0)
        return VAR_16;
    VAR_11->data[0] = 0;
    VAR_11->size = VAR_15 + 1;

    VAR_16 = FUNC_5(VAR_12, VAR_11->data + 1, VAR_15);
    if (VAR_16 < VAR_15) {
        VAR_16 = FUNC_0(VAR_7);
        goto fail;
    }

    VAR_15 = FUNC_6(VAR_12);
    if (VAR_15) {
        if (VAR_15 != 768) {
            FUNC_1(VAR_10, VAR_3, "invalid palette size %u\n", VAR_15);
            VAR_16 = VAR_1;
            goto fail;
        }
        VAR_11->data[0] |= VAR_6;
        VAR_16 = FUNC_5(VAR_12, VAR_11->data + VAR_11->size, VAR_15);
        if (VAR_16 < VAR_15) {
            VAR_16 = FUNC_0(VAR_7);
            goto fail;
        }
        VAR_11->size += 768;
    }
    VAR_11->stream_index = 0;
    VAR_13->next_pkt_is_audio = 1;


    if (VAR_13->current_block == 0 && VAR_13->current_frame == 0) {
        VAR_11->flags |= VAR_4;
        VAR_11->data[0] |= VAR_5;
    }
    return 0;

    fail:
    FUNC_3(VAR_11);
    return VAR_16;
}
