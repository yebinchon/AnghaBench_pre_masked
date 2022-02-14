
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
struct TYPE_13__ {int channels; int bit_rate; int sample_fmt; TYPE_1__* priv_data; } ;
struct TYPE_12__ {scalar_t__* data; int nb_samples; } ;
struct TYPE_11__ {int size; int * data; } ;
struct TYPE_10__ {int pktsize; int dec_state; int stereo; int frame_size; int bits; } ;
typedef TYPE_1__ LibSpeexContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int ,char*) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_4, void *VAR_5,
                                 int *VAR_6, AVPacket *VAR_7)
{
    uint8_t *VAR_8 = VAR_7->data;
    int VAR_9 = VAR_7->size;
    LibSpeexContext *VAR_10 = VAR_4->priv_data;
    AVFrame *VAR_11 = VAR_5;
    int16_t *VAR_12;
    int VAR_13, VAR_14 = 0;
    VAR_4->sample_fmt = VAR_2;


    VAR_11->nb_samples = VAR_10->frame_size;
    if ((VAR_13 = FUNC_1(VAR_4, VAR_11, 0)) < 0)
        return VAR_13;
    VAR_12 = (int16_t *)VAR_11->data[0];





    if (FUNC_4(&VAR_10->bits) < 5 ||
        FUNC_2(&VAR_10->bits, 5) == 0xF) {

        if (!VAR_8 || !VAR_9) {
            *VAR_6 = 0;
            return VAR_9;
        }
        if (VAR_10->pktsize && VAR_9 == 62)
            VAR_9 = VAR_10->pktsize;

        FUNC_3(&VAR_10->bits, VAR_8, VAR_9);
        VAR_14 = VAR_7->size;
    }


    VAR_13 = FUNC_5(VAR_10->dec_state, &VAR_10->bits, VAR_12);
    if (VAR_13 <= -2) {
        FUNC_0(VAR_4, VAR_1, "Error decoding Speex frame.\n");
        return VAR_0;
    }
    if (VAR_4->channels == 2)
        FUNC_6(VAR_12, VAR_10->frame_size, &VAR_10->stereo);

    *VAR_6 = 1;

    if (!VAR_4->bit_rate)
        FUNC_7(VAR_10->dec_state, VAR_3, &VAR_4->bit_rate);
    return VAR_14;
}
