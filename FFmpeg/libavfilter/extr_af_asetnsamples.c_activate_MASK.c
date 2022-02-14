
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ nb_out_samples; int pad; } ;
struct TYPE_13__ {TYPE_3__* priv; int ** outputs; int ** inputs; } ;
struct TYPE_12__ {scalar_t__ nb_samples; int format; int channels; int extended_data; } ;
typedef TYPE_1__ AVFrame ;
typedef int AVFilterLink ;
typedef TYPE_2__ AVFilterContext ;
typedef TYPE_3__ ASNSContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__**) ;
 int FUNC_6 (int ,int ,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_7 (int ,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_10 (int *,scalar_t__) ;
 int FUNC_11 (int *,scalar_t__,scalar_t__,TYPE_1__**) ;
 scalar_t__ FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(AVFilterContext *VAR_2)
{
    AVFilterLink *VAR_3 = VAR_2->inputs[0];
    AVFilterLink *VAR_4 = VAR_2->outputs[0];
    ASNSContext *VAR_5 = VAR_2->priv;
    AVFrame *VAR_6 = ((void*)0), *VAR_7;
    int VAR_8;

    FUNC_2(VAR_4, VAR_3);

    VAR_8 = FUNC_11(VAR_3, VAR_5->nb_out_samples, VAR_5->nb_out_samples, &VAR_6);
    if (VAR_8 < 0)
        return VAR_8;

    if (VAR_8 > 0) {
        if (!VAR_5->pad || VAR_6->nb_samples == VAR_5->nb_out_samples) {
            VAR_8 = FUNC_8(VAR_4, VAR_6);
            if (FUNC_12(VAR_3) >= VAR_5->nb_out_samples)
                FUNC_9(VAR_2, 100);
            return VAR_8;
        }

        VAR_7 = FUNC_10(VAR_4, VAR_5->nb_out_samples);
        if (!VAR_7) {
            FUNC_5(&VAR_6);
            return FUNC_0(VAR_0);
        }

        VAR_8 = FUNC_4(VAR_7, VAR_6);
        if (VAR_8 < 0) {
            FUNC_5(&VAR_7);
            FUNC_5(&VAR_6);
            return VAR_8;
        }

        FUNC_6(VAR_7->extended_data, VAR_6->extended_data,
                        0, 0, VAR_6->nb_samples, VAR_6->channels, VAR_6->format);
        FUNC_7(VAR_7->extended_data, VAR_6->nb_samples,
                               VAR_5->nb_out_samples - VAR_6->nb_samples, VAR_6->channels,
                               VAR_6->format);
        FUNC_5(&VAR_6);
        return FUNC_8(VAR_4, VAR_7);
    }

    FUNC_1(VAR_3, VAR_4);
    FUNC_3(VAR_4, VAR_3);

    return VAR_1;
}
