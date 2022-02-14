
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
typedef enum AVColorSpace { ____Placeholder_AVColorSpace } AVColorSpace ;
struct TYPE_10__ {int type; } ;
struct TYPE_15__ {TYPE_5__* context; TYPE_2__ buf; } ;
typedef TYPE_7__ V4L2Buffer ;
struct TYPE_9__ {int colorspace; int ycbcr_enc; } ;
struct TYPE_11__ {int colorspace; int ycbcr_enc; } ;
struct TYPE_12__ {TYPE_1__ pix; TYPE_3__ pix_mp; } ;
struct TYPE_14__ {TYPE_4__ fmt; } ;
struct TYPE_13__ {TYPE_6__ format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;







 scalar_t__ FUNC_0 (int ) ;
 int VAR_9 ;

__attribute__((used)) static enum AVColorSpace FUNC_1(V4L2Buffer *VAR_10)
{
    enum v4l2_ycbcr_encoding VAR_11;
    enum v4l2_colorspace VAR_12;

    VAR_12 = FUNC_0(VAR_10->buf.type) ?
        VAR_10->context->format.fmt.pix_mp.colorspace :
        VAR_10->context->format.fmt.pix.colorspace;

    VAR_11 = FUNC_0(VAR_10->buf.type) ?
        VAR_10->context->format.fmt.pix_mp.ycbcr_enc:
        VAR_10->context->format.fmt.pix.ycbcr_enc;

    switch(VAR_12) {
    case 128: return VAR_5;
    case 131: return VAR_3;
    case 133: return VAR_4;
    case 134: return VAR_2;
    case 130: return VAR_6;
    case 129: return VAR_7;
    case 132:
        if (VAR_11 == VAR_9)
            return VAR_0;
        else
             return VAR_1;
    default:
        break;
    }

    return VAR_8;
}
