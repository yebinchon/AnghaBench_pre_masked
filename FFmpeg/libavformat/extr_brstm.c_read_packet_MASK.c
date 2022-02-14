
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_16__ {scalar_t__ codec_id; int channels; } ;
struct TYPE_15__ {int pb; TYPE_2__* priv_data; TYPE_1__** streams; } ;
struct TYPE_14__ {int duration; scalar_t__ stream_index; int * data; } ;
struct TYPE_13__ {scalar_t__ current_block; scalar_t__ block_count; int last_block_used_bytes; int last_block_samples; int last_block_size; int block_size; int samples_per_block; scalar_t__ adpc; scalar_t__ table; } ;
struct TYPE_12__ {TYPE_5__* codecpar; } ;
typedef TYPE_2__ BRSTMDemuxContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,TYPE_3__*,int) ;
 int FUNC_2 (TYPE_4__*,int ,char*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int **,int) ;
 int FUNC_10 (int **,scalar_t__,int) ;
 int FUNC_11 (int **,int) ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_8, AVPacket *VAR_9)
{
    AVCodecParameters *VAR_10 = VAR_8->streams[0]->codecpar;
    BRSTMDemuxContext *VAR_11 = VAR_8->priv_data;
    uint32_t VAR_12, VAR_13, VAR_14 = 0;
    int VAR_15, VAR_16;

    if (FUNC_6(VAR_8->pb))
        return VAR_0;
    VAR_11->current_block++;
    if (VAR_11->current_block == VAR_11->block_count) {
        VAR_13 = VAR_11->last_block_used_bytes;
        VAR_12 = VAR_11->last_block_samples;
        VAR_14 = VAR_11->last_block_size - VAR_11->last_block_used_bytes;

        if (VAR_12 < VAR_13 * 14 / 8) {
            uint32_t VAR_17 = VAR_12 / 14 * 8;
            if (VAR_12 % 14)
                VAR_17 += (VAR_12 % 14 + 1) / 2 + 1;

            VAR_14 += VAR_13 - VAR_17;
            VAR_13 = VAR_17;
        }
    } else if (VAR_11->current_block < VAR_11->block_count) {
        VAR_13 = VAR_11->block_size;
        VAR_12 = VAR_11->samples_per_block;
    } else {
        return VAR_0;
    }

    if (VAR_10->codec_id == VAR_2 ||
        VAR_10->codec_id == VAR_3) {
        uint8_t *VAR_18;

        if (!VAR_11->adpc) {
            FUNC_2(VAR_8, VAR_4, "adpcm_thp requires ADPC chunk, but none was found.\n");
            return VAR_1;
        }
        if (!VAR_11->table) {
            VAR_11->table = FUNC_3(32 * VAR_10->channels);
            if (!VAR_11->table)
                return FUNC_0(VAR_6);
        }

        if (VAR_13 > (VAR_7 - 32 - 4) ||
            (32 + 4 + VAR_13) > (VAR_7 / VAR_10->channels) ||
            (32 + 4 + VAR_13) * VAR_10->channels > VAR_7 - 8)
            return VAR_1;
        if (FUNC_4(VAR_9, 8 + (32 + 4 + VAR_13) * VAR_10->channels) < 0)
            return FUNC_0(VAR_6);
        VAR_18 = VAR_9->data;
        if (VAR_10->codec_id == VAR_3) {
            FUNC_11(&VAR_18, VAR_13 * VAR_10->channels);
            FUNC_11(&VAR_18, VAR_12);
        } else {
            FUNC_9(&VAR_18, VAR_13 * VAR_10->channels);
            FUNC_9(&VAR_18, VAR_12);
        }
        FUNC_10(&VAR_18, VAR_11->table, 32 * VAR_10->channels);
        FUNC_10(&VAR_18, VAR_11->adpc + 4 * VAR_10->channels *
                                    (VAR_11->current_block - 1), 4 * VAR_10->channels);

        for (VAR_16 = 0; VAR_16 < VAR_10->channels; VAR_16++) {
            VAR_15 = FUNC_7(VAR_8->pb, VAR_18, VAR_13);
            VAR_18 += VAR_13;
            FUNC_8(VAR_8->pb, VAR_14);
            if (VAR_15 != VAR_13) {
                FUNC_5(VAR_9);
                break;
            }
        }
        VAR_9->duration = VAR_12;
    } else {
        VAR_13 *= VAR_10->channels;
        VAR_15 = FUNC_1(VAR_8->pb, VAR_9, VAR_13);
    }

    VAR_9->stream_index = 0;

    if (VAR_15 != VAR_13)
        VAR_15 = FUNC_0(VAR_5);

    return VAR_15;
}
