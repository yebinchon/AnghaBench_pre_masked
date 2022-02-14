
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_8__ {int bits_per_raw_sample; int pix_fmt; int flags; scalar_t__ color_range; TYPE_1__* codec; scalar_t__ priv_data; } ;
struct TYPE_7__ {int studio_profile; } ;
struct TYPE_6__ {scalar_t__ id; int pix_fmts; } ;
typedef TYPE_2__ MpegEncContext ;
typedef TYPE_3__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static enum AVPixelFormat FUNC_2(AVCodecContext *VAR_7)
{

    if (VAR_7->bits_per_raw_sample > 8) {
        FUNC_0(((MpegEncContext *)VAR_7->priv_data)->studio_profile);
        return VAR_7->pix_fmt;
    }

    if (VAR_7->codec->id == VAR_3)
        return VAR_5;

    if (VAR_6 && (VAR_7->flags & VAR_2)) {
        if (VAR_7->color_range == VAR_1)
            VAR_7->color_range = VAR_0;
        return VAR_4;
    }

    return VAR_7->pix_fmt = FUNC_1(VAR_7, VAR_7->codec->pix_fmts);
}
