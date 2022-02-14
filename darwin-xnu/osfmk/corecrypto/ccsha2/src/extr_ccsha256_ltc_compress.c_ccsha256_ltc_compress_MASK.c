
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int ccdigest_state_t ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 scalar_t__* FUNC_3 (int ) ;
 int FUNC_4 (int) ;

void FUNC_5(ccdigest_state_t VAR_1, size_t VAR_2, const void *VAR_3)
{
    uint32_t VAR_4[64], VAR_5, VAR_6;
    uint32_t VAR_7,VAR_8,VAR_9,VAR_10,VAR_11,VAR_12,VAR_13,VAR_14;
    int VAR_15;
    uint32_t *VAR_16 = FUNC_3(VAR_1);



    const uint32_t *VAR_17 = VAR_3;


    while(VAR_2--) {


        FUNC_4(0); FUNC_4(1); FUNC_4(2); FUNC_4(3); FUNC_4(4); FUNC_4(5); FUNC_4(6); FUNC_4(7);
        FUNC_4(8); FUNC_4(9); FUNC_4(10);FUNC_4(11);FUNC_4(12);FUNC_4(13);FUNC_4(14);FUNC_4(15);


        for (VAR_15 = 16; VAR_15 < 64; VAR_15++) {
            VAR_4[VAR_15] = FUNC_1(VAR_4[VAR_15 - 2]) + VAR_4[VAR_15 - 7] + FUNC_0(VAR_4[VAR_15 - 15]) + VAR_4[VAR_15 - 16];
        }


        VAR_7= VAR_16[0];
        VAR_8= VAR_16[1];
        VAR_9= VAR_16[2];
        VAR_10= VAR_16[3];
        VAR_11= VAR_16[4];
        VAR_12= VAR_16[5];
        VAR_13= VAR_16[6];
        VAR_14= VAR_16[7];


        for (VAR_15 = 0; VAR_15 < 64; VAR_15 += 8) {
            FUNC_2(VAR_7,VAR_8,VAR_9,VAR_10,VAR_11,VAR_12,VAR_13,VAR_14,VAR_15+0);
            FUNC_2(VAR_14,VAR_7,VAR_8,VAR_9,VAR_10,VAR_11,VAR_12,VAR_13,VAR_15+1);
            FUNC_2(VAR_13,VAR_14,VAR_7,VAR_8,VAR_9,VAR_10,VAR_11,VAR_12,VAR_15+2);
            FUNC_2(VAR_12,VAR_13,VAR_14,VAR_7,VAR_8,VAR_9,VAR_10,VAR_11,VAR_15+3);
            FUNC_2(VAR_11,VAR_12,VAR_13,VAR_14,VAR_7,VAR_8,VAR_9,VAR_10,VAR_15+4);
            FUNC_2(VAR_10,VAR_11,VAR_12,VAR_13,VAR_14,VAR_7,VAR_8,VAR_9,VAR_15+5);
            FUNC_2(VAR_9,VAR_10,VAR_11,VAR_12,VAR_13,VAR_14,VAR_7,VAR_8,VAR_15+6);
            FUNC_2(VAR_8,VAR_9,VAR_10,VAR_11,VAR_12,VAR_13,VAR_14,VAR_7,VAR_15+7);
        }


        VAR_16[0] += VAR_7;
        VAR_16[1] += VAR_8;
        VAR_16[2] += VAR_9;
        VAR_16[3] += VAR_10;
        VAR_16[4] += VAR_11;
        VAR_16[5] += VAR_12;
        VAR_16[6] += VAR_13;
        VAR_16[7] += VAR_14;

        VAR_17+=VAR_0/sizeof(VAR_17[0]);
    }
}
