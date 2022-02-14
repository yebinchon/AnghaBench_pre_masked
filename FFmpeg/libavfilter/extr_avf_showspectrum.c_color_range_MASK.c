
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; float nb_display_channels; int const color_mode; float rotation; float saturation; } ;
typedef TYPE_1__ ShowSpectrumContext ;
 float VAR_0 ;
 float VAR_1 ;






 int FUNC_0 (int ) ;
 float FUNC_1 (float) ;
 float FUNC_2 (float) ;

__attribute__((used)) static void FUNC_3(ShowSpectrumContext *VAR_2, int VAR_3,
                        float *VAR_4, float *VAR_5, float *VAR_6)
{
    switch (VAR_2->mode) {
    case 142:

        *VAR_4 = 256.0f / VAR_2->nb_display_channels;
        switch (VAR_2->color_mode) {
        case 131:
        case 134:
        case 133:
        case 139:
        case 140:
        case 138:
        case 141:
        case 137:
        case 128:
        case 132:
        case 143:
        case 129:
        case 135:
        case 136:
            *VAR_5 = *VAR_4;
            *VAR_6 = *VAR_4;
            break;
        case 144:


            *VAR_5 = *VAR_4 * VAR_0;
            *VAR_6 = *VAR_4 * VAR_0;
            break;
        default:
            FUNC_0(0);
        }
        break;
    case 130:

        *VAR_4 = 256.0f;
        *VAR_5 = 256.0f;
        *VAR_6 = 256.0f;
        break;
    default:
        FUNC_0(0);
    }

    if (VAR_2->color_mode == 144) {
        if (VAR_2->nb_display_channels > 1) {
            *VAR_5 *= 0.5f * FUNC_2((2 * VAR_0 * VAR_3) / VAR_2->nb_display_channels + VAR_0 * VAR_2->rotation);
            *VAR_6 *= 0.5f * FUNC_1((2 * VAR_0 * VAR_3) / VAR_2->nb_display_channels + VAR_0 * VAR_2->rotation);
        } else {
            *VAR_5 *= 0.5f * FUNC_2(VAR_0 * VAR_2->rotation);
            *VAR_6 *= 0.5f * FUNC_1(VAR_0 * VAR_2->rotation + VAR_1);
        }
    } else {
        *VAR_5 += *VAR_5 * FUNC_2(VAR_0 * VAR_2->rotation);
        *VAR_6 += *VAR_6 * FUNC_1(VAR_0 * VAR_2->rotation + VAR_1);
    }

    *VAR_5 *= VAR_2->saturation;
    *VAR_6 *= VAR_2->saturation;
}
