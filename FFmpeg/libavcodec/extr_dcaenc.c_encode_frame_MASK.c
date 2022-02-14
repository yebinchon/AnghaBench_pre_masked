
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_28__ {TYPE_2__* priv_data; } ;
struct TYPE_27__ {int nb_samples; int pts; scalar_t__* data; } ;
struct TYPE_26__ {int size; int duration; int pts; int data; } ;
struct TYPE_24__ {scalar_t__ adpcm_mode; } ;
struct TYPE_25__ {int frame_size; int pb; TYPE_1__ options; scalar_t__ lfe_channel; } ;
typedef TYPE_2__ DCAEncContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int const*) ;
 int FUNC_4 (TYPE_5__*,TYPE_3__*,int,int ) ;
 int FUNC_5 (TYPE_5__*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (TYPE_2__*,int const*) ;
 int FUNC_11 (int *,int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*,int) ;
 int FUNC_16 (TYPE_2__*,int const*) ;
 int FUNC_17 (TYPE_2__*,int const*) ;

__attribute__((used)) static int FUNC_18(AVCodecContext *VAR_1, AVPacket *VAR_2,
                        const AVFrame *VAR_3, int *VAR_4)
{
    DCAEncContext *VAR_5 = VAR_1->priv_data;
    const int32_t *VAR_6;
    int VAR_7, VAR_8;

    if ((VAR_7 = FUNC_4(VAR_1, VAR_2, VAR_5->frame_size, 0)) < 0)
        return VAR_7;

    VAR_6 = (const int32_t *)VAR_3->data[0];

    FUNC_17(VAR_5, VAR_6);
    if (VAR_5->lfe_channel)
        FUNC_10(VAR_5, VAR_6);

    FUNC_3(VAR_5, VAR_6);
    if (VAR_5->options.adpcm_mode)
        FUNC_0(VAR_5);
    FUNC_7(VAR_5);
    FUNC_1(VAR_5);
    FUNC_2(VAR_5);
    FUNC_16(VAR_5, VAR_6);

    FUNC_9(&VAR_5->pb, VAR_2->data, VAR_2->size);
    FUNC_6(VAR_5);
    FUNC_13(VAR_5);
    FUNC_14(VAR_5);
    for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
        FUNC_15(VAR_5, VAR_8);


    for (VAR_8 = FUNC_12(&VAR_5->pb); VAR_8 < 8*VAR_5->frame_size; VAR_8++)
        FUNC_11(&VAR_5->pb, 1, 0);

    FUNC_8(&VAR_5->pb);

    VAR_2->pts = VAR_3->pts;
    VAR_2->duration = FUNC_5(VAR_1, VAR_3->nb_samples);
    VAR_2->size = FUNC_12(&VAR_5->pb) >> 3;
    *VAR_4 = 1;
    return 0;
}
