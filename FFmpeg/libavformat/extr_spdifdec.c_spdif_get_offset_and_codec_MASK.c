
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef enum IEC61937DataType { ____Placeholder_IEC61937DataType } IEC61937DataType ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char const*,int*,int *) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,char*,int) ;
 int** VAR_9 ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_10,
                                      enum IEC61937DataType VAR_11,
                                      const char *VAR_12, int *VAR_13,
                                      enum AVCodecID *VAR_14)
{
    uint32_t VAR_15;
    uint8_t VAR_16;
    int VAR_17;

    switch (VAR_11 & 0xff) {
    case 138:
        *VAR_13 = VAR_0 << 2;
        *VAR_14 = VAR_3;
        break;
    case 134:
        *VAR_13 = VAR_9[1][0];
        *VAR_14 = VAR_5;
        break;
    case 133:
        *VAR_13 = VAR_9[1][0];
        *VAR_14 = VAR_7;
        break;
    case 131:
        *VAR_13 = 4608;
        *VAR_14 = VAR_7;
        break;
    case 132:
        VAR_17 = FUNC_0(VAR_12, &VAR_15, &VAR_16);
        if (VAR_17 < 0) {
            if (VAR_10)
                FUNC_1(VAR_10, VAR_8, "Invalid AAC packet in IEC 61937\n");
            return VAR_17;
        }
        *VAR_13 = VAR_15 << 2;
        *VAR_14 = VAR_2;
        break;
    case 130:
        *VAR_13 = VAR_9[0][0];
        *VAR_14 = VAR_5;
        break;
    case 129:
        *VAR_13 = VAR_9[0][1];
        *VAR_14 = VAR_6;
        break;
    case 128:
        *VAR_13 = VAR_9[0][2];
        *VAR_14 = VAR_7;
        break;
    case 137:
        *VAR_13 = 2048;
        *VAR_14 = VAR_4;
        break;
    case 136:
        *VAR_13 = 4096;
        *VAR_14 = VAR_4;
        break;
    case 135:
        *VAR_13 = 8192;
        *VAR_14 = VAR_4;
        break;
    default:
        if (VAR_10) {
            FUNC_2(VAR_10, "Data type 0x%04x in IEC 61937",
                                  VAR_11);
        }
        return VAR_1;
    }
    return 0;
}
