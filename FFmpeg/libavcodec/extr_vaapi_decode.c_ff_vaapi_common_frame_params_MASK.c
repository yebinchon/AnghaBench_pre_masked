
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ VAConfigID ;
struct TYPE_10__ {scalar_t__ data; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_1__* hwctx; } ;
struct TYPE_8__ {int device_ref; TYPE_3__* device_ctx; } ;
struct TYPE_7__ {int display; } ;
typedef TYPE_1__ AVVAAPIDeviceContext ;
typedef TYPE_2__ AVHWFramesContext ;
typedef TYPE_3__ AVHWDeviceContext ;
typedef int AVCodecContext ;
typedef TYPE_4__ AVBufferRef ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *,int ,scalar_t__*,TYPE_4__*) ;

int FUNC_3(AVCodecContext *VAR_3,
                                 AVBufferRef *VAR_4)
{
    AVHWFramesContext *VAR_5 = (AVHWFramesContext *)VAR_4->data;
    AVHWDeviceContext *VAR_6 = VAR_5->device_ctx;
    AVVAAPIDeviceContext *VAR_7;
    VAConfigID VAR_8 = VAR_2;
    int VAR_9;

    if (VAR_6->type != VAR_0)
        return FUNC_0(VAR_1);
    VAR_7 = VAR_6->hwctx;

    VAR_9 = FUNC_2(VAR_3, VAR_5->device_ref, &VAR_8,
                                   VAR_4);
    if (VAR_9)
        return VAR_9;

    if (VAR_8 != VAR_2)
        FUNC_1(VAR_7->display, VAR_8);

    return 0;
}
