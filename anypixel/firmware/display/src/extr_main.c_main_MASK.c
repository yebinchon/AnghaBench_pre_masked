
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int ledPacket_type ;
struct TYPE_7__ {int* payload; int type; int param1; } ;
struct TYPE_11__ {int* ua; TYPE_1__ s; int * a; } ;
struct TYPE_8__ {int* payload; scalar_t__ type; } ;
struct TYPE_10__ {TYPE_2__ s; int * a; } ;
struct TYPE_9__ {int HCLK_Frequency; } ;
typedef TYPE_3__ RCC_ClocksTypeDef ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_3__*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int ) ;
 int VAR_8 ;
 int FUNC_11 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int*) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (int,int) ;
 int FUNC_17 (int ,int*) ;
 int FUNC_18 (int,void*) ;
 int FUNC_19 (int*) ;
 int FUNC_20 (int*) ;
 int FUNC_21 (int,int) ;
 int FUNC_22 (int *) ;
 int VAR_12 ;
 int FUNC_23 (int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_24 (int ,int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ,int ) ;
 int * VAR_16 ;
 int VAR_17 ;
 int FUNC_27 () ;
 int FUNC_28 (int*) ;
 void* VAR_18 ;
 int FUNC_29 (void*) ;
 int FUNC_30 () ;
 TYPE_5__ VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 TYPE_4__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 void* FUNC_31 (int*,int) ;
 int * VAR_25 ;
 int FUNC_32 (int) ;

int FUNC_33(void) {
    int VAR_26;
    uint8_t VAR_27;
    int VAR_28 = 0;
    int VAR_29 = 0;
    int VAR_30 = 0;

    RCC_ClocksTypeDef VAR_31;

    VAR_4 = 0;



    FUNC_10(VAR_8);


    VAR_17 = FUNC_4();
    if(VAR_17 == 0) {
        FUNC_27();
        FUNC_28(VAR_5);
    }


    FUNC_32(100000);
    FUNC_0();


    FUNC_9(&VAR_31);
    FUNC_11(VAR_31.HCLK_Frequency / (1000/VAR_7*VAR_10));


    FUNC_7 (VAR_9, 0);

    if(VAR_17 == 3)
        FUNC_30();

    FUNC_6(1000);

    FUNC_5();

    FUNC_2();

    FUNC_12();


    for(VAR_26 = 0; VAR_26 < 32; VAR_26 ++) {
        FUNC_21(VAR_26, 500);
        if(VAR_26 > 0)
            FUNC_21(VAR_26-1, 0);
        FUNC_14();
        FUNC_6(30);
    }
    FUNC_21(31, 0);
    FUNC_14();
    FUNC_6(30);


    FUNC_21(2, 500);
    if(VAR_17 >= 1)
        FUNC_21(5, 500);
    if(VAR_17 >= 2)
        FUNC_21(8, 500);
    if(VAR_17 >= 3)
        FUNC_21(11, 500);
    if(VAR_17 >= 4)
        FUNC_21(14, 500);
    FUNC_14();
    FUNC_6(30);

    FUNC_22(&VAR_25[0]);
    while(1) {

        while(1) {

            while( FUNC_24(VAR_12,VAR_14) == VAR_6 ) {
                if(FUNC_24(VAR_12,VAR_13)) {
                    FUNC_23(VAR_12,VAR_13);
                    VAR_30++;
                    VAR_24 = 0;
                }

                if((VAR_4 - VAR_20) > VAR_10)
                    VAR_24 = 0;
                if((VAR_4 - VAR_20) > (VAR_0*VAR_10)) {
                    for(VAR_26=0; VAR_26 < VAR_11; VAR_26++)
                        FUNC_21(VAR_26, 0);
                    FUNC_14();
                }
            }
            VAR_27 = FUNC_25(VAR_12);
            VAR_28++;
            if(!VAR_24) {
                if((VAR_4 - VAR_20) > VAR_10) {

                    VAR_24 = 1;
                    VAR_23 = 0;
                } else {

                    VAR_20 = VAR_4;
                    continue;
                }
            }
            VAR_22.a[VAR_23++] = VAR_27;
            VAR_20 = VAR_4;
            if( VAR_23 >= sizeof(ledPacket_type) ) {

                VAR_24 = 0;
                break;
            }
        }

        for(VAR_26 = 0; VAR_26 < VAR_3; VAR_26++) {
            VAR_19.a[VAR_26] = VAR_22.a[VAR_26];
        }
        for(VAR_26 = 0; VAR_26 < 48; VAR_26++)
            VAR_19.s.payload[VAR_26] = VAR_22.s.payload[VAR_26 + VAR_17*48];


        if(VAR_19.s.type == 131) {
            FUNC_13(VAR_19.s.param1, VAR_22.s.payload + VAR_17*48);
        } else {
            uint32_t VAR_32;

            for(VAR_26 = 0; VAR_26 < 10; VAR_26++)
                VAR_22.s.payload[VAR_26 + VAR_17*48] = FUNC_3(VAR_26);

            for(VAR_26 = 0; VAR_26 < 10; VAR_26++) {
                VAR_32 = FUNC_1(VAR_16[VAR_26]);

                VAR_32 = (VAR_32*2753+2066808) >> 16;
                VAR_22.s.payload[VAR_26 + 10 + VAR_17*48] = VAR_32;
            }


            if(VAR_17 == 0)
                for(VAR_26 = 0; VAR_26 < 6; VAR_26++)
                    VAR_22.s.payload[VAR_26 + 20 + VAR_17*48] = VAR_5[VAR_26];
            if(VAR_17 == 3) {
                if( (VAR_4 - VAR_2) > VAR_10*1000 )
                    VAR_1 = 0xFFFF;
                for(VAR_26 = 0; VAR_26 < 4; VAR_26++)
                    VAR_22.s.payload[VAR_26 + 20 + VAR_17*48] = (VAR_1 >> (24-8*VAR_26)) & 0xFF;
            }

            VAR_32 = VAR_4;
            for(VAR_26 = 0; VAR_26 < 4; VAR_26++)
                VAR_22.s.payload[VAR_26 + 32 + VAR_17*48] = (VAR_32 >> (24-8*VAR_26)) & 0xFF;
        }


        for(VAR_26 = 0; VAR_26 < sizeof(ledPacket_type); VAR_26++) {
            while( FUNC_24(VAR_12,VAR_15) == VAR_6 );
            FUNC_26(VAR_12, VAR_22.a[VAR_26]);
            VAR_29++;
        }
        if(VAR_22.s.type != 128) {
            VAR_18 = FUNC_31(VAR_19.ua+1, 0);
            if(VAR_17 == 3)
                FUNC_29(VAR_18);
            VAR_21 = FUNC_31(VAR_19.ua+1, 1);
        }


        switch(VAR_19.s.type) {
            case 136:
                for(VAR_26 = 0; VAR_26 < VAR_11; VAR_26++) {
                    FUNC_16( VAR_26, VAR_19.s.payload[VAR_26] );
                }
                FUNC_14();
                break;
            case 130:

                FUNC_20(VAR_19.s.payload);
                FUNC_14();
                break;
            case 134:

                for(VAR_26 = 0; VAR_26 < 32; VAR_26++)
                    FUNC_18( VAR_26, FUNC_31(VAR_19.s.payload,VAR_26) );
                FUNC_15();
                break;
            case 135:
                for(VAR_26 = 0; VAR_26 < VAR_11; VAR_26++) {
                    FUNC_21( VAR_26, ((uint16_t)VAR_19.s.payload[VAR_26]) << 4 );
                }
                FUNC_14();
                break;
            case 128:
                FUNC_17(VAR_19.s.param1, VAR_19.s.payload);
                break;
            case 132:
                for(VAR_26 = 0; VAR_26 < 32; VAR_26++)
                    FUNC_18( VAR_26, FUNC_31(VAR_19.s.payload,VAR_26) );
                FUNC_15();
                break;
            case 133:
                FUNC_19(VAR_19.s.payload);
                FUNC_15();
                break;
            case 131:

                break;
            case 129:
                {
                    uint32_t *VAR_33 = (uint32_t *)VAR_19.s.payload;
                    if(VAR_33[0] == 0x816A4EB2) {
                        FUNC_6(100*VAR_10);
                        FUNC_8();
                    }
                }
                break;
            default:
                break;
        }
    }
}
