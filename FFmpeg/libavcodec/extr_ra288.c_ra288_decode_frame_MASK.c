
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_15__ {int block_align; TYPE_1__* priv_data; } ;
struct TYPE_14__ {int nb_samples; scalar_t__* data; } ;
struct TYPE_13__ {int size; int * data; } ;
struct TYPE_12__ {int gain_lpc; int gain_rec; int * gain_hist; int sp_lpc; int sp_rec; int * sp_hist; } ;
typedef TYPE_1__ RA288Context ;
typedef int GetBitContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 float* VAR_4 ;
 int FUNC_0 (TYPE_4__*,int ,char*,int,int) ;
 int FUNC_1 (TYPE_1__*,int *,int ,int ,int ,int ,int,int,int,int) ;
 int FUNC_2 (TYPE_1__*,float,int) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 size_t FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (float*,int *,int) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_7(AVCodecContext * VAR_9, void *VAR_10,
                              int *VAR_11, AVPacket *VAR_12)
{
    AVFrame *VAR_13 = VAR_10;
    const uint8_t *VAR_14 = VAR_12->data;
    int VAR_15 = VAR_12->size;
    float *VAR_16;
    int VAR_17, VAR_18;
    RA288Context *VAR_19 = VAR_9->priv_data;
    GetBitContext VAR_20;

    if (VAR_15 < VAR_9->block_align) {
        FUNC_0(VAR_9, VAR_1,
               "Error! Input buffer is too small [%d<%d]\n",
               VAR_15, VAR_9->block_align);
        return VAR_0;
    }

    VAR_18 = FUNC_5(&VAR_20, VAR_14, VAR_9->block_align);
    if (VAR_18 < 0)
        return VAR_18;


    VAR_13->nb_samples = VAR_3 * VAR_2;
    if ((VAR_18 = FUNC_3(VAR_9, VAR_13, 0)) < 0)
        return VAR_18;
    VAR_16 = (float *)VAR_13->data[0];

    for (VAR_17=0; VAR_17 < VAR_2; VAR_17++) {
        float VAR_21 = VAR_4[FUNC_4(&VAR_20, 3)];
        int VAR_22 = FUNC_4(&VAR_20, 6 + (VAR_17&1));

        FUNC_2(VAR_19, VAR_21, VAR_22);

        FUNC_6(VAR_16, &VAR_19->sp_hist[70 + 36], VAR_3 * sizeof(*VAR_16));
        VAR_16 += VAR_3;

        if ((VAR_17 & 7) == 3) {
            FUNC_1(VAR_19, VAR_19->sp_hist, VAR_19->sp_rec, VAR_8,
                            VAR_19->sp_lpc, VAR_7, 36, 40, 35, 70);

            FUNC_1(VAR_19, VAR_19->gain_hist, VAR_19->gain_rec, VAR_6,
                            VAR_19->gain_lpc, VAR_5, 10, 8, 20, 28);
        }
    }

    *VAR_11 = 1;

    return VAR_9->block_align;
}
