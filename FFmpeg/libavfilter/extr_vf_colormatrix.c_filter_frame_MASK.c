
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef enum ColorMode { ____Placeholder_ColorMode } ColorMode ;
typedef enum AVColorSpace { ____Placeholder_AVColorSpace } AVColorSpace ;
struct TYPE_27__ {int c7; int c6; int c5; int c4; int c3; int c2; TYPE_4__* dst; TYPE_4__* src; int member_0; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_31__ {TYPE_1__* internal; TYPE_5__** outputs; TYPE_3__* priv; } ;
struct TYPE_30__ {int h; int w; TYPE_6__* dst; } ;
struct TYPE_29__ {int colorspace; scalar_t__ format; int height; } ;
struct TYPE_28__ {int source; int mode; int dest; int *** yuv_convert; } ;
struct TYPE_26__ {int (* execute ) (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;} ;
typedef TYPE_3__ ColorMatrixContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;




 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_4__**) ;
 int FUNC_4 (TYPE_6__*,int ,char*) ;
 int FUNC_5 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_6__*) ;
 TYPE_4__* FUNC_7 (TYPE_5__*,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;
 int FUNC_9 (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;
 int FUNC_10 (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;
 int FUNC_11 (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static int FUNC_12(AVFilterLink *VAR_11, AVFrame *VAR_12)
{
    AVFilterContext *VAR_13 = VAR_11->dst;
    ColorMatrixContext *VAR_14 = VAR_13->priv;
    AVFilterLink *VAR_15 = VAR_13->outputs[0];
    AVFrame *VAR_16;
    ThreadData VAR_17 = {0};

    VAR_16 = FUNC_7(VAR_15, VAR_15->w, VAR_15->h);
    if (!VAR_16) {
        FUNC_3(&VAR_12);
        return FUNC_0(VAR_6);
    }
    FUNC_2(VAR_16, VAR_12);

    if (VAR_14->source == VAR_4) {
        enum AVColorSpace VAR_18 = VAR_12->colorspace;
        enum ColorMode VAR_19;

        switch(VAR_18) {
        case 136 : VAR_19 = 130 ; break;
        case 135 : VAR_19 = 129 ; break;
        case 133 : VAR_19 = 128 ; break;
        case 137 : VAR_19 = 131 ; break;
        case 134 : VAR_19 = 131 ; break;
        case 138: VAR_19 = 132 ; break;
        case 139 : VAR_19 = 132 ; break;
        default :
            FUNC_4(VAR_13, VAR_0, "Input frame does not specify a supported colorspace, and none has been specified as source either\n");
            FUNC_3(&VAR_16);
            return FUNC_0(VAR_5);
        }
        VAR_14->mode = VAR_19 * 5 + VAR_14->dest;
    } else
        VAR_14->mode = VAR_14->source * 5 + VAR_14->dest;

    switch(VAR_14->dest) {
    case 130 : VAR_16->colorspace = 136 ; break;
    case 129 : VAR_16->colorspace = 135 ; break;
    case 128: VAR_16->colorspace = 133 ; break;
    case 131 : VAR_16->colorspace = 137 ; break;
    case 132 : VAR_16->colorspace = 138; break;
    }

    VAR_17.src = VAR_12;
    VAR_17.dst = VAR_16;
    VAR_17.c2 = VAR_14->yuv_convert[VAR_14->mode][0][1];
    VAR_17.c3 = VAR_14->yuv_convert[VAR_14->mode][0][2];
    VAR_17.c4 = VAR_14->yuv_convert[VAR_14->mode][1][1];
    VAR_17.c5 = VAR_14->yuv_convert[VAR_14->mode][1][2];
    VAR_17.c6 = VAR_14->yuv_convert[VAR_14->mode][2][1];
    VAR_17.c7 = VAR_14->yuv_convert[VAR_14->mode][2][2];

    if (VAR_12->format == VAR_3)
        VAR_13->internal->execute(VAR_13, VAR_10, &VAR_17, ((void*)0),
                               FUNC_1(VAR_12->height, FUNC_6(VAR_13)));
    else if (VAR_12->format == VAR_2)
        VAR_13->internal->execute(VAR_13, VAR_9, &VAR_17, ((void*)0),
                               FUNC_1(VAR_12->height, FUNC_6(VAR_13)));
    else if (VAR_12->format == VAR_1)
        VAR_13->internal->execute(VAR_13, VAR_8, &VAR_17, ((void*)0),
                               FUNC_1(VAR_12->height / 2, FUNC_6(VAR_13)));
    else
        VAR_13->internal->execute(VAR_13, VAR_7, &VAR_17, ((void*)0),
                               FUNC_1(VAR_12->height, FUNC_6(VAR_13)));

    FUNC_3(&VAR_12);
    return FUNC_5(VAR_15, VAR_16);
}
