
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int procamp_params ;
typedef int procamp_caps ;
typedef scalar_t__ VAStatus ;
struct TYPE_15__ {int max_value; int min_value; } ;
struct TYPE_16__ {int attrib; TYPE_2__ range; void* value; void* type; } ;
typedef TYPE_3__ VAProcFilterParameterBufferColorBalance ;
typedef TYPE_3__ VAProcFilterCapColorBalance ;
struct TYPE_17__ {int saturation; int hue; int contrast; int bright; int va_context; TYPE_1__* hwctx; } ;
typedef TYPE_5__ VAAPIVPPContext ;
struct TYPE_18__ {TYPE_5__* priv; } ;
struct TYPE_14__ {int display; } ;
typedef TYPE_5__ ProcampVAAPIContext ;
typedef TYPE_7__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_1 (TYPE_7__*,int ,char*,scalar_t__,int ) ;
 int FUNC_2 (TYPE_7__*,int ,TYPE_3__**,int,int) ;
 void* FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_3__**,int ,int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ,void*,TYPE_3__**,int*) ;

__attribute__((used)) static int FUNC_7(AVFilterContext *VAR_18)
{
    VAAPIVPPContext *VAR_19 = VAR_18->priv;
    ProcampVAAPIContext *VAR_20 = VAR_18->priv;
    VAStatus VAR_21;
    VAProcFilterParameterBufferColorBalance VAR_22[4];
    VAProcFilterCapColorBalance VAR_23[VAR_12];
    int VAR_24;
    int VAR_25 = 0;

    FUNC_4(&VAR_22, 0, sizeof(VAR_22));
    FUNC_4(&VAR_23, 0, sizeof(VAR_23));

    VAR_24 = VAR_12;
    VAR_21 = FUNC_6(VAR_19->hwctx->display, VAR_19->va_context,
                                     VAR_15, &VAR_23, &VAR_24);

    if (VAR_21 != VAR_17) {
        FUNC_1(VAR_18, VAR_0, "Failed to query procamp "
               "filter caps: %d (%s).\n", VAR_21, FUNC_5(VAR_21));
        return FUNC_0(VAR_5);
    }


    VAR_22[VAR_25].type = VAR_15;
    VAR_22[VAR_25].attrib = VAR_10;
    VAR_22[VAR_25].value = FUNC_3(VAR_20->bright, VAR_2, VAR_1,
                                   VAR_23[VAR_10-1].range.min_value,
                                   VAR_23[VAR_10-1].range.max_value);
    VAR_25++;


    VAR_22[VAR_25].type = VAR_15;
    VAR_22[VAR_25].attrib = VAR_11;
    VAR_22[VAR_25].value = FUNC_3(VAR_20->contrast, VAR_4, VAR_3,
                                   VAR_23[VAR_11-1].range.min_value,
                                   VAR_23[VAR_11-1].range.max_value);
    VAR_25++;


    VAR_22[VAR_25].type = VAR_15;
    VAR_22[VAR_25].attrib = VAR_13;
    VAR_22[VAR_25].value = FUNC_3(VAR_20->hue, VAR_7, VAR_6,
                                   VAR_23[VAR_13-1].range.min_value,
                                   VAR_23[VAR_13-1].range.max_value);
    VAR_25++;


    VAR_22[VAR_25].type = VAR_15;
    VAR_22[VAR_25].attrib = VAR_14;
    VAR_22[VAR_25].value = FUNC_3(VAR_20->saturation, VAR_9, VAR_8,
                                   VAR_23[VAR_14-1].range.min_value,
                                   VAR_23[VAR_14-1].range.max_value);
    VAR_25++;

    return FUNC_2(VAR_18,
                                           VAR_16,
                                           &VAR_22,
                                           sizeof(VAR_22[0]),
                                           VAR_25);
}
