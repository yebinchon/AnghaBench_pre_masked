
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ VAStatus ;
struct TYPE_9__ {scalar_t__ va_context; scalar_t__ va_config; TYPE_1__* hwctx; int device_ref; scalar_t__ have_old_context; } ;
typedef TYPE_3__ VAAPIDecodeContext ;
struct TYPE_10__ {TYPE_2__* internal; } ;
struct TYPE_8__ {TYPE_3__* hwaccel_priv_data; } ;
struct TYPE_7__ {int display; } ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*,int ,char*,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

int FUNC_5(AVCodecContext *VAR_3)
{
    VAAPIDecodeContext *VAR_4 = VAR_3->internal->hwaccel_priv_data;
    VAStatus VAR_5;







    if (VAR_4->va_context != VAR_1) {
        VAR_5 = FUNC_3(VAR_4->hwctx->display, VAR_4->va_context);
        if (VAR_5 != VAR_2) {
            FUNC_1(VAR_3, VAR_0, "Failed to destroy decode "
                   "context %#x: %d (%s).\n",
                   VAR_4->va_context, VAR_5, FUNC_4(VAR_5));
        }
    }
    if (VAR_4->va_config != VAR_1) {
        VAR_5 = FUNC_2(VAR_4->hwctx->display, VAR_4->va_config);
        if (VAR_5 != VAR_2) {
            FUNC_1(VAR_3, VAR_0, "Failed to destroy decode "
                   "configuration %#x: %d (%s).\n",
                   VAR_4->va_config, VAR_5, FUNC_4(VAR_5));
        }
    }





    return 0;
}
