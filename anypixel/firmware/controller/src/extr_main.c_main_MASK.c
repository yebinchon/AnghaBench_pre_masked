
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct pbuf {scalar_t__ payload; } ;
struct TYPE_5__ {int payload; int type; } ;
struct TYPE_7__ {int a; TYPE_1__ s; } ;
typedef TYPE_3__ ledPacket_type ;
struct TYPE_6__ {int param1; int payload; void* type; } ;
struct TYPE_8__ {int a; TYPE_2__ s; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int *,int ,int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_8 () ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int ,int) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 int FUNC_18 (int ) ;
 int * VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_19 (int ,size_t) ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 TYPE_4__* VAR_43 ;
 int VAR_44 ;
 scalar_t__ VAR_45 ;
 int FUNC_20 (scalar_t__,int ,int) ;
 int FUNC_21 (int ,int ,int) ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
 int FUNC_22 (int ,int ,int) ;
 int * VAR_49 ;
 int VAR_50 ;
 struct pbuf* FUNC_23 (int ,int,int ) ;
 int FUNC_24 (struct pbuf*) ;
 int VAR_51 ;
 int VAR_52 ;
 int FUNC_25 (float,double) ;
 int FUNC_26 (char*,...) ;
 int FUNC_27 () ;
 int VAR_53 ;
 int VAR_54 ;
 int FUNC_28 () ;
 int VAR_55 ;
 int FUNC_29 () ;
 int FUNC_30 (int ,struct pbuf*,int *,int) ;
 int VAR_56 ;
 int * VAR_57 ;

