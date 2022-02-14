
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ PixelAlphaEnable; scalar_t__ GlobalAlphaEnable; int DstH; int DstW; scalar_t__ DstY; scalar_t__ DstX; } ;
typedef TYPE_2__ mfxVPPCompInputStream ;
struct TYPE_13__ {TYPE_3__* priv; } ;
struct TYPE_12__ {int h; int w; int format; TYPE_5__* dst; } ;
struct TYPE_9__ {TYPE_2__* InputStream; } ;
struct TYPE_11__ {int * var_values; TYPE_1__ comp_conf; } ;
typedef TYPE_3__ QSVOverlayContext ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*,int ,char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_5)
{
    AVFilterContext *VAR_6 = VAR_5->dst;
    QSVOverlayContext *VAR_7 = VAR_6->priv;
    mfxVPPCompInputStream *VAR_8 = &VAR_7->comp_conf.InputStream[0];

    FUNC_2(VAR_6, VAR_0, "Input[%d] is of %s.\n", FUNC_0(VAR_5),
           FUNC_1(VAR_5->format));

    VAR_7->var_values[VAR_2] =
    VAR_7->var_values[VAR_4] = VAR_5->w;
    VAR_7->var_values[VAR_1] =
    VAR_7->var_values[VAR_3] = VAR_5->h;

    VAR_8->DstX = 0;
    VAR_8->DstY = 0;
    VAR_8->DstW = VAR_5->w;
    VAR_8->DstH = VAR_5->h;
    VAR_8->GlobalAlphaEnable = 0;
    VAR_8->PixelAlphaEnable = 0;

    return 0;
}
