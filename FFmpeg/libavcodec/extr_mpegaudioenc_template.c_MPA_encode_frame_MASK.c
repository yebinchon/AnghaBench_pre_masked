
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_19__ {int initial_padding; TYPE_1__* priv_data; } ;
struct TYPE_18__ {scalar_t__ pts; scalar_t__* data; } ;
struct TYPE_17__ {int size; scalar_t__ pts; int data; } ;
struct TYPE_16__ {int nb_channels; int pb; int sblimit; int * sb_samples; int * scale_factors; int * scale_code; } ;
typedef TYPE_1__ MpegAudioContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,short**,unsigned char**,int*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,unsigned char**,int) ;
 int FUNC_3 (TYPE_4__*,TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_1__*,int,int const*,int) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (TYPE_1__*,short*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_4, AVPacket *VAR_5,
                            const AVFrame *VAR_6, int *VAR_7)
{
    MpegAudioContext *VAR_8 = VAR_4->priv_data;
    const int16_t *VAR_9 = (const int16_t *)VAR_6->data[0];
    short VAR_10[VAR_1][VAR_3];
    unsigned char VAR_11[VAR_1][VAR_3];
    int VAR_12, VAR_13, VAR_14;

    for(VAR_13=0;VAR_13<VAR_8->nb_channels;VAR_13++) {
        FUNC_5(VAR_8, VAR_13, VAR_9 + VAR_13, VAR_8->nb_channels);
    }

    for(VAR_13=0;VAR_13<VAR_8->nb_channels;VAR_13++) {
        FUNC_1(VAR_8, VAR_8->scale_code[VAR_13], VAR_8->scale_factors[VAR_13],
                              VAR_8->sb_samples[VAR_13], VAR_8->sblimit);
    }
    for(VAR_13=0;VAR_13<VAR_8->nb_channels;VAR_13++) {
        FUNC_7(VAR_8, VAR_10[VAR_13]);
    }
    FUNC_0(VAR_8, VAR_10, VAR_11, &VAR_12);

    if ((VAR_14 = FUNC_3(VAR_4, VAR_5, VAR_2, 0)) < 0)
        return VAR_14;

    FUNC_6(&VAR_8->pb, VAR_5->data, VAR_5->size);

    FUNC_2(VAR_8, VAR_11, VAR_12);

    if (VAR_6->pts != VAR_0)
        VAR_5->pts = VAR_6->pts - FUNC_4(VAR_4, VAR_4->initial_padding);

    VAR_5->size = FUNC_8(&VAR_8->pb) / 8;
    *VAR_7 = 1;
    return 0;
}
