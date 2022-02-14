
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_13__ {int channels; TYPE_1__* priv_data; } ;
struct TYPE_12__ {int nb_samples; scalar_t__* data; } ;
struct TYPE_11__ {scalar_t__ data; int size; } ;
struct TYPE_10__ {int bitstream_size; int max_framesize; int bitstream_index; int block_len; int skip; int* block; int level; int * bitstream; int gb; } ;
typedef TYPE_1__ InterplayACMContext ;
typedef int GetBitContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const*,int) ;
 int FUNC_5 (int *,scalar_t__,int) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_1, void *VAR_2,
                        int *VAR_3, AVPacket *VAR_4)
{
    InterplayACMContext *VAR_5 = VAR_1->priv_data;
    GetBitContext *VAR_6 = &VAR_5->gb;
    AVFrame *VAR_7 = VAR_2;
    const uint8_t *VAR_8;
    int16_t *VAR_9;
    int VAR_10, VAR_11, VAR_12, VAR_13;

    if (!VAR_4->size && !VAR_5->bitstream_size) {
        *VAR_3 = 0;
        return 0;
    }

    VAR_12 = FUNC_0(VAR_4->size, VAR_5->max_framesize - VAR_5->bitstream_size);
    VAR_13 = VAR_12;
    if (VAR_5->bitstream_index + VAR_5->bitstream_size + VAR_12 > VAR_5->max_framesize) {
        FUNC_6(VAR_5->bitstream, &VAR_5->bitstream[VAR_5->bitstream_index], VAR_5->bitstream_size);
        VAR_5->bitstream_index = 0;
    }
    if (VAR_4->data)
        FUNC_5(&VAR_5->bitstream[VAR_5->bitstream_index + VAR_5->bitstream_size], VAR_4->data, VAR_12);
    VAR_8 = &VAR_5->bitstream[VAR_5->bitstream_index];
    VAR_12 += VAR_5->bitstream_size;
    VAR_5->bitstream_size = VAR_12;
    if (VAR_12 < VAR_5->max_framesize && VAR_4->data) {
        *VAR_3 = 0;
        return VAR_13;
    }

    if ((VAR_10 = FUNC_4(VAR_6, VAR_8, VAR_12)) < 0)
        return VAR_10;

    VAR_7->nb_samples = VAR_5->block_len / VAR_1->channels;
    if ((VAR_10 = FUNC_2(VAR_1, VAR_7, 0)) < 0)
        return VAR_10;

    FUNC_7(VAR_6, VAR_5->skip);
    VAR_10 = FUNC_1(VAR_5);
    if (VAR_10 < 0)
        return VAR_10;

    VAR_9 = (int16_t *)VAR_7->data[0];
    for (VAR_11 = 0; VAR_11 < VAR_7->nb_samples * VAR_1->channels; VAR_11++) {
        int VAR_14 = VAR_5->block[VAR_11] >> VAR_5->level;
        *VAR_9++ = VAR_14;
    }

    *VAR_3 = 1;
    VAR_5->skip = FUNC_3(VAR_6) - 8 * (FUNC_3(VAR_6) / 8);
    VAR_11 = FUNC_3(VAR_6) / 8;

    if (VAR_11 > VAR_12 && VAR_4->data) {
        VAR_5->bitstream_size = 0;
        VAR_5->bitstream_index = 0;
        return VAR_0;
    }

    if (VAR_5->bitstream_size) {
        VAR_5->bitstream_index += VAR_11;
        VAR_5->bitstream_size -= VAR_11;
        return VAR_13;
    }
    return VAR_11;
}
