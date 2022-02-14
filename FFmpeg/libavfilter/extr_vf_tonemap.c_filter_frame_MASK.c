
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_27__ {double peak; scalar_t__ desat; int * coeffs; } ;
typedef TYPE_3__ TonemapContext ;
struct TYPE_28__ {double peak; TYPE_5__ const* desc; TYPE_6__* in; TYPE_6__* out; } ;
typedef TYPE_4__ ThreadData ;
struct TYPE_32__ {TYPE_1__* internal; TYPE_7__** outputs; TYPE_3__* priv; } ;
struct TYPE_31__ {int h; int w; int format; TYPE_8__* dst; } ;
struct TYPE_30__ {scalar_t__ color_trc; size_t colorspace; int height; int* linesize; int width; scalar_t__* data; } ;
struct TYPE_29__ {int flags; TYPE_2__* comp; } ;
struct TYPE_26__ {int step; } ;
struct TYPE_25__ {int (* execute ) (TYPE_8__*,int ,TYPE_4__*,int *,int ) ;} ;
typedef TYPE_5__ AVPixFmtDescriptor ;
typedef TYPE_6__ AVFrame ;
typedef TYPE_7__ AVFilterLink ;
typedef TYPE_8__ AVFilterContext ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_7 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (float) ;
 int FUNC_5 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_6 (TYPE_6__**) ;
 int FUNC_7 (scalar_t__,int,scalar_t__,int,int,int ) ;
 int FUNC_8 (TYPE_3__*,int ,char*,...) ;
 TYPE_5__* FUNC_9 (int ) ;
 double FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (TYPE_7__*,TYPE_6__*) ;
 int FUNC_12 (TYPE_8__*) ;
 TYPE_6__* FUNC_13 (TYPE_7__*,int ,int ) ;
 int FUNC_14 (TYPE_6__*,double) ;
 int * VAR_8 ;
 int FUNC_15 (TYPE_8__*,int ,TYPE_4__*,int *,int ) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_16(AVFilterLink *VAR_10, AVFrame *VAR_11)
{
    AVFilterContext *VAR_12 = VAR_10->dst;
    TonemapContext *VAR_13 = VAR_12->priv;
    AVFilterLink *VAR_14 = VAR_12->outputs[0];
    ThreadData VAR_15;
    AVFrame *VAR_16;
    const AVPixFmtDescriptor *VAR_17 = FUNC_9(VAR_10->format);
    const AVPixFmtDescriptor *VAR_18 = FUNC_9(VAR_14->format);
    int VAR_19, VAR_20, VAR_21;
    double VAR_22 = VAR_13->peak;

    if (!VAR_17 || !VAR_18) {
        FUNC_6(&VAR_11);
        return VAR_3;
    }

    VAR_16 = FUNC_13(VAR_14, VAR_14->w, VAR_14->h);
    if (!VAR_16) {
        FUNC_6(&VAR_11);
        return FUNC_0(VAR_7);
    }

    VAR_19 = FUNC_5(VAR_16, VAR_11);
    if (VAR_19 < 0) {
        FUNC_6(&VAR_11);
        FUNC_6(&VAR_16);
        return VAR_19;
    }


    if (VAR_11->color_trc == VAR_2) {
        FUNC_8(VAR_13, VAR_5, "Untagged transfer, assuming linear light\n");
        VAR_16->color_trc = VAR_1;
    } else if (VAR_11->color_trc != VAR_1)
        FUNC_8(VAR_13, VAR_5, "Tonemapping works on linear light only\n");


    if (!VAR_22) {
        VAR_22 = FUNC_10(VAR_11);
        FUNC_8(VAR_13, VAR_4, "Computed signal peak: %f\n", VAR_22);
    }


    VAR_13->coeffs = &VAR_8[VAR_11->colorspace];
    if (VAR_13->desat > 0 && (VAR_11->colorspace == VAR_0 || !VAR_13->coeffs)) {
        if (VAR_11->colorspace == VAR_0)
            FUNC_8(VAR_13, VAR_5, "Missing color space information, ");
        else if (!VAR_13->coeffs)
            FUNC_8(VAR_13, VAR_5, "Unsupported color space '%s', ",
                   FUNC_3(VAR_11->colorspace));
        FUNC_8(VAR_13, VAR_5, "desaturation is disabled\n");
        VAR_13->desat = 0;
    }


    VAR_15.out = VAR_16;
    VAR_15.in = VAR_11;
    VAR_15.desc = VAR_17;
    VAR_15.peak = VAR_22;
    VAR_12->internal->execute(VAR_12, VAR_9, &VAR_15, ((void*)0), FUNC_2(VAR_11->height, FUNC_12(VAR_12)));


    if (VAR_17->flags & VAR_6 && VAR_18->flags & VAR_6) {
        FUNC_7(VAR_16->data[3], VAR_16->linesize[3],
                            VAR_11->data[3], VAR_11->linesize[3],
                            VAR_16->linesize[3], VAR_14->h);
    } else if (VAR_18->flags & VAR_6) {
        for (VAR_21 = 0; VAR_21 < VAR_16->height; VAR_21++) {
            for (VAR_20 = 0; VAR_20 < VAR_16->width; VAR_20++) {
                FUNC_1(VAR_16->data[3] + VAR_20 * VAR_18->comp[3].step + VAR_21 * VAR_16->linesize[3],
                        FUNC_4(1.0f));
            }
        }
    }

    FUNC_6(&VAR_11);

    FUNC_14(VAR_16, VAR_22);

    return FUNC_11(VAR_14, VAR_16);
}
