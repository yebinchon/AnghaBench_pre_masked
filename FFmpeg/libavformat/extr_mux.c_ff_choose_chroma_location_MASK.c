
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum AVChromaLocation { ____Placeholder_AVChromaLocation } AVChromaLocation ;
struct TYPE_8__ {scalar_t__ chroma_location; scalar_t__ field_order; int codec_id; int format; } ;
struct TYPE_7__ {int log2_chroma_h; int log2_chroma_w; } ;
struct TYPE_6__ {TYPE_3__* codecpar; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef int AVFormatContext ;
typedef TYPE_3__ AVCodecParameters ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;



 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* FUNC_0 (int ) ;

enum AVChromaLocation FUNC_1(AVFormatContext *VAR_6, AVStream *VAR_7)
{
    AVCodecParameters *VAR_8 = VAR_7->codecpar;
    const AVPixFmtDescriptor *VAR_9 = FUNC_0(VAR_8->format);

    if (VAR_8->chroma_location != VAR_3)
        return VAR_8->chroma_location;

    if (VAR_9) {
        if (VAR_9->log2_chroma_h == 0) {
            return VAR_2;
        } else if (VAR_9->log2_chroma_w == 1 && VAR_9->log2_chroma_h == 1) {
            if (VAR_8->field_order == VAR_5 || VAR_8->field_order == VAR_4) {
                switch (VAR_8->codec_id) {
                case 130:
                case 129: return VAR_0;
                }
            }
            if (VAR_8->field_order == VAR_5 || VAR_8->field_order != VAR_4) {
                switch (VAR_8->codec_id) {
                case 128: return VAR_1;
                }
            }
        }
    }

    return VAR_3;

}
