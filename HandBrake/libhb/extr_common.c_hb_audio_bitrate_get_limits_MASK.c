
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int rate; } ;
struct TYPE_7__ {int rate; } ;
struct TYPE_6__ {int rate; } ;
struct TYPE_5__ {int rate; } ;
 TYPE_4__* VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

void FUNC_4(uint32_t VAR_4, int VAR_5, int VAR_6,
                                 int *VAR_7, int *VAR_8)
{






    if (VAR_5 == 0)
    {
        int VAR_9;
        FUNC_4(VAR_4, VAR_2->rate, VAR_6, VAR_7, &VAR_9);
        FUNC_4(VAR_4, VAR_3->rate, VAR_6, &VAR_9, VAR_8);
        return;
    }


    int VAR_10;
    VAR_5 = FUNC_0(VAR_5, VAR_4);
    VAR_10 = FUNC_1(VAR_5);


    int VAR_11, VAR_12;
    VAR_11 = FUNC_3(VAR_6);
    VAR_12 = FUNC_2(VAR_6) - VAR_11;

    switch (VAR_4)
    {

        case 132:
        case 131:
            *VAR_7 = *VAR_8 = -1;
            return;

        case 139:
            *VAR_7 = 224 * VAR_12 / 5;
            *VAR_8 = 640;
            break;

        case 133:
            *VAR_7 = 224 * VAR_12 / 5;
            *VAR_8 = 128 * VAR_5 / 1000;
            break;

        case 138:
        {
            switch (VAR_5)
            {
                case 8000:
                    *VAR_7 = VAR_12 * 8;
                    *VAR_8 = VAR_12 * 24;
                    break;

                case 11025:
                case 12000:
                    *VAR_7 = VAR_12 * 12;
                    *VAR_8 = VAR_12 * 32;
                    break;

                case 16000:
                    *VAR_7 = VAR_12 * 12;
                    *VAR_8 = VAR_12 * 48;
                    break;

                case 22050:
                case 24000:
                    *VAR_7 = VAR_12 * 16;
                    *VAR_8 = VAR_12 * 64;
                    break;

                case 32000:
                    *VAR_7 = VAR_12 * 24;
                    *VAR_8 = VAR_12 * 96;
                    break;

                case 44100:
                case 48000:
                default:
                    *VAR_7 = VAR_12 * 32;
                    *VAR_8 = VAR_12 * (160 + (96 * (VAR_12 == 1)));
                    break;
            } break;
        }

        case 137:
            *VAR_7 = VAR_12 * (12 + (4 * (VAR_5 >= 44100)));
            *VAR_8 = VAR_12 * 40;
            break;

        case 136:
            *VAR_7 = VAR_12 * VAR_5 * 2 / 3000;
            *VAR_8 = VAR_12 * VAR_5 * 6 / 1000;
            break;

        case 135:
            *VAR_7 = (VAR_12 * (12 + (4 * (VAR_5 >= 44100))));
            *VAR_8 = (VAR_12 - (VAR_12 > 2)) * (48 +
                                                     (16 *
                                                      (VAR_5 >= 22050)));
            break;

        case 134:
            *VAR_7 = ((VAR_12 + VAR_11) * 32);
            *VAR_8 = ((VAR_12 + VAR_11) *
                     ((192 + (64 * ((VAR_5 << VAR_10) >= 44100)))
                      >> VAR_10));
            break;

        case 130:
            *VAR_7 = 8 + (24 * (VAR_10 < 1));
            *VAR_8 = 64 + (96 * (VAR_10 < 2)) + (160 * (VAR_10 < 1));
            break;

        case 128:
            *VAR_7 = (VAR_12 + VAR_11) * (14 +
                                               (8 * (VAR_10 < 2)) +
                                               (6 * (VAR_10 < 1)));
            *VAR_8 = (VAR_12 + VAR_11) * (32 +
                                               ( 54 * (VAR_10 < 2)) +
                                               (104 * (VAR_10 < 1)) +
                                               ( 50 * (VAR_5 >= 44100)));
            break;

        case 129:
            *VAR_7 = (VAR_12 + VAR_11) * 6;
            *VAR_8 = (VAR_12 + VAR_11) * 256;
            break;



        default:
            *VAR_7 = VAR_0->rate;
            *VAR_8 = VAR_1 ->rate;
            break;
    }


    if (*VAR_8 < VAR_0->rate)
        *VAR_8 = VAR_0->rate;
    if (*VAR_8 > VAR_1 ->rate)
        *VAR_8 = VAR_1 ->rate;
}
