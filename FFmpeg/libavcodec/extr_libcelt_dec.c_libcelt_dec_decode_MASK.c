
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct libcelt_context {int discard; int dec; } ;
typedef int int16_t ;
struct TYPE_10__ {int frame_size; int channels; struct libcelt_context* priv_data; } ;
struct TYPE_9__ {int nb_samples; scalar_t__* data; } ;
struct TYPE_8__ {int size; int data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ,int ,int,int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_3 (int *,int *,int) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_0, void *VAR_1,
                              int *VAR_2, AVPacket *VAR_3)
{
    struct libcelt_context *VAR_4 = VAR_0->priv_data;
    AVFrame *VAR_5 = VAR_1;
    int VAR_6;
    int16_t *VAR_7;

    VAR_5->nb_samples = VAR_0->frame_size;
    if ((VAR_6 = FUNC_2(VAR_0, VAR_5, 0)) < 0)
        return VAR_6;
    VAR_7 = (int16_t *)VAR_5->data[0];
    VAR_6 = FUNC_0(VAR_4->dec, VAR_3->data, VAR_3->size, VAR_7, VAR_0->frame_size);
    if (VAR_6 < 0)
        return FUNC_1(VAR_6);
    if (VAR_4->discard) {
        VAR_5->nb_samples -= VAR_4->discard;
        FUNC_3(VAR_7, VAR_7 + VAR_4->discard * VAR_0->channels,
                VAR_5->nb_samples * VAR_0->channels * sizeof(int16_t));
        VAR_4->discard = 0;
    }
    *VAR_2 = 1;
    return VAR_3->size;
}
