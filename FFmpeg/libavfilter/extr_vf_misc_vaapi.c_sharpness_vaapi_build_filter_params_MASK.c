
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
typedef int sharpness ;
typedef scalar_t__ VAStatus ;
struct TYPE_15__ {int value; int type; } ;
typedef TYPE_3__ VAProcFilterParameterBuffer ;
struct TYPE_14__ {int max_value; int min_value; } ;
struct TYPE_16__ {TYPE_2__ range; } ;
typedef TYPE_4__ VAProcFilterCap ;
struct TYPE_17__ {int sharpness; int va_context; TYPE_1__* hwctx; } ;
typedef TYPE_5__ VAAPIVPPContext ;
struct TYPE_18__ {TYPE_5__* priv; } ;
struct TYPE_13__ {int display; } ;
typedef TYPE_5__ SharpnessVAAPIContext ;
typedef TYPE_7__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_7__*,int ,char*,scalar_t__,int ) ;
 int FUNC_2 (TYPE_7__*,int ,TYPE_3__*,int,int) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ,int ,TYPE_4__*,int*) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_7)
{
    VAAPIVPPContext *VAR_8 = VAR_7->priv;
    SharpnessVAAPIContext *VAR_9 = VAR_7->priv;

    VAProcFilterCap VAR_10;

    VAStatus VAR_11;
    uint32_t VAR_12 = 1;

    VAProcFilterParameterBuffer VAR_13;

    VAR_11 = FUNC_5(VAR_8->hwctx->display, VAR_8->va_context,
                                     VAR_5,
                                     &VAR_10, &VAR_12);
    if (VAR_11 != VAR_6) {
        FUNC_1(VAR_7, VAR_0, "Failed to query sharpness caps "
               "context: %d (%s).\n", VAR_11, FUNC_4(VAR_11));
        return FUNC_0(VAR_1);
    }

    VAR_13.type = VAR_5;
    VAR_13.value = FUNC_3(VAR_9->sharpness,
                          VAR_3, VAR_2,
                          VAR_10.range.min_value,
                          VAR_10.range.max_value);
    return FUNC_2(VAR_7,
                                           VAR_4,
                                           &VAR_13, sizeof(VAR_13), 1);
}
