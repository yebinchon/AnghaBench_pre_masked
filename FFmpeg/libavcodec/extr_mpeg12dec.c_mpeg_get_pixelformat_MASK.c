
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_8__ {int flags; scalar_t__ codec_id; TYPE_2__* priv_data; } ;
struct TYPE_6__ {int chroma_format; } ;
struct TYPE_7__ {TYPE_1__ mpeg_enc_ctx; } ;
typedef TYPE_1__ MpegEncContext ;
typedef TYPE_2__ Mpeg1Context ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_3__*,int const*) ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;

__attribute__((used)) static enum AVPixelFormat FUNC_1(AVCodecContext *VAR_8)
{
    Mpeg1Context *VAR_9 = VAR_8->priv_data;
    MpegEncContext *VAR_10 = &VAR_9->mpeg_enc_ctx;
    const enum AVPixelFormat *VAR_11;

    if (VAR_3 && (VAR_8->flags & VAR_0))
        return VAR_2;

    if (VAR_10->chroma_format < 2)
        VAR_11 = VAR_8->codec_id == VAR_1 ?
                                VAR_6 :
                                VAR_7;
    else if (VAR_10->chroma_format == 2)
        VAR_11 = VAR_4;
    else
        VAR_11 = VAR_5;

    return FUNC_0(VAR_8, VAR_11);
}
