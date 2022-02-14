
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {float d; scalar_t__ i; } ;
struct libopus_context {TYPE_1__ gain; int dec; } ;
typedef int opus_int16 ;
typedef int int64_t ;
typedef int int16_t ;
struct TYPE_13__ {scalar_t__ sample_fmt; int channels; struct libopus_context* priv_data; } ;
struct TYPE_12__ {int nb_samples; scalar_t__* data; } ;
struct TYPE_11__ {int size; int data; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 float FUNC_1 (float,int,int) ;
 int FUNC_2 (TYPE_4__*,int ,char*,int ) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int,int *,int,int ) ;
 int FUNC_6 (int ,int ,int,float*,int,int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_4, void *VAR_5,
                          int *VAR_6, AVPacket *VAR_7)
{
    struct libopus_context *VAR_8 = VAR_4->priv_data;
    AVFrame *VAR_9 = VAR_5;
    int VAR_10, VAR_11;

    VAR_9->nb_samples = VAR_3;
    if ((VAR_10 = FUNC_3(VAR_4, VAR_9, 0)) < 0)
        return VAR_10;

    if (VAR_4->sample_fmt == VAR_2)
        VAR_11 = FUNC_5(VAR_8->dec, VAR_7->data, VAR_7->size,
                                             (opus_int16 *)VAR_9->data[0],
                                             VAR_9->nb_samples, 0);
    else
        VAR_11 = FUNC_6(VAR_8->dec, VAR_7->data, VAR_7->size,
                                                   (float *)VAR_9->data[0],
                                                   VAR_9->nb_samples, 0);

    if (VAR_11 < 0) {
        FUNC_2(VAR_4, VAR_0, "Decoding error: %s\n",
               FUNC_7(VAR_11));
        return FUNC_4(VAR_11);
    }


    {
        int VAR_12 = VAR_4->channels * VAR_11;
        if (VAR_4->sample_fmt == VAR_1) {
            float *VAR_13 = (float *)VAR_9->data[0];
            for (; VAR_12 > 0; VAR_12--, VAR_13++)
                *VAR_13 = FUNC_1(*VAR_13 * VAR_8->gain.d, -1, 1);
        } else {
            int16_t *VAR_14 = (int16_t *)VAR_9->data[0];
            for (; VAR_12 > 0; VAR_12--, VAR_14++)
                *VAR_14 = FUNC_0(((int64_t)VAR_8->gain.i * *VAR_14) >> 16);
        }
    }


    VAR_9->nb_samples = VAR_11;
    *VAR_6 = 1;

    return VAR_7->size;
}
