
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ num; } ;
struct TYPE_13__ {TYPE_1__* priv; } ;
struct TYPE_12__ {double h; double w; TYPE_6__ sample_aspect_ratio; int format; TYPE_4__* dst; } ;
struct TYPE_11__ {double log2_chroma_w; double log2_chroma_h; int flags; } ;
struct TYPE_10__ {double hsub; double vsub; int have_alpha; char* x_expr; double x; char* y_expr; double y; char* w_expr; double w; char* h_expr; double h; char* t_expr; double thickness; int * yuv_color; } ;
typedef TYPE_1__ DrawBoxContext ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 double VAR_5 ;
 double VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 int FUNC_1 (double*,char*,int ,double*,int *,int *,int *,int *,int *,int ,TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ,char*,...) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_6__) ;
 int VAR_26 ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_27)
{
    AVFilterContext *VAR_28 = VAR_27->dst;
    DrawBoxContext *VAR_29 = VAR_28->priv;
    const AVPixFmtDescriptor *VAR_30 = FUNC_3(VAR_27->format);
    double VAR_31[VAR_10], VAR_32;
    char *VAR_33;
    int VAR_34;
    int VAR_35;

    VAR_29->hsub = VAR_30->log2_chroma_w;
    VAR_29->vsub = VAR_30->log2_chroma_h;
    VAR_29->have_alpha = VAR_30->flags & VAR_3;

    VAR_31[VAR_15] = VAR_31[VAR_14] = VAR_27->h;
    VAR_31[VAR_16] = VAR_31[VAR_17] = VAR_27->w;
    VAR_31[VAR_19] = VAR_27->sample_aspect_ratio.num ? FUNC_4(VAR_27->sample_aspect_ratio) : 1;
    VAR_31[VAR_11] = (double)VAR_27->w / VAR_27->h * VAR_31[VAR_19];
    VAR_31[VAR_13] = VAR_29->hsub;
    VAR_31[VAR_21] = VAR_29->vsub;
    VAR_31[VAR_23] = VAR_6;
    VAR_31[VAR_24] = VAR_6;
    VAR_31[VAR_12] = VAR_6;
    VAR_31[VAR_22] = VAR_6;
    VAR_31[VAR_20] = VAR_6;

    for (VAR_35 = 0; VAR_35 <= VAR_7; VAR_35++) {

        VAR_31[VAR_18] = VAR_27->w;
        if ((VAR_34 = FUNC_1(&VAR_32, (VAR_33 = VAR_29->x_expr),
                                          VAR_26, VAR_31,
                                          ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, VAR_28)) < 0 && VAR_35 == VAR_7)
            goto fail;
        VAR_29->x = VAR_31[VAR_23] = VAR_32;

        VAR_31[VAR_18] = VAR_27->h;
        if ((VAR_34 = FUNC_1(&VAR_32, (VAR_33 = VAR_29->y_expr),
                                          VAR_26, VAR_31,
                                          ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, VAR_28)) < 0 && VAR_35 == VAR_7)
            goto fail;
        VAR_29->y = VAR_31[VAR_24] = VAR_32;

        VAR_31[VAR_18] = VAR_27->w - VAR_29->x;
        if ((VAR_34 = FUNC_1(&VAR_32, (VAR_33 = VAR_29->w_expr),
                                          VAR_26, VAR_31,
                                          ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, VAR_28)) < 0 && VAR_35 == VAR_7)
            goto fail;
        VAR_29->w = VAR_31[VAR_22] = VAR_32;

        VAR_31[VAR_18] = VAR_27->h - VAR_29->y;
        if ((VAR_34 = FUNC_1(&VAR_32, (VAR_33 = VAR_29->h_expr),
                                          VAR_26, VAR_31,
                                          ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, VAR_28)) < 0 && VAR_35 == VAR_7)
            goto fail;
        VAR_29->h = VAR_31[VAR_12] = VAR_32;

        VAR_31[VAR_18] = VAR_5;
        if ((VAR_34 = FUNC_1(&VAR_32, (VAR_33 = VAR_29->t_expr),
                                          VAR_26, VAR_31,
                                          ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, VAR_28)) < 0 && VAR_35 == VAR_7)
            goto fail;
        VAR_29->thickness = VAR_31[VAR_20] = VAR_32;
    }


    VAR_29->w = (VAR_29->w > 0) ? VAR_29->w : VAR_27->w;
    VAR_29->h = (VAR_29->h > 0) ? VAR_29->h : VAR_27->h;


    if (VAR_29->w < 0 || VAR_29->h < 0) {
        FUNC_2(VAR_28, VAR_1, "Size values less than 0 are not acceptable.\n");
        return FUNC_0(VAR_4);
    }

    FUNC_2(VAR_28, VAR_2, "x:%d y:%d w:%d h:%d color:0x%02X%02X%02X%02X\n",
           VAR_29->x, VAR_29->y, VAR_29->w, VAR_29->h,
           VAR_29->yuv_color[VAR_25], VAR_29->yuv_color[VAR_8], VAR_29->yuv_color[VAR_9], VAR_29->yuv_color[VAR_0]);

    return 0;

fail:
    FUNC_2(VAR_28, VAR_1,
           "Error when evaluating the expression '%s'.\n",
           VAR_33);
    return VAR_34;
}
