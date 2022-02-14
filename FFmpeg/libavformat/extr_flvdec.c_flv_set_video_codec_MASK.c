
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_12__ {int codec_id; int extradata_size; int codec_tag; int * extradata; } ;
struct TYPE_11__ {int pb; } ;
struct TYPE_10__ {TYPE_1__* internal; int need_parsing; TYPE_4__* codecpar; } ;
struct TYPE_9__ {int need_context_update; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecParameters ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_3__*,char*,...) ;
 int FUNC_3 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_10, AVStream *VAR_11,
                               int VAR_12, int VAR_13)
{
    int VAR_14 = 0;
    AVCodecParameters *VAR_15 = VAR_11->codecpar;
    enum AVCodecID VAR_16 = VAR_11->codecpar->codec_id;
    switch (VAR_12) {
    case 135:
        VAR_15->codec_id = VAR_4;
        break;
    case 132:
        VAR_15->codec_id = VAR_5;
        break;
    case 131:
        VAR_15->codec_id = VAR_2;
        break;
    case 130:
        VAR_15->codec_id = VAR_3;
        break;
    case 129:
        VAR_15->codec_id = VAR_9;
    case 128:
        if (VAR_12 == 128)
            VAR_15->codec_id = VAR_8;
        if (VAR_13) {
            if (VAR_15->extradata_size != 1) {
                FUNC_3(VAR_15, 1);
            }
            if (VAR_15->extradata)
                VAR_15->extradata[0] = FUNC_0(VAR_10->pb);
            else
                FUNC_1(VAR_10->pb, 1);
        }
        VAR_14 = 1;
        break;
    case 134:
        VAR_15->codec_id = VAR_6;
        VAR_11->need_parsing = VAR_1;
        VAR_14 = 3;
        break;
    case 133:
        VAR_15->codec_id = VAR_7;
        VAR_14 = 3;
        break;
    default:
        FUNC_2(VAR_10, "Video codec (%x)", VAR_12);
        VAR_15->codec_tag = VAR_12;
    }

    if (!VAR_11->internal->need_context_update && VAR_15->codec_id != VAR_16) {
        FUNC_2(VAR_10, "Changing the codec id midstream");
        return VAR_0;
    }

    return VAR_14;
}
