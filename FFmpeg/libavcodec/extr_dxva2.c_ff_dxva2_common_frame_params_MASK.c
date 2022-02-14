
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ data; } ;
struct TYPE_12__ {scalar_t__ codec_id; scalar_t__ sw_pix_fmt; int coded_height; int coded_width; } ;
struct TYPE_11__ {int BindFlags; int surface_type; } ;
struct TYPE_10__ {scalar_t__ type; } ;
struct TYPE_9__ {scalar_t__ format; int initial_pool_size; TYPE_3__* hwctx; void* height; void* width; int sw_format; TYPE_2__* device_ctx; } ;
typedef TYPE_1__ AVHWFramesContext ;
typedef TYPE_2__ AVHWDeviceContext ;
typedef TYPE_3__ AVDXVA2FramesContext ;
typedef TYPE_3__ AVD3D11VAFramesContext ;
typedef TYPE_5__ AVCodecContext ;
typedef TYPE_6__ AVBufferRef ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_1 (int ,int) ;

int FUNC_2(AVCodecContext *VAR_14,
                                 AVBufferRef *VAR_15)
{
    AVHWFramesContext *VAR_16 = (AVHWFramesContext *)VAR_15->data;
    AVHWDeviceContext *VAR_17 = VAR_16->device_ctx;
    int VAR_18, VAR_19;

    if (VAR_17->type == VAR_5) {
        VAR_16->format = VAR_7;
    } else if (VAR_17->type == VAR_4) {
        VAR_16->format = VAR_6;
    } else {
        return FUNC_0(VAR_13);
    }



    if (VAR_14->codec_id == VAR_2)
        VAR_18 = 32;


    else if (VAR_14->codec_id == VAR_1)
        VAR_18 = 128;
    else
        VAR_18 = 16;


    VAR_19 = 1;


    if (VAR_14->codec_id == VAR_0 || VAR_14->codec_id == VAR_1)
        VAR_19 += 16;
    else if (VAR_14->codec_id == VAR_3)
        VAR_19 += 8;
    else
        VAR_19 += 2;

    VAR_16->sw_format = VAR_14->sw_pix_fmt == VAR_10 ?
                            VAR_9 : VAR_8;
    VAR_16->width = FUNC_1(VAR_14->coded_width, VAR_18);
    VAR_16->height = FUNC_1(VAR_14->coded_height, VAR_18);
    VAR_16->initial_pool_size = VAR_19;
    return 0;
}
