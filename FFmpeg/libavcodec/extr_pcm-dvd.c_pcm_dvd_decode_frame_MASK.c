
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_15__ {TYPE_1__* priv_data; } ;
struct TYPE_14__ {int nb_samples; void** data; } ;
struct TYPE_13__ {int size; int * data; } ;
struct TYPE_12__ {int last_block_size; int block_size; int extra_sample_count; int samples_per_block; int const* extra_samples; } ;
typedef TYPE_1__ PCMDVDContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ,char*,...) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_2 (int const*,int const*,int) ;
 void* FUNC_3 (TYPE_4__*,int const*,void*,int) ;
 int FUNC_4 (TYPE_4__*,int const*) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_3, void *VAR_4,
                                int *VAR_5, AVPacket *VAR_6)
{
    AVFrame *VAR_7 = VAR_4;
    const uint8_t *VAR_8 = VAR_6->data;
    int VAR_9 = VAR_6->size;
    PCMDVDContext *VAR_10 = VAR_3->priv_data;
    int VAR_11;
    int VAR_12;
    void *VAR_13;

    if (VAR_9 < 3) {
        FUNC_0(VAR_3, VAR_1, "PCM packet too small\n");
        return VAR_0;
    }

    if ((VAR_11 = FUNC_4(VAR_3, VAR_8)))
        return VAR_11;
    if (VAR_10->last_block_size && VAR_10->last_block_size != VAR_10->block_size) {
        FUNC_0(VAR_3, VAR_2, "block_size has changed %d != %d\n", VAR_10->last_block_size, VAR_10->block_size);
        VAR_10->extra_sample_count = 0;
    }
    VAR_10->last_block_size = VAR_10->block_size;
    VAR_8 += 3;
    VAR_9 -= 3;

    VAR_12 = (VAR_9 + VAR_10->extra_sample_count) / VAR_10->block_size;


    VAR_7->nb_samples = VAR_12 * VAR_10->samples_per_block;
    if ((VAR_11 = FUNC_1(VAR_3, VAR_7, 0)) < 0)
        return VAR_11;
    VAR_13 = VAR_7->data[0];


    if (VAR_10->extra_sample_count) {
        int VAR_14 = VAR_10->block_size - VAR_10->extra_sample_count;
        if (VAR_9 >= VAR_14) {
            FUNC_2(VAR_10->extra_samples + VAR_10->extra_sample_count, VAR_8,
                   VAR_14);
            VAR_13 = FUNC_3(VAR_3, VAR_10->extra_samples, VAR_13, 1);
            VAR_8 += VAR_14;
            VAR_9 -= VAR_14;
            VAR_10->extra_sample_count = 0;
            VAR_12--;
        } else {

            FUNC_2(VAR_10->extra_samples + VAR_10->extra_sample_count, VAR_8, VAR_9);
            VAR_10->extra_sample_count += VAR_9;
            return VAR_6->size;
        }
    }


    if (VAR_12) {
        FUNC_3(VAR_3, VAR_8, VAR_13, VAR_12);
        VAR_9 -= VAR_12 * VAR_10->block_size;
    }


    if (VAR_9) {
        VAR_8 += VAR_12 * VAR_10->block_size;
        FUNC_2(VAR_10->extra_samples, VAR_8, VAR_9);
        VAR_10->extra_sample_count = VAR_9;
    }

    *VAR_5 = 1;

    return VAR_6->size;
}
