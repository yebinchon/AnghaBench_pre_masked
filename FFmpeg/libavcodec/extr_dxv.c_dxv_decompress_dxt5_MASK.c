
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int tex_size; scalar_t__ tex_data; int gbc; } ;
typedef int GetByteContext ;
typedef TYPE_1__ DXVContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_1)
{
    DXVContext *VAR_2 = VAR_1->priv_data;
    GetByteContext *VAR_3 = &VAR_2->gbc;
    uint32_t VAR_4, VAR_5;
    int VAR_6, VAR_7, VAR_8 = 0;
    int VAR_9 = 4;
    int VAR_10 = 0;
    int VAR_11, VAR_12;


    FUNC_1(VAR_2->tex_data + 0, FUNC_6(VAR_3));
    FUNC_1(VAR_2->tex_data + 4, FUNC_6(VAR_3));
    FUNC_1(VAR_2->tex_data + 8, FUNC_6(VAR_3));
    FUNC_1(VAR_2->tex_data + 12, FUNC_6(VAR_3));


    while (VAR_9 + 2 <= VAR_2->tex_size / 4) {
        if (VAR_10) {
            VAR_10--;

            VAR_7 = FUNC_0(VAR_2->tex_data + 4 * (VAR_9 - 4));
            FUNC_1(VAR_2->tex_data + 4 * VAR_9, VAR_7);
            VAR_9++;
            VAR_7 = FUNC_0(VAR_2->tex_data + 4 * (VAR_9 - 4));
            FUNC_1(VAR_2->tex_data + 4 * VAR_9, VAR_7);
            VAR_9++;
        } else {
            if (FUNC_4(VAR_3) < 1)
                return VAR_0;
            if (VAR_8 == 0) {
                VAR_4 = FUNC_6(VAR_3);
                VAR_8 = 16;
            }
            VAR_5 = VAR_4 & 0x3;
            VAR_4 >>= 2;
            VAR_8--;

            switch (VAR_5) {
            case 0:

                VAR_12 = FUNC_3(VAR_3) + 1;
                if (VAR_12 == 256) {
                    do {
                        VAR_11 = FUNC_5(VAR_3);
                        VAR_12 += VAR_11;
                    } while (VAR_11 == 0xFFFF);
                }
                while (VAR_12 && VAR_9 + 4 <= VAR_2->tex_size / 4) {
                    VAR_7 = FUNC_0(VAR_2->tex_data + 4 * (VAR_9 - 4));
                    FUNC_1(VAR_2->tex_data + 4 * VAR_9, VAR_7);
                    VAR_9++;

                    VAR_7 = FUNC_0(VAR_2->tex_data + 4 * (VAR_9 - 4));
                    FUNC_1(VAR_2->tex_data + 4 * VAR_9, VAR_7);
                    VAR_9++;

                    VAR_7 = FUNC_0(VAR_2->tex_data + 4 * (VAR_9 - 4));
                    FUNC_1(VAR_2->tex_data + 4 * VAR_9, VAR_7);
                    VAR_9++;

                    VAR_7 = FUNC_0(VAR_2->tex_data + 4 * (VAR_9 - 4));
                    FUNC_1(VAR_2->tex_data + 4 * VAR_9, VAR_7);
                    VAR_9++;

                    VAR_12--;
                }


                continue;
                break;
            case 1:

                VAR_10 = FUNC_3(VAR_3);
                if (VAR_10 == 255) {
                    do {
                        VAR_11 = FUNC_5(VAR_3);
                        VAR_10 += VAR_11;
                    } while (VAR_11 == 0xFFFF);
                }


                VAR_7 = FUNC_0(VAR_2->tex_data + 4 * (VAR_9 - 4));
                FUNC_1(VAR_2->tex_data + 4 * VAR_9, VAR_7);
                VAR_9++;

                VAR_7 = FUNC_0(VAR_2->tex_data + 4 * (VAR_9 - 4));
                FUNC_1(VAR_2->tex_data + 4 * VAR_9, VAR_7);
                VAR_9++;
                break;
            case 2:

                VAR_6 = 8 + FUNC_5(VAR_3);
                if (VAR_6 > VAR_9 || (unsigned int)(VAR_9 - VAR_6) + 2 > VAR_2->tex_size / 4)
                    return VAR_0;
                VAR_7 = FUNC_0(VAR_2->tex_data + 4 * (VAR_9 - VAR_6));
                FUNC_1(VAR_2->tex_data + 4 * VAR_9, VAR_7);
                VAR_9++;

                VAR_7 = FUNC_0(VAR_2->tex_data + 4 * (VAR_9 - VAR_6));
                FUNC_1(VAR_2->tex_data + 4 * VAR_9, VAR_7);
                VAR_9++;
                break;
            case 3:

                VAR_7 = FUNC_6(VAR_3);
                FUNC_1(VAR_2->tex_data + 4 * VAR_9, VAR_7);
                VAR_9++;

                VAR_7 = FUNC_6(VAR_3);
                FUNC_1(VAR_2->tex_data + 4 * VAR_9, VAR_7);
                VAR_9++;
                break;
            }
        }

        FUNC_2(4);
        if (VAR_9 + 2 > VAR_2->tex_size / 4)
            return VAR_0;


        if (VAR_5) {
            if (VAR_6 > VAR_9 || (unsigned int)(VAR_9 - VAR_6) + 2 > VAR_2->tex_size / 4)
                return VAR_0;
            VAR_7 = FUNC_0(VAR_2->tex_data + 4 * (VAR_9 - VAR_6));
            FUNC_1(VAR_2->tex_data + 4 * VAR_9, VAR_7);
            VAR_9++;

            VAR_7 = FUNC_0(VAR_2->tex_data + 4 * (VAR_9 - VAR_6));
            FUNC_1(VAR_2->tex_data + 4 * VAR_9, VAR_7);
            VAR_9++;
        } else {
            FUNC_2(4);

            if (VAR_5 && (VAR_6 > VAR_9 || (unsigned int)(VAR_9 - VAR_6) + 2 > VAR_2->tex_size / 4))
                return VAR_0;
            if (VAR_5)
                VAR_7 = FUNC_0(VAR_2->tex_data + 4 * (VAR_9 - VAR_6));
            else
                VAR_7 = FUNC_6(VAR_3);
            FUNC_1(VAR_2->tex_data + 4 * VAR_9, VAR_7);
            VAR_9++;

            FUNC_2(4);

            if (VAR_5)
                VAR_7 = FUNC_0(VAR_2->tex_data + 4 * (VAR_9 - VAR_6));
            else
                VAR_7 = FUNC_6(VAR_3);
            FUNC_1(VAR_2->tex_data + 4 * VAR_9, VAR_7);
            VAR_9++;
        }
    }

    return 0;
}
