
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_14__ {int type; int h; int w; int dst; } ;
struct TYPE_13__ {int format; int channels; int nb_samples; int extended_data; int height; int width; int linesize; scalar_t__ data; } ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVFilterLink ;


 int FUNC_0 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__**) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (scalar_t__,int ,int const**,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,char*) ;
 int FUNC_7 (int ,int ,int ,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_8 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_9 (TYPE_2__*,int ,int ) ;

int FUNC_10(AVFilterLink *VAR_3, AVFrame **VAR_4)
{
    AVFrame *VAR_5 = *VAR_4;
    AVFrame *VAR_6;
    int VAR_7;

    if (FUNC_4(VAR_5))
        return 0;
    FUNC_6(VAR_3->dst, VAR_0, "Copying data in avfilter.\n");

    switch (VAR_3->type) {
    case 128:
        VAR_6 = FUNC_9(VAR_3, VAR_3->w, VAR_3->h);
        break;
    case 129:
        VAR_6 = FUNC_8(VAR_3, VAR_5->nb_samples);
        break;
    default:
        return FUNC_0(VAR_1);
    }
    if (!VAR_6)
        return FUNC_0(VAR_2);

    VAR_7 = FUNC_2(VAR_6, VAR_5);
    if (VAR_7 < 0) {
        FUNC_3(&VAR_6);
        return VAR_7;
    }

    switch (VAR_3->type) {
    case 128:
        FUNC_5(VAR_6->data, VAR_6->linesize, (const uint8_t **)VAR_5->data, VAR_5->linesize,
                      VAR_5->format, VAR_5->width, VAR_5->height);
        break;
    case 129:
        FUNC_7(VAR_6->extended_data, VAR_5->extended_data,
                        0, 0, VAR_5->nb_samples,
                        VAR_5->channels,
                        VAR_5->format);
        break;
    default:
        FUNC_1(!"reached");
    }

    FUNC_3(&VAR_5);
    *VAR_4 = VAR_6;
    return 0;
}
