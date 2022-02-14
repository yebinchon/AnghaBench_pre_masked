
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {int blocks; int subbands; int channels; } ;
struct TYPE_15__ {int channels; TYPE_1__* priv_data; } ;
struct TYPE_14__ {int nb_samples; int format; int channels; } ;
struct TYPE_13__ {int size; int data; } ;
struct TYPE_12__ {TYPE_5__ frame; int dsp; } ;
typedef TYPE_1__ SBCDecContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_2 (int *,TYPE_5__*,TYPE_3__*) ;
 int FUNC_3 (int ,TYPE_5__*,int ) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_2,
                            void *VAR_3, int *VAR_4,
                            AVPacket *VAR_5)
{
    SBCDecContext *VAR_6 = VAR_2->priv_data;
    AVFrame *VAR_7 = VAR_3;
    int VAR_8, VAR_9;

    if (!VAR_6)
        return FUNC_0(VAR_1);

    VAR_9 = FUNC_3(VAR_5->data, &VAR_6->frame, VAR_5->size);
    if (VAR_9 <= 0)
        return VAR_9;

    VAR_2->channels =
    VAR_7->channels = VAR_6->frame.channels;
    VAR_7->format = VAR_0;
    VAR_7->nb_samples = VAR_6->frame.blocks * VAR_6->frame.subbands;
    if ((VAR_8 = FUNC_1(VAR_2, VAR_7, 0)) < 0)
        return VAR_8;

    FUNC_2(&VAR_6->dsp, &VAR_6->frame, VAR_7);

    *VAR_4 = 1;

    return VAR_9;
}
