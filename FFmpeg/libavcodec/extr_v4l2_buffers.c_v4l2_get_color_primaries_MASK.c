
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef enum v4l2_ycbcr_encoding { ____Placeholder_v4l2_ycbcr_encoding } v4l2_ycbcr_encoding ;
typedef enum v4l2_colorspace { ____Placeholder_v4l2_colorspace } v4l2_colorspace ;
typedef enum AVColorPrimaries { ____Placeholder_AVColorPrimaries } AVColorPrimaries ;
struct TYPE_10__ {int type; } ;
struct TYPE_15__ {TYPE_6__* context; TYPE_2__ buf; } ;
typedef TYPE_7__ V4L2Buffer ;
struct TYPE_9__ {int colorspace; int ycbcr_enc; } ;
struct TYPE_11__ {int colorspace; int ycbcr_enc; } ;
struct TYPE_12__ {TYPE_1__ pix; TYPE_3__ pix_mp; } ;
struct TYPE_13__ {TYPE_4__ fmt; } ;
struct TYPE_14__ {TYPE_5__ format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 scalar_t__ FUNC_0 (int ) ;





__attribute__((used)) static enum AVColorPrimaries FUNC_1(V4L2Buffer *VAR_7)
{
    enum v4l2_ycbcr_encoding VAR_8;
    enum v4l2_colorspace VAR_9;

    VAR_9 = FUNC_0(VAR_7->buf.type) ?
        VAR_7->context->format.fmt.pix_mp.colorspace :
        VAR_7->context->format.fmt.pix.colorspace;

    VAR_8 = FUNC_0(VAR_7->buf.type) ?
        VAR_7->context->format.fmt.pix_mp.ycbcr_enc:
        VAR_7->context->format.fmt.pix.ycbcr_enc;

    switch(VAR_8) {
    case 128:
    case 130: return VAR_3;
    case 129:
    case 131:return VAR_2;
    default:
        break;
    }

    switch(VAR_9) {
    case 135: return VAR_1;
    case 133: return VAR_4;
    case 132: return VAR_5;
    case 134: return VAR_0;
    default:
        break;
    }

    return VAR_6;
}
