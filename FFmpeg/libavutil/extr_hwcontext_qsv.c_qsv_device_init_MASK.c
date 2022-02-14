
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ mfxStatus ;
struct TYPE_12__ {int pix_fmt; int device_type; scalar_t__ handle_type; } ;
struct TYPE_11__ {TYPE_1__* internal; TYPE_3__* hwctx; } ;
struct TYPE_10__ {int session; } ;
struct TYPE_9__ {int ver; int impl; int handle; int child_pix_fmt; int child_device_type; scalar_t__ handle_type; } ;
struct TYPE_8__ {TYPE_2__* priv; } ;
typedef TYPE_2__ QSVDeviceContext ;
typedef TYPE_3__ AVQSVDeviceContext ;
typedef TYPE_4__ AVHWDeviceContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_4__*,int ,char*) ;
 TYPE_5__* VAR_4 ;

__attribute__((used)) static int FUNC_4(AVHWDeviceContext *VAR_5)
{
    AVQSVDeviceContext *VAR_6 = VAR_5->hwctx;
    QSVDeviceContext *VAR_7 = VAR_5->internal->priv;

    mfxStatus VAR_8;
    int VAR_9;

    for (VAR_9 = 0; VAR_4[VAR_9].handle_type; VAR_9++) {
        VAR_8 = FUNC_2(VAR_6->session, VAR_4[VAR_9].handle_type,
                                     &VAR_7->handle);
        if (VAR_8 == VAR_3) {
            VAR_7->handle_type = VAR_4[VAR_9].handle_type;
            VAR_7->child_device_type = VAR_4[VAR_9].device_type;
            VAR_7->child_pix_fmt = VAR_4[VAR_9].pix_fmt;
            break;
        }
    }
    if (!VAR_7->handle) {
        FUNC_3(VAR_5, VAR_2, "No supported hw handle could be retrieved "
               "from the session\n");
    }

    VAR_8 = FUNC_0(VAR_6->session, &VAR_7->impl);
    if (VAR_8 == VAR_3)
        VAR_8 = FUNC_1(VAR_6->session, &VAR_7->ver);
    if (VAR_8 != VAR_3) {
        FUNC_3(VAR_5, VAR_1, "Error querying the session attributes\n");
        return VAR_0;
    }

    return 0;
}
