
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int GlobalAlpha; int GlobalAlphaEnable; int PixelAlphaEnable; int DstH; int DstW; int DstY; int DstX; } ;
typedef TYPE_2__ mfxVPPCompInputStream ;
struct TYPE_15__ {TYPE_3__* priv; } ;
struct TYPE_14__ {int h; int w; int format; TYPE_5__* dst; } ;
struct TYPE_11__ {TYPE_2__* InputStream; } ;
struct TYPE_13__ {int overlay_alpha; int * var_values; TYPE_1__ comp_conf; } ;
typedef TYPE_3__ QSVOverlayContext ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*,int ,char*,int ,int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_7)
{
    AVFilterContext *VAR_8 = VAR_7->dst;
    QSVOverlayContext *VAR_9 = VAR_8->priv;
    mfxVPPCompInputStream *VAR_10 = &VAR_9->comp_conf.InputStream[1];
    int VAR_11 = 0;

    FUNC_2(VAR_8, VAR_0, "Input[%d] is of %s.\n", FUNC_0(VAR_7),
           FUNC_1(VAR_7->format));

    VAR_9->var_values[VAR_3] = VAR_7->w;
    VAR_9->var_values[VAR_2] = VAR_7->h;

    VAR_11 = FUNC_3(VAR_8);
    if (VAR_11 < 0)
        return VAR_11;

    VAR_10->DstX = VAR_9->var_values[VAR_5];
    VAR_10->DstY = VAR_9->var_values[VAR_6];
    VAR_10->DstW = VAR_9->var_values[VAR_4];
    VAR_10->DstH = VAR_9->var_values[VAR_1];
    VAR_10->GlobalAlpha = VAR_9->overlay_alpha;
    VAR_10->GlobalAlphaEnable = (VAR_10->GlobalAlpha < 255);
    VAR_10->PixelAlphaEnable = FUNC_4(VAR_7);

    return 0;
}
