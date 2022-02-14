
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef enum AVHWFrameTransferDirection { ____Placeholder_AVHWFrameTransferDirection } AVHWFrameTransferDirection ;
struct TYPE_10__ {scalar_t__ data; } ;
struct TYPE_9__ {TYPE_2__* internal; } ;
struct TYPE_8__ {TYPE_1__* hw_type; } ;
struct TYPE_7__ {int (* transfer_get_formats ) (TYPE_3__*,int,int**) ;} ;
typedef TYPE_3__ AVHWFramesContext ;
typedef TYPE_4__ AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,int,int**) ;

int FUNC_2(AVBufferRef *VAR_1,
                                    enum AVHWFrameTransferDirection VAR_2,
                                    enum AVPixelFormat **VAR_3, int VAR_4)
{
    AVHWFramesContext *VAR_5 = (AVHWFramesContext*)VAR_1->data;

    if (!VAR_5->internal->hw_type->transfer_get_formats)
        return FUNC_0(VAR_0);

    return VAR_5->internal->hw_type->transfer_get_formats(VAR_5, VAR_2, VAR_3);
}
