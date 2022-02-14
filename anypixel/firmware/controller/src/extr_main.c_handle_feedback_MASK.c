
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int type; int* payload; } ;
struct TYPE_4__ {char* a; TYPE_1__ s; } ;
typedef TYPE_2__ ledPacket_type ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;




 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int) ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int** VAR_6 ;
 int FUNC_4 (int,int,int) ;
 size_t* VAR_7 ;
 int* VAR_8 ;
 int** VAR_9 ;
 int* VAR_10 ;
 int* VAR_11 ;
 int * VAR_12 ;

void FUNC_5(int VAR_13, int VAR_14) {
    int VAR_15, VAR_16, VAR_17;
    int VAR_18, VAR_19;
    int VAR_20, VAR_21;
    ledPacket_type VAR_22;
    FUNC_1(1);
    VAR_15 = FUNC_2(&VAR_12[VAR_13]);

    switch(VAR_14) {
        case 130:
            VAR_18 = 0; VAR_19 = 0; break;
        case 131:
            VAR_18 = 0; VAR_19 = 7; break;
        case 128:
            VAR_18 = 7; VAR_19 = 0; break;
        case 129:
            VAR_18 = 7; VAR_19 = 7; break;
    }

    if(VAR_15 == VAR_0) {
        FUNC_3(&VAR_12[VAR_13], VAR_22.a, VAR_15);
        VAR_21 = 0;

        if(VAR_22.s.type >= 0x20)
            return;

        for(VAR_16 = 0; VAR_16 < 7; VAR_16++) {
            for(VAR_17 = 0; VAR_17 < 7; VAR_17++) {

                FUNC_4(7*VAR_16+VAR_17, VAR_22.s.payload[ VAR_7[7*VAR_16+VAR_17] ], VAR_14);

                VAR_20 = VAR_22.s.payload[ VAR_7[7*VAR_16+VAR_17] + 10 ];
                VAR_10[14*(VAR_16+VAR_18)+VAR_17+VAR_19] = VAR_20;
                VAR_21 += VAR_20;
            }
        }
        VAR_21 /= 49;
        VAR_8[VAR_14] = VAR_21;


        if(VAR_4[VAR_14] == 1)
            VAR_1[VAR_14] = ((VAR_5[VAR_14]*(VAR_21-80)) >> 8) + VAR_2[VAR_14];
            if(VAR_1[VAR_14] < VAR_3[VAR_14])
                VAR_1[VAR_14] = VAR_3[VAR_14];


        uint32_t VAR_23 = 0;
        for(VAR_15 = 0; VAR_15 < 4; VAR_15++) {
            VAR_23 <<= 8;
            VAR_23 |= VAR_22.s.payload[48*3+20+VAR_15];
        }
        if(VAR_23 == 65535)
            VAR_23 = 0;
        else
            VAR_23 = 360000/VAR_23;

        if(VAR_23 == 0 || (VAR_23 > 7 && VAR_23 < 250)) {
            VAR_6[VAR_14][VAR_6[VAR_14][8]&0x07] = (uint8_t)VAR_23;
            VAR_6[VAR_14][8]++;
        }


        for(VAR_15 = 0; VAR_15 < 6; VAR_15++)
            VAR_9[VAR_14][VAR_15] = VAR_22.s.payload[20+VAR_15];


        VAR_11[VAR_14] = 0;
        for(VAR_15 = 0; VAR_15 < 4; VAR_15++) {
            VAR_11[VAR_14] <<= 8;
            VAR_11[VAR_14] |= VAR_22.s.payload[48*3+32+VAR_15];
        }
    } else {
        if(VAR_15 > 0) {
            char VAR_24[512];
            if(VAR_15 > 512)
                VAR_15 = 512;
            FUNC_3(&VAR_12[VAR_13], VAR_24, VAR_15);
        }
    }
    FUNC_0(1);
}
