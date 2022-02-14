
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_20__ {int spec; TYPE_4__* SUs; } ;
struct TYPE_19__ {int log2_block_count; } ;
struct TYPE_18__ {int channels; int block_align; TYPE_5__* priv_data; } ;
struct TYPE_17__ {scalar_t__* extended_data; int nb_samples; } ;
struct TYPE_16__ {int size; int * data; } ;
typedef int GetBitContext ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;
typedef TYPE_4__ AT1SUCtx ;
typedef TYPE_5__ AT1Ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*,float*) ;
 int FUNC_3 (int *,TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ,char*) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_6 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_3, void *VAR_4,
                               int *VAR_5, AVPacket *VAR_6)
{
    AVFrame *VAR_7 = VAR_4;
    const uint8_t *VAR_8 = VAR_6->data;
    int VAR_9 = VAR_6->size;
    AT1Ctx *VAR_10 = VAR_3->priv_data;
    int VAR_11, VAR_12;
    GetBitContext VAR_13;


    if (VAR_9 < 212 * VAR_3->channels) {
        FUNC_4(VAR_3, VAR_2, "Not enough data to decode!\n");
        return VAR_1;
    }


    VAR_7->nb_samples = VAR_0;
    if ((VAR_12 = FUNC_5(VAR_3, VAR_7, 0)) < 0)
        return VAR_12;

    for (VAR_11 = 0; VAR_11 < VAR_3->channels; VAR_11++) {
        AT1SUCtx* VAR_14 = &VAR_10->SUs[VAR_11];

        FUNC_6(&VAR_13, &VAR_8[212 * VAR_11], 212 * 8);


        VAR_12 = FUNC_1(&VAR_13, VAR_14->log2_block_count);
        if (VAR_12 < 0)
            return VAR_12;

        VAR_12 = FUNC_3(&VAR_13, VAR_14, VAR_10->spec);
        if (VAR_12 < 0)
            return VAR_12;

        VAR_12 = FUNC_0(VAR_14, VAR_10);
        if (VAR_12 < 0)
            return VAR_12;
        FUNC_2(VAR_10, VAR_14, (float *)VAR_7->extended_data[VAR_11]);
    }

    *VAR_5 = 1;

    return VAR_3->block_align;
}
