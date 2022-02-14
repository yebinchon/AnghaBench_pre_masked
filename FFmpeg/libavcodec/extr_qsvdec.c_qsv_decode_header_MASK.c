
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int CodecId; } ;
struct TYPE_18__ {TYPE_1__ mfx; } ;
typedef TYPE_2__ mfxVideoParam ;
struct TYPE_19__ {int DataFlag; int TimeStamp; scalar_t__ DataLength; scalar_t__ MaxLength; int Data; int member_0; } ;
typedef TYPE_3__ mfxBitstream ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_22__ {scalar_t__ field_order; int codec_id; } ;
struct TYPE_21__ {int pts; scalar_t__ size; int data; } ;
struct TYPE_20__ {int session; } ;
typedef TYPE_4__ QSVContext ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_3__*,TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_6__*,int,char*) ;
 int FUNC_4 (TYPE_6__*,TYPE_4__*,int,TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_5, QSVContext *VAR_6, AVPacket *VAR_7, enum AVPixelFormat VAR_8, mfxVideoParam *VAR_9)
{
    int VAR_10;

    mfxBitstream VAR_11 = { 0 };

    if (VAR_7->size) {
        VAR_11.Data = VAR_7->data;
        VAR_11.DataLength = VAR_7->size;
        VAR_11.MaxLength = VAR_11.DataLength;
        VAR_11.TimeStamp = VAR_7->pts;
        if (VAR_5->field_order == VAR_1)
            VAR_11.DataFlag |= VAR_3;
    } else
        return VAR_0;


    if(!VAR_6->session) {
        VAR_10 = FUNC_4(VAR_5, VAR_6, VAR_8, VAR_9);
        if (VAR_10 < 0)
            return VAR_10;
    }

    VAR_10 = FUNC_2(VAR_5->codec_id);
    if (VAR_10 < 0)
        return VAR_10;

    VAR_9->mfx.CodecId = VAR_10;
    VAR_10 = FUNC_1(VAR_6->session, &VAR_11, VAR_9);
    if (VAR_4 == VAR_10) {
       return FUNC_0(VAR_2);
    }
    if (VAR_10 < 0)
        return FUNC_3(VAR_5, VAR_10,
                "Error decoding stream header");

    return 0;
}
