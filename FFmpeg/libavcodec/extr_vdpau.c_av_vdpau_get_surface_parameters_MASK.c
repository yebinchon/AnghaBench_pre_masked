
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int VdpChromaType ;
struct TYPE_3__ {int coded_width; int coded_height; int sw_pix_fmt; } ;
typedef TYPE_1__ AVCodecContext ;


 int FUNC_0 (int ) ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_1(AVCodecContext *VAR_4,
                                    VdpChromaType *VAR_5,
                                    uint32_t *VAR_6, uint32_t *VAR_7)
{
    VdpChromaType VAR_8;
    uint32_t VAR_9 = VAR_4->coded_width;
    uint32_t VAR_10 = VAR_4->coded_height;


    switch (VAR_4->sw_pix_fmt) {
    case 133:
    case 130:
        VAR_8 = VAR_1;
        VAR_9 = (VAR_9 + 1) & ~1;
        VAR_10 = (VAR_10 + 3) & ~3;
        break;
    case 132:
    case 129:
        VAR_8 = VAR_2;
        VAR_9 = (VAR_9 + 1) & ~1;
        VAR_10 = (VAR_10 + 1) & ~1;
        break;
    case 131:
    case 128:
        VAR_8 = VAR_3;
        VAR_10 = (VAR_10 + 1) & ~1;
        break;
    default:
        return FUNC_0(VAR_0);
    }

    if (VAR_5)
        *VAR_5 = VAR_8;
    if (VAR_6)
        *VAR_6 = VAR_9;
    if (VAR_7)
        *VAR_7 = VAR_10;
    return 0;
}
