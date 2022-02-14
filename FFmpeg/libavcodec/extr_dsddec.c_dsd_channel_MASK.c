
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* avpkt; TYPE_3__* frame; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_9__ {scalar_t__ codec_id; int channels; int * priv_data; } ;
struct TYPE_8__ {int nb_samples; scalar_t__ extended_data; } ;
struct TYPE_7__ {scalar_t__ data; } ;
typedef int DSDContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int,int,scalar_t__,int,float*,int) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_3, void *VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7 = VAR_3->codec_id == VAR_0 || VAR_3->codec_id == VAR_1;
    DSDContext *VAR_8 = VAR_3->priv_data;
    ThreadData *VAR_9 = VAR_4;
    AVFrame *VAR_10 = VAR_9->frame;
    AVPacket *VAR_11 = VAR_9->avpkt;
    int VAR_12, VAR_13;
    float *VAR_14 = ((float **)VAR_10->extended_data)[VAR_5];

    if (VAR_3->codec_id == VAR_1 || VAR_3->codec_id == VAR_2) {
        VAR_12 = VAR_10->nb_samples;
        VAR_13 = 1;
    } else {
        VAR_12 = 1;
        VAR_13 = VAR_3->channels;
    }

    FUNC_0(&VAR_8[VAR_5], VAR_10->nb_samples, VAR_7,
                         VAR_11->data + VAR_5 * VAR_12, VAR_13,
                         VAR_14, 1);

    return 0;
}
