
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int codec_id; int extradata_size; int extradata; int codec_tag; } ;
typedef int AVIOContext ;
typedef int AVFormatContext ;
typedef TYPE_1__ AVCodecParameters ;


 int VAR_0 ;






 int VAR_1 ;

 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_5 ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int ,int,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int *,TYPE_1__*) ;
 int FUNC_9 (int *,TYPE_1__*) ;
 int FUNC_10 (int *,int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_6, AVIOContext *VAR_7,
                                         AVCodecParameters *VAR_8,
                                         AVIOContext *VAR_9)
{
    switch (VAR_8->codec_id) {
    case 129:
    case 130:
        return FUNC_10(VAR_6, VAR_9, VAR_8);
    case 133:
        return FUNC_8(VAR_6, VAR_9, VAR_8);
    case 128:
        return FUNC_9(VAR_9, VAR_8);
    case 132:
        return FUNC_5(VAR_9, VAR_8->extradata,
                                  VAR_8->extradata_size);
    case 131:
        FUNC_6(VAR_9, VAR_8->extradata,
                           VAR_8->extradata_size, 0);
        return 0;
    case 134:
        if (VAR_8->extradata_size)
            return FUNC_4(VAR_9, VAR_8->extradata,
                                      VAR_8->extradata_size);
        else
            FUNC_7(VAR_7, 4 + 3);
        break;
    case 135:
        if (VAR_8->extradata_size < 36) {
            FUNC_0(VAR_6, VAR_3,
                   "Invalid extradata found, ALAC expects a 36-byte "
                   "QuickTime atom.");
            return VAR_0;
        } else
            FUNC_2(VAR_9, VAR_8->extradata + 12,
                       VAR_8->extradata_size - 12);
        break;
    case 136:
        if (VAR_8->extradata_size)
            FUNC_2(VAR_9, VAR_8->extradata, VAR_8->extradata_size);
        else
            FUNC_7(VAR_7, VAR_4 + 2 + 4);
        break;
    default:
        if (VAR_8->codec_id == VAR_1 &&
            FUNC_3(VAR_5, VAR_8->codec_tag) == VAR_1) {
            FUNC_1(VAR_9, VAR_8->codec_tag);
        } else if (VAR_8->extradata_size && VAR_8->codec_id != VAR_2)
            FUNC_2(VAR_9, VAR_8->extradata, VAR_8->extradata_size);
    }

    return 0;
}
