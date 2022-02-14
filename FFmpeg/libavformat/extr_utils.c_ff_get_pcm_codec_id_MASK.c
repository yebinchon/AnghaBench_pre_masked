
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

enum AVCodecID FUNC_0(int VAR_21, int VAR_22, int VAR_23, int VAR_24)
{
    if (VAR_21 <= 0 || VAR_21 > 64)
        return VAR_0;

    if (VAR_22) {
        switch (VAR_21) {
        case 32:
            return VAR_23 ? VAR_1 : VAR_2;
        case 64:
            return VAR_23 ? VAR_3 : VAR_4;
        default:
            return VAR_0;
        }
    } else {
        VAR_21 += 7;
        VAR_21 >>= 3;
        if (VAR_24 & (1 << (VAR_21 - 1))) {
            switch (VAR_21) {
            case 1:
                return VAR_13;
            case 2:
                return VAR_23 ? VAR_5 : VAR_6;
            case 3:
                return VAR_23 ? VAR_7 : VAR_8;
            case 4:
                return VAR_23 ? VAR_9 : VAR_10;
            case 8:
                return VAR_23 ? VAR_11 : VAR_12;
            default:
                return VAR_0;
            }
        } else {
            switch (VAR_21) {
            case 1:
                return VAR_20;
            case 2:
                return VAR_23 ? VAR_14 : VAR_15;
            case 3:
                return VAR_23 ? VAR_16 : VAR_17;
            case 4:
                return VAR_23 ? VAR_18 : VAR_19;
            default:
                return VAR_0;
            }
        }
    }
}