int FUNC_31(void)
{






    int VAR_58;

    struct pbuf *VAR_59;

    FUNC_11(VAR_7);


    FUNC_26("about to start ethernet config\n");
    FUNC_5();


    FUNC_0();
    FUNC_12();
    FUNC_2(VAR_52, VAR_18);
    FUNC_14(VAR_51, 0, VAR_1);

    FUNC_13(VAR_52, VAR_19);
    FUNC_13(VAR_52, VAR_20);

    FUNC_4(10);
    VAR_58 = FUNC_1();



    VAR_38 = (VAR_58 >> 4) & 0xF;
    VAR_36 = VAR_58 & 0xF;
    VAR_5 = 20+VAR_38*10+VAR_36;
    VAR_44 = 20+VAR_38*10+VAR_36;
    FUNC_26("IP: 192.168.0.%d", VAR_5);

    FUNC_7(&VAR_55, VAR_2, VAR_3, VAR_4, 10);


    FUNC_8();


    FUNC_29();

    if(VAR_38 != VAR_17) {

        FUNC_16(&VAR_57[0]);
        FUNC_16(&VAR_57[1]);
        FUNC_16(&VAR_57[2]);
        FUNC_16(&VAR_57[3]);

        FUNC_4(10);





        FUNC_4(7000);


        int VAR_60 = 58;
        while(VAR_60 <= 63) {
            FUNC_4(50);

            ledPacket_type VAR_61;
            FUNC_21(VAR_61.a, 0, sizeof(ledPacket_type));
            VAR_61.s.type = VAR_14;
            for(VAR_58 = 0; VAR_58 < 49; VAR_58++) {
                FUNC_22(VAR_61.s.payload, VAR_49[VAR_58*3+1], VAR_60);




                    FUNC_22(VAR_61.s.payload, VAR_49[VAR_58*3 ], VAR_60/2);
                    FUNC_22(VAR_61.s.payload, VAR_49[VAR_58*3+2], VAR_60/2);

            }
            FUNC_17(&VAR_57[0], VAR_61.a, sizeof(ledPacket_type));
            FUNC_17(&VAR_57[1], VAR_61.a, sizeof(ledPacket_type));
            FUNC_17(&VAR_57[2], VAR_61.a, sizeof(ledPacket_type));
            FUNC_17(&VAR_57[3], VAR_61.a, sizeof(ledPacket_type));
            FUNC_4(50);
            VAR_43[VAR_9].s.type = VAR_15;
            for(VAR_58 = 0; VAR_58 <7*3; VAR_58++)
                FUNC_22(VAR_43[VAR_9].s.payload, VAR_49[VAR_58], 800);
            for(; VAR_58 <49*3; VAR_58++)
                FUNC_22(VAR_43[VAR_9].s.payload, VAR_49[VAR_58], 0);
            FUNC_17(&VAR_57[3], VAR_43[VAR_9].a, sizeof(VAR_43[VAR_9].a));
            FUNC_17(&VAR_57[2], VAR_43[VAR_9].a, sizeof(VAR_43[VAR_9].a));
            FUNC_17(&VAR_57[1], VAR_43[VAR_9].a, sizeof(VAR_43[VAR_9].a));
            FUNC_17(&VAR_57[0], VAR_43[VAR_9].a, sizeof(VAR_43[VAR_9].a));
            VAR_60++;
            FUNC_4(30);
        }

        {
            int VAR_62;
            float VAR_63;
            uint16_t VAR_64;
            VAR_43[VAR_9].s.type = VAR_16;
            for(VAR_58 = 0; VAR_58 < 65; VAR_58++) {
                VAR_63 = 4000*FUNC_25( (float)VAR_58/65.0, 2.2);
                VAR_64 = ((uint16_t)VAR_63) & 0xFFF;
                for(VAR_62 = 0; VAR_62 < 49*3; VAR_62++) {
                    FUNC_22(VAR_43[VAR_9].s.payload, VAR_49[VAR_62], VAR_64);
                }
                VAR_43[VAR_9].s.param1 = VAR_58;
                FUNC_17(&VAR_57[3], VAR_43[VAR_9].a, sizeof(VAR_43[VAR_9].a));
                FUNC_17(&VAR_57[2], VAR_43[VAR_9].a, sizeof(VAR_43[VAR_9].a));
                FUNC_17(&VAR_57[1], VAR_43[VAR_9].a, sizeof(VAR_43[VAR_9].a));
                FUNC_17(&VAR_57[0], VAR_43[VAR_9].a, sizeof(VAR_43[VAR_9].a));
                FUNC_4(30);
            }
        }

        VAR_43[VAR_9].s.type = VAR_15;
        for(VAR_58 = 0; VAR_58 <49*3; VAR_58++) {
            FUNC_22(VAR_43[VAR_9].s.payload, VAR_49[VAR_58], 0);
        }
        FUNC_17(&VAR_57[3], VAR_43[VAR_9].a, sizeof(VAR_43[VAR_9].a));
        FUNC_17(&VAR_57[2], VAR_43[VAR_9].a, sizeof(VAR_43[VAR_9].a));
        FUNC_17(&VAR_57[1], VAR_43[VAR_9].a, sizeof(VAR_43[VAR_9].a));
        FUNC_17(&VAR_57[0], VAR_43[VAR_9].a, sizeof(VAR_43[VAR_9].a));


        VAR_43[VAR_9].s.type = VAR_15;
        for(VAR_58 = 0; VAR_58 <49*3+1; VAR_58++) {
            if(VAR_58 < 49*3)
                FUNC_22(VAR_43[VAR_9].s.payload, VAR_49[VAR_58], 800);
            if(VAR_58 > 0)
                FUNC_22(VAR_43[VAR_9].s.payload, VAR_49[VAR_58-1], 0);
            FUNC_17(&VAR_57[3], VAR_43[VAR_9].a, sizeof(VAR_43[VAR_9].a));
            FUNC_17(&VAR_57[2], VAR_43[VAR_9].a, sizeof(VAR_43[VAR_9].a));
            FUNC_17(&VAR_57[1], VAR_43[VAR_9].a, sizeof(VAR_43[VAR_9].a));
            FUNC_17(&VAR_57[0], VAR_43[VAR_9].a, sizeof(VAR_43[VAR_9].a));

            FUNC_4(10);
        }






    }


    while(1) {
        if (FUNC_6()) {

            FUNC_10();
        }


        if(VAR_38 != VAR_17 && VAR_6 - VAR_40 >= VAR_45 && VAR_33 == VAR_0) {
            FUNC_27();
            FUNC_3(8);
        }

        if(VAR_38 == VAR_17) {

            if(VAR_6-VAR_41 >= VAR_48) {
                VAR_41 = VAR_6;
                VAR_59 = FUNC_23(VAR_13, 4+6+2+2, VAR_12);
                VAR_58 = 0;
                ((uint8_t*)VAR_59->payload)[VAR_58++] = 0x22;
                ((uint8_t*)VAR_59->payload)[VAR_58++] = 0x0;
                ((uint8_t*)VAR_59->payload)[VAR_58++] = 0x0;
                ((uint8_t*)VAR_59->payload)[VAR_58++] = 0x0;
                ((uint8_t*)VAR_59->payload)[VAR_58++] = FUNC_15(VAR_52, VAR_21);
                ((uint8_t*)VAR_59->payload)[VAR_58++] = FUNC_15(VAR_52, VAR_22);
                ((uint8_t*)VAR_59->payload)[VAR_58++] = FUNC_15(VAR_52, VAR_23);
                ((uint8_t*)VAR_59->payload)[VAR_58++] = FUNC_15(VAR_52, VAR_24);
                ((uint8_t*)VAR_59->payload)[VAR_58++] = FUNC_15(VAR_52, VAR_25);
                ((uint8_t*)VAR_59->payload)[VAR_58++] = FUNC_15(VAR_52, VAR_26);
                ((uint8_t*)VAR_59->payload)[VAR_58++] = !FUNC_15(VAR_52, VAR_27);
                ((uint8_t*)VAR_59->payload)[VAR_58++] = !FUNC_15(VAR_52, VAR_28);
                ((uint8_t*)VAR_59->payload)[VAR_58++] = FUNC_15(VAR_52, VAR_19);
                ((uint8_t*)VAR_59->payload)[VAR_58++] = FUNC_15(VAR_52, VAR_20);
                FUNC_30(VAR_37, VAR_59, &VAR_55, 27482);

                FUNC_24(VAR_59);
            }
        } else {



            if(VAR_6-VAR_39 >= VAR_46 && VAR_33 == VAR_0) {
                VAR_39 = VAR_6;
                FUNC_3(7);
                VAR_59 = FUNC_23(VAR_13, 29, VAR_12);
                FUNC_20(VAR_59->payload, VAR_34, 29);
                FUNC_30(VAR_37, VAR_59, &VAR_55, 27482);

                FUNC_24(VAR_59);
            }

            if(VAR_6-VAR_41 >= VAR_48 && VAR_33 == VAR_0) {
                VAR_41 = VAR_6;
                VAR_59 = FUNC_23(VAR_13, 4+196+4+4*6+4*4+4, VAR_12);
                ((uint8_t*)VAR_59->payload)[0] = 0x21;
                FUNC_20(VAR_59->payload+4, VAR_54, 196);
                ((uint8_t*)(VAR_59->payload))[4+196+0] = FUNC_18(VAR_35[0]);
                ((uint8_t*)(VAR_59->payload))[4+196+1] = FUNC_18(VAR_35[1]);
                ((uint8_t*)(VAR_59->payload))[4+196+2] = FUNC_18(VAR_35[2]);
                ((uint8_t*)(VAR_59->payload))[4+196+3] = FUNC_18(VAR_35[3]);
                FUNC_20(VAR_59->payload+4+196+4, VAR_53, 4*6);
                FUNC_20(VAR_59->payload+4+196+4+4*6, VAR_56, 4*4);
                FUNC_20(VAR_59->payload+4+196+4+4*6+4*4, VAR_50, 4);
                FUNC_30(VAR_37, VAR_59, &VAR_55, 27482);

                FUNC_24(VAR_59);
            }
        }

        FUNC_9(VAR_6);


        if( (VAR_6 - VAR_42) > 5000 ) {

            VAR_43[VAR_9].s.type = VAR_15;
            for(VAR_58 = 0; VAR_58 <49*3; VAR_58++) {
                FUNC_22(VAR_43[VAR_9].s.payload, VAR_49[VAR_58], 0);
            }
            if( (VAR_38 != VAR_17) && (VAR_6 - VAR_40 >= VAR_47) ) {
                FUNC_19(VAR_30, VAR_9);
                FUNC_19(VAR_32, VAR_11);
                FUNC_19(VAR_31, VAR_10);
                FUNC_19(VAR_29, VAR_8);
                FUNC_17(&VAR_57[3], VAR_43[VAR_9].a, sizeof(VAR_43[VAR_9].a));
                FUNC_17(&VAR_57[2], VAR_43[VAR_9].a, sizeof(VAR_43[VAR_9].a));
                FUNC_17(&VAR_57[1], VAR_43[VAR_9].a, sizeof(VAR_43[VAR_9].a));
                FUNC_17(&VAR_57[0], VAR_43[VAR_9].a, sizeof(VAR_43[VAR_9].a));
                VAR_40 = VAR_6;
            }
        }
    }
}
