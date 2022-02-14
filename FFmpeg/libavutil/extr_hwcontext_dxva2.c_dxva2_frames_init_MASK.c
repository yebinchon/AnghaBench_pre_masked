
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ surface_type; } ;
struct TYPE_10__ {int pool; TYPE_1__* internal; TYPE_4__* hwctx; } ;
struct TYPE_9__ {int device_handle; } ;
struct TYPE_8__ {TYPE_2__* priv; } ;
typedef TYPE_2__ DXVA2FramesContext ;
typedef TYPE_3__ AVHWFramesContext ;
typedef TYPE_4__ AVDXVA2FramesContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*,int ,char*,...) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(AVHWFramesContext *VAR_5)
{
    AVDXVA2FramesContext *VAR_6 = VAR_5->hwctx;
    DXVA2FramesContext *VAR_7 = VAR_5->internal->priv;
    int VAR_8;

    if (VAR_6->surface_type != VAR_1 &&
        VAR_6->surface_type != VAR_2) {
        FUNC_1(VAR_5, VAR_0, "Unknown surface type: %lu\n",
               VAR_6->surface_type);
        return FUNC_0(VAR_3);
    }

    VAR_7->device_handle = VAR_4;


    if (!VAR_5->pool) {
        VAR_8 = FUNC_2(VAR_5);
        if (VAR_8 < 0) {
            FUNC_1(VAR_5, VAR_0, "Error creating an internal frame pool\n");
            return VAR_8;
        }
    }

    return 0;
}
