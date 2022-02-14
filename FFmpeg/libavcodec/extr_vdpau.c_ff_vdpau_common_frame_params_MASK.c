
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int VdpChromaType ;
struct TYPE_9__ {scalar_t__ data; } ;
struct TYPE_8__ {int sw_pix_fmt; } ;
struct TYPE_7__ {void* height; void* width; int sw_format; int format; } ;
typedef TYPE_1__ AVHWFramesContext ;
typedef TYPE_2__ AVCodecContext ;
typedef TYPE_3__ AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *,void**,void**) ;

int FUNC_2(AVCodecContext *VAR_2,
                                 AVBufferRef *VAR_3)
{
    AVHWFramesContext *VAR_4 = (AVHWFramesContext*)VAR_3->data;
    VdpChromaType VAR_5;
    uint32_t VAR_6;
    uint32_t VAR_7;

    if (FUNC_1(VAR_2, &VAR_5, &VAR_6, &VAR_7))
        return FUNC_0(VAR_1);

    VAR_4->format = VAR_0;
    VAR_4->sw_format = VAR_2->sw_pix_fmt;
    VAR_4->width = VAR_6;
    VAR_4->height = VAR_7;

    return 0;
}
