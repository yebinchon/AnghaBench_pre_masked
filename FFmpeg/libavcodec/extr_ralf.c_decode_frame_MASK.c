
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int const uint8_t ;
typedef int int16_t ;
struct TYPE_14__ {int channels; TYPE_1__* priv_data; } ;
struct TYPE_13__ {int nb_samples; scalar_t__* data; } ;
struct TYPE_12__ {int size; int const* data; } ;
struct TYPE_11__ {int has_pkt; int max_frame_size; size_t num_blocks; int* block_size; int sample_offset; void** block_pts; int const* pkt; } ;
typedef TYPE_1__ RALFContext ;
typedef int GetBitContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int *,int *,int *) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int ) ;
 void* FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int const*,int) ;
 scalar_t__ FUNC_8 (int const*,int const*,int) ;
 int FUNC_9 (int const*,int const*,int) ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_3, void *VAR_4, int *VAR_5,
                        AVPacket *VAR_6)
{
    RALFContext *VAR_7 = VAR_3->priv_data;
    AVFrame *VAR_8 = VAR_4;
    int16_t *VAR_9;
    int16_t *VAR_10;
    int VAR_11;
    GetBitContext VAR_12;
    int VAR_13, VAR_14, VAR_15;
    const uint8_t *VAR_16, *VAR_17;
    int VAR_18;
    int VAR_19;

    if (VAR_7->has_pkt) {
        VAR_7->has_pkt = 0;
        VAR_14 = (FUNC_0(VAR_6->data) + 7) >> 3;
        if (VAR_14 + 3 > VAR_6->size || VAR_6->size > VAR_2) {
            FUNC_1(VAR_3, VAR_1, "Wrong packet's breath smells of wrong data!\n");
            return VAR_0;
        }
        if (FUNC_8(VAR_7->pkt, VAR_6->data, 2 + VAR_14)) {
            FUNC_1(VAR_3, VAR_1, "Wrong packet tails are wrong!\n");
            return VAR_0;
        }

        VAR_16 = VAR_7->pkt;
        VAR_18 = VAR_2 + VAR_6->size;
        FUNC_9(VAR_7->pkt + VAR_2, VAR_6->data + 2 + VAR_14,
               VAR_6->size - 2 - VAR_14);
    } else {
        if (VAR_6->size == VAR_2) {
            FUNC_9(VAR_7->pkt, VAR_6->data, VAR_6->size);
            VAR_7->has_pkt = 1;
            *VAR_5 = 0;

            return VAR_6->size;
        }
        VAR_16 = VAR_6->data;
        VAR_18 = VAR_6->size;
    }

    VAR_8->nb_samples = VAR_7->max_frame_size;
    if ((VAR_11 = FUNC_3(VAR_3, VAR_8, 0)) < 0)
        return VAR_11;
    VAR_9 = (int16_t *)VAR_8->data[0];
    VAR_10 = (int16_t *)VAR_8->data[1];

    if (VAR_18 < 5) {
        FUNC_1(VAR_3, VAR_1, "too short packets are too short!\n");
        return VAR_0;
    }
    VAR_13 = FUNC_0(VAR_16);
    VAR_14 = (VAR_13 + 7) >> 3;
    if (VAR_18 < VAR_14 + 3) {
        FUNC_1(VAR_3, VAR_1, "short packets are short!\n");
        return VAR_0;
    }
    FUNC_7(&VAR_12, VAR_16 + 2, VAR_13);
    VAR_7->num_blocks = 0;
    while (FUNC_6(&VAR_12) > 0) {
        VAR_7->block_size[VAR_7->num_blocks] = FUNC_4(&VAR_12, 13 + VAR_3->channels);
        if (FUNC_5(&VAR_12)) {
            VAR_7->block_pts[VAR_7->num_blocks] = FUNC_4(&VAR_12, 9);
        } else {
            VAR_7->block_pts[VAR_7->num_blocks] = 0;
        }
        VAR_7->num_blocks++;
    }

    VAR_17 = VAR_16 + VAR_14 + 2;
    VAR_19 = VAR_18 - VAR_14 - 2;
    VAR_7->sample_offset = 0;
    for (VAR_15 = 0; VAR_15 < VAR_7->num_blocks; VAR_15++) {
        if (VAR_19 < VAR_7->block_size[VAR_15]) {
            FUNC_1(VAR_3, VAR_1, "I'm pedaling backwards\n");
            break;
        }
        FUNC_7(&VAR_12, VAR_17, VAR_7->block_size[VAR_15] * 8);
        if (FUNC_2(VAR_3, &VAR_12, VAR_9 + VAR_7->sample_offset,
                                     VAR_10 + VAR_7->sample_offset) < 0) {
            FUNC_1(VAR_3, VAR_1, "Sir, I got carsick in your office. Not decoding the rest of packet.\n");
            break;
        }
        VAR_17 += VAR_7->block_size[VAR_15];
        VAR_19 -= VAR_7->block_size[VAR_15];
    }

    VAR_8->nb_samples = VAR_7->sample_offset;
    *VAR_5 = VAR_7->sample_offset > 0;

    return VAR_6->size;
}
