
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2,
                                      uint64_t VAR_3,
                                      int VAR_4, int VAR_5,
                                      int *VAR_6, enum AVCodecID *VAR_7)
{
    int VAR_8;

    if (FUNC_0(VAR_3)) {
        VAR_8 = 16;
    } else if (FUNC_1(VAR_3)) {
        VAR_4 >>= 8;
        VAR_5 >>= 4;
        VAR_8 = 20;
    } else {
        VAR_4 >>= 8;
        VAR_8 = 24;
    }

    if ((VAR_4 & 0x1F) != 0x1C) {
        if (VAR_2)
            FUNC_2(VAR_2, "Data type %#x in SMPTE 337M", VAR_4 & 0x1F);
        return VAR_0;
    }

    if (VAR_7)
        *VAR_7 = VAR_1;

    switch (VAR_5 / VAR_8) {
    case 3648:
        *VAR_6 = 1920;
        break;
    case 3644:
        *VAR_6 = 2002;
        break;
    case 3640:
        *VAR_6 = 2000;
        break;
    case 3040:
        *VAR_6 = 1601;
        break;
    default:
        if (VAR_2)
            FUNC_2(VAR_2, "Dolby E data size %d in SMPTE 337M", VAR_5);
        return VAR_0;
    }

    *VAR_6 -= 4;
    *VAR_6 *= ((VAR_8 + 7) >> 3) * 2;
    return 0;
}
