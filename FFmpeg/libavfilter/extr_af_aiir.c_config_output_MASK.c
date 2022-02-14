
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {int * outputs; TYPE_3__** inputs; TYPE_2__* priv; } ;
struct TYPE_17__ {int channels; int format; TYPE_4__* src; } ;
struct TYPE_16__ {int channels; int format; int process; int iir_channel; TYPE_1__* iir; int video; int h; int w; scalar_t__ response; int b_str; int a_str; int g_str; } ;
struct TYPE_15__ {int* nb_ab; int** ab; int g; } ;
typedef TYPE_1__ IIRChannel ;
typedef TYPE_2__ AudioIIRContext ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*,int ,char*) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (TYPE_4__*,int) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (TYPE_4__*,int,int ,int) ;
 int FUNC_11 (TYPE_4__*,int ,int) ;

__attribute__((used)) static int FUNC_12(AVFilterLink *VAR_12)
{
    AVFilterContext *VAR_13 = VAR_12->src;
    AudioIIRContext *VAR_14 = VAR_13->priv;
    AVFilterLink *VAR_15 = VAR_13->inputs[0];
    int VAR_16, VAR_17, VAR_18;

    VAR_14->channels = VAR_15->channels;
    VAR_14->iir = FUNC_1(VAR_14->channels, sizeof(*VAR_14->iir));
    if (!VAR_14->iir)
        return FUNC_0(VAR_3);

    VAR_17 = FUNC_11(VAR_13, VAR_14->g_str, VAR_15->channels);
    if (VAR_17 < 0)
        return VAR_17;

    VAR_17 = FUNC_10(VAR_13, VAR_15->channels, VAR_14->a_str, 0);
    if (VAR_17 < 0)
        return VAR_17;

    VAR_17 = FUNC_10(VAR_13, VAR_15->channels, VAR_14->b_str, 1);
    if (VAR_17 < 0)
        return VAR_17;

    if (VAR_14->format == 2) {
        FUNC_5(VAR_13, VAR_15->channels);
    } else if (VAR_14->format == 3) {
        FUNC_4(VAR_13, VAR_15->channels);
    }

    FUNC_2(&VAR_14->video);
    if (VAR_14->response) {
        VAR_14->video = FUNC_9(VAR_13->outputs[1], VAR_14->w, VAR_14->h);
        if (!VAR_14->video)
            return FUNC_0(VAR_3);

        FUNC_8(VAR_13, VAR_14->video);
    }

    if (VAR_14->format == 0)
        FUNC_3(VAR_13, VAR_2, "tf coefficients format is not recommended for too high number of zeros/poles.\n");

    if (VAR_14->format > 0 && VAR_14->process == 0) {
        FUNC_3(VAR_13, VAR_2, "Direct processsing is not recommended for zp coefficients format.\n");

        VAR_17 = FUNC_6(VAR_13, VAR_15->channels);
        if (VAR_17 < 0)
            return VAR_17;
    } else if (VAR_14->format == 0 && VAR_14->process == 1) {
        FUNC_3(VAR_13, VAR_1, "Serial cascading is not implemented for transfer function.\n");
        return VAR_0;
    } else if (VAR_14->format > 0 && VAR_14->process == 1) {
        if (VAR_15->format == 129)
            FUNC_3(VAR_13, VAR_2, "Serial cascading is not recommended for i16 precision.\n");

        VAR_17 = FUNC_7(VAR_13, VAR_15->channels);
        if (VAR_17 < 0)
            return VAR_17;
    }

    for (VAR_16 = 0; VAR_14->format == 0 && VAR_16 < VAR_15->channels; VAR_16++) {
        IIRChannel *VAR_19 = &VAR_14->iir[VAR_16];

        for (VAR_18 = 1; VAR_18 < VAR_19->nb_ab[0]; VAR_18++) {
            VAR_19->ab[0][VAR_18] /= VAR_19->ab[0][0];
        }

        for (VAR_18 = 0; VAR_18 < VAR_19->nb_ab[1]; VAR_18++) {
            VAR_19->ab[1][VAR_18] *= VAR_19->g / VAR_19->ab[0][0];
        }
    }

    switch (VAR_15->format) {
    case 131: VAR_14->iir_channel = VAR_14->process == 1 ? VAR_8 : VAR_4; break;
    case 130: VAR_14->iir_channel = VAR_14->process == 1 ? VAR_9 : VAR_5; break;
    case 128: VAR_14->iir_channel = VAR_14->process == 1 ? VAR_11 : VAR_7; break;
    case 129: VAR_14->iir_channel = VAR_14->process == 1 ? VAR_10 : VAR_6; break;
    }

    return 0;
}
