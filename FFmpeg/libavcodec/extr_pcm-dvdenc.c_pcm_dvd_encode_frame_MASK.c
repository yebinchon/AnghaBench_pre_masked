
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int int64_t ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_14__ {int channels; int sample_fmt; TYPE_1__* priv_data; } ;
struct TYPE_13__ {int nb_samples; int pts; scalar_t__* data; } ;
struct TYPE_12__ {int size; int duration; int pts; scalar_t__ data; } ;
struct TYPE_11__ {int samples_per_block; int block_size; int groups_per_block; int header; } ;
typedef int PutByteContext ;
typedef TYPE_1__ PCMDVDContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;




 int FUNC_0 (int *,scalar_t__,int) ;
 int FUNC_1 (int *,int const) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_4__*,TYPE_2__*,int,int ) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_0, AVPacket *VAR_1,
                                const AVFrame *VAR_2, int *VAR_3)
{
    PCMDVDContext *VAR_4 = VAR_0->priv_data;
    int VAR_5 = VAR_2->nb_samples * VAR_0->channels;
    int64_t VAR_6 = (VAR_2->nb_samples / VAR_4->samples_per_block) * VAR_4->block_size + 3;
    int VAR_7 = (VAR_6 - 3) / VAR_4->block_size;
    const int16_t *VAR_8;
    const int32_t *VAR_9;
    PutByteContext VAR_10;
    int VAR_11;

    if ((VAR_11 = FUNC_3(VAR_0, VAR_1, VAR_6, 0)) < 0)
        return VAR_11;

    FUNC_5(VAR_1->data, VAR_4->header, 3);

    VAR_8 = (const int16_t *)VAR_2->data[0];
    VAR_9 = (const int32_t *)VAR_2->data[0];

    FUNC_0(&VAR_10, VAR_1->data + 3, VAR_1->size - 3);

    switch (VAR_0->sample_fmt) {
    case 129:
        do {
            FUNC_1(&VAR_10, *VAR_8++);
        } while (--VAR_5);
        break;
    case 128:
        if (VAR_0->channels == 1) {
            do {
                for (int VAR_12 = 2; VAR_12; VAR_12--) {
                    FUNC_1(&VAR_10, VAR_9[0] >> 16);
                    FUNC_1(&VAR_10, VAR_9[1] >> 16);
                    FUNC_2(&VAR_10, (*VAR_9++) >> 24);
                    FUNC_2(&VAR_10, (*VAR_9++) >> 24);
                }
            } while (--VAR_7);
        } else {
            do {
                for (int VAR_13 = VAR_4->groups_per_block; VAR_13; VAR_13--) {
                    FUNC_1(&VAR_10, VAR_9[0] >> 16);
                    FUNC_1(&VAR_10, VAR_9[1] >> 16);
                    FUNC_1(&VAR_10, VAR_9[2] >> 16);
                    FUNC_1(&VAR_10, VAR_9[3] >> 16);
                    FUNC_2(&VAR_10, (*VAR_9++) >> 24);
                    FUNC_2(&VAR_10, (*VAR_9++) >> 24);
                    FUNC_2(&VAR_10, (*VAR_9++) >> 24);
                    FUNC_2(&VAR_10, (*VAR_9++) >> 24);
                }
            } while (--VAR_7);
        }
        break;
    }

    VAR_1->pts = VAR_2->pts;
    VAR_1->size = VAR_6;
    VAR_1->duration = FUNC_4(VAR_0, VAR_2->nb_samples);
    *VAR_3 = 1;

    return 0;
}
