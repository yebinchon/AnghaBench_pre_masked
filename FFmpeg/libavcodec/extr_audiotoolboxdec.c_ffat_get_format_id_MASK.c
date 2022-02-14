
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
typedef int UInt32 ;
 int FUNC_0 (int) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static UInt32 FUNC_1(enum AVCodecID VAR_15, int VAR_16)
{
    switch (VAR_15) {
    case 142:
        return VAR_6;
    case 141:
        return VAR_0;
    case 140:
        return VAR_3;
    case 139:
        return VAR_4;
    case 138:
        return VAR_2;
    case 137:
        return VAR_5;
    case 136:
        return VAR_10;
    case 135:
        return VAR_14;
    case 134:
        return VAR_7;
    case 133:
        return VAR_8;
    case 132:
        return VAR_9;
    case 131:
        return VAR_1;
    case 130:
        return VAR_13;
    case 128:
        return VAR_11;
    case 129:
        return VAR_12;
    default:
        FUNC_0(!"Invalid codec ID!");
        return 0;
    }
}
