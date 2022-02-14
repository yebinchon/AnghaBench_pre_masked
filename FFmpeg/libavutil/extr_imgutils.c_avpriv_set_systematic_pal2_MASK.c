
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;


 int FUNC_0 (int ) ;





 int VAR_0 ;

int FUNC_1(uint32_t VAR_1[256], enum AVPixelFormat VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < 256; VAR_3++) {
        int VAR_4, VAR_5, VAR_6;

        switch (VAR_2) {
        case 128:
            VAR_4 = (VAR_3>>5 )*36;
            VAR_5 = ((VAR_3>>2)&7)*36;
            VAR_6 = (VAR_3&3 )*85;
            break;
        case 131:
            VAR_6 = (VAR_3>>6 )*85;
            VAR_5 = ((VAR_3>>3)&7)*36;
            VAR_4 = (VAR_3&7 )*36;
            break;
        case 129:
            VAR_4 = (VAR_3>>3 )*255;
            VAR_5 = ((VAR_3>>1)&3)*85;
            VAR_6 = (VAR_3&1 )*255;
            break;
        case 132:
            VAR_6 = (VAR_3>>3 )*255;
            VAR_5 = ((VAR_3>>1)&3)*85;
            VAR_4 = (VAR_3&1 )*255;
            break;
        case 130:
            VAR_4 = VAR_6 = VAR_5 = VAR_3;
            break;
        default:
            return FUNC_0(VAR_0);
        }
        VAR_1[VAR_3] = VAR_6 + (VAR_5 << 8) + (VAR_4 << 16) + (0xFFU << 24);
    }

    return 0;
}
