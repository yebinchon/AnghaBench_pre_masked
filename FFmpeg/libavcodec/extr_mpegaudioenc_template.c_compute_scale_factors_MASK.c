
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* scale_factor_table; int* scale_diff_table; } ;
typedef TYPE_1__ MpegAudioContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*,int,unsigned char,unsigned char,unsigned char,int,...) ;

__attribute__((used)) static void FUNC_4(MpegAudioContext *VAR_1,
                                  unsigned char VAR_2[VAR_0],
                                  unsigned char VAR_3[VAR_0][3],
                                  int VAR_4[3][12][VAR_0],
                                  int VAR_5)
{
    int *VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    int VAR_14, VAR_15, VAR_16;
    unsigned char *VAR_17 = &VAR_3[0][0];

    for(VAR_11=0;VAR_11<VAR_5;VAR_11++) {
        for(VAR_10=0;VAR_10<3;VAR_10++) {

            VAR_6 = &VAR_4[VAR_10][0][VAR_11];
            VAR_7 = FUNC_0(*VAR_6);
            for(VAR_12=1;VAR_12<12;VAR_12++) {
                VAR_6 += VAR_0;
                VAR_8 = FUNC_0(*VAR_6);
                if (VAR_8 > VAR_7)
                    VAR_7 = VAR_8;
            }

            if (VAR_7 > 1) {
                VAR_9 = FUNC_2(VAR_7);


                VAR_14 = (21 - VAR_9) * 3 - 3;
                if (VAR_14 >= 0) {
                    while (VAR_7 <= VAR_1->scale_factor_table[VAR_14+1])
                        VAR_14++;
                } else {
                    VAR_14 = 0;
                }
            } else {
                VAR_14 = 62;
            }

            FUNC_3(((void*)0), "%2d:%d in=%x %x %d\n",
                    VAR_11, VAR_10, VAR_7, VAR_1->scale_factor_table[VAR_14], VAR_14);

            FUNC_1(VAR_14 >=0 && VAR_14 <= 63);
            VAR_17[VAR_10] = VAR_14;
        }



        VAR_15 = VAR_1->scale_diff_table[VAR_17[0] - VAR_17[1] + 64];
        VAR_16 = VAR_1->scale_diff_table[VAR_17[1] - VAR_17[2] + 64];


        switch(VAR_15 * 5 + VAR_16) {
        case 0*5+0:
        case 0*5+4:
        case 3*5+4:
        case 4*5+0:
        case 4*5+4:
            VAR_13 = 0;
            break;
        case 0*5+1:
        case 0*5+2:
        case 4*5+1:
        case 4*5+2:
            VAR_13 = 3;
            VAR_17[2] = VAR_17[1];
            break;
        case 0*5+3:
        case 4*5+3:
            VAR_13 = 3;
            VAR_17[1] = VAR_17[2];
            break;
        case 1*5+0:
        case 1*5+4:
        case 2*5+4:
            VAR_13 = 1;
            VAR_17[1] = VAR_17[0];
            break;
        case 1*5+1:
        case 1*5+2:
        case 2*5+0:
        case 2*5+1:
        case 2*5+2:
            VAR_13 = 2;
            VAR_17[1] = VAR_17[2] = VAR_17[0];
            break;
        case 2*5+3:
        case 3*5+3:
            VAR_13 = 2;
            VAR_17[0] = VAR_17[1] = VAR_17[2];
            break;
        case 3*5+0:
        case 3*5+1:
        case 3*5+2:
            VAR_13 = 2;
            VAR_17[0] = VAR_17[2] = VAR_17[1];
            break;
        case 1*5+3:
            VAR_13 = 2;
            if (VAR_17[0] > VAR_17[2])
              VAR_17[0] = VAR_17[2];
            VAR_17[1] = VAR_17[2] = VAR_17[0];
            break;
        default:
            FUNC_1(0);
            VAR_13 = 0;
        }

        FUNC_3(((void*)0), "%d: %2d %2d %2d %d %d -> %d\n", VAR_11,
                VAR_17[0], VAR_17[1], VAR_17[2], VAR_15, VAR_16, VAR_13);
        VAR_2[VAR_11] = VAR_13;
        VAR_17 += 3;
    }
}
