
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int u16_t ;
struct udp_pcb {int dummy; } ;
struct pbuf {int* payload; } ;
struct ip_addr {int dummy; } ;
struct TYPE_5__ {int type; scalar_t__ payload; } ;
struct TYPE_7__ {int a; TYPE_1__ s; } ;
typedef TYPE_3__ ledPacket_type ;
struct TYPE_6__ {int type; int param1; } ;
struct TYPE_8__ {TYPE_2__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int *,int ,int) ;
 int VAR_6 ;
 int FUNC_7 () ;
 int* VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;
 int* VAR_11 ;
 int* VAR_12 ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 TYPE_4__* VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_10 (struct pbuf*) ;
 int VAR_18 ;
 int FUNC_11 () ;
 int FUNC_12 (int*,int) ;
 int FUNC_13 (int*,int) ;
 int * VAR_19 ;

void FUNC_14(void *VAR_20, struct udp_pcb *VAR_21, struct pbuf *VAR_22, struct ip_addr *VAR_23, u16_t VAR_24)
{
    int VAR_25, VAR_26;
    static int VAR_27 = 0;
    uint8_t VAR_28;
    uint8_t VAR_29;

    FUNC_1(0);

    VAR_27++;

    if (VAR_22 != ((void*)0)) {
        VAR_15 = VAR_2;
        VAR_28 = ((uint8_t*)VAR_22->payload)[0];
        switch( VAR_28 ) {
            case 139:
                for(VAR_25 = 0; VAR_25 < 196*3; VAR_25++) {
                    VAR_26 = ((uint8_t*)VAR_22->payload)[16+VAR_25];
                    FUNC_9(VAR_25, VAR_26);
                }
                break;
            case 131:
                for(VAR_25 = 0; VAR_25 < 196*3; VAR_25++) {
                    VAR_26 = FUNC_12(VAR_22->payload+16, VAR_25);
                    FUNC_8(VAR_25, VAR_26);
                }
                break;
            case 136:
                for(VAR_25 = 0; VAR_25 < 196*3; VAR_25++) {
                    VAR_26 = FUNC_12(VAR_22->payload+16, VAR_25);
                    FUNC_8(VAR_25, VAR_26);
                }
                break;
            case 138:
                for(VAR_25 = 0; VAR_25 < 196*3; VAR_25++) {
                    VAR_26 = ((uint8_t*)VAR_22->payload)[16+VAR_25];
                    FUNC_9(VAR_25, VAR_26);
                }
                break;
            case 128:
                for(VAR_25 = 0; VAR_25 < 196*3; VAR_25++) {
                    VAR_26 = FUNC_12(VAR_22->payload+16, VAR_25);
                    FUNC_8(VAR_25, VAR_26);
                }
                VAR_29 = ((uint8_t*)VAR_22->payload)[6];
                break;
            case 134:
                for(VAR_25 = 0; VAR_25 < 196*3; VAR_25++) {
                    VAR_26 = ((uint8_t*)VAR_22->payload)[16+VAR_25];
                    FUNC_8(VAR_25, VAR_26);
                }
                VAR_28 = 136;
                break;
            case 135:
                for(VAR_25 = 0; VAR_25 < 196*3; VAR_25++) {
                    VAR_26 = FUNC_13(VAR_22->payload+16, VAR_25);
                    FUNC_8(VAR_25, VAR_26);
                }
                VAR_28 = 136;
                break;
            case 132:
                FUNC_7();
                FUNC_10(VAR_22);
                FUNC_0(0);
                return;
            case 133:
                {
                    uint8_t *VAR_30 = VAR_22->payload+16;
                    for(VAR_25 = 0; VAR_25 < 4; VAR_25++) {
                        VAR_11[VAR_25] = (VAR_30[ VAR_25*2] << 8) | VAR_30[ VAR_25*2+1];
                        VAR_10[VAR_25] = VAR_30[ 8+VAR_25 ];
                        VAR_12[VAR_25] = (VAR_30[12+VAR_25*2] << 8) | VAR_30[12+VAR_25*2+1];
                        VAR_8[VAR_25] = (VAR_30[20+VAR_25*2] << 8) | VAR_30[20+VAR_25*2+1];
                        VAR_9[VAR_25] = (VAR_30[28+VAR_25*2] << 8) | VAR_30[28+VAR_25*2+1];
                        if(VAR_10[VAR_25] == 0)
                            VAR_7[VAR_25] = VAR_11[VAR_25];
                    }
                }
                break;
            case 129:
                if(((uint8_t*)(VAR_22->payload+16))[0] != 0)
                    FUNC_4(VAR_18, VAR_4);
                else
                    FUNC_5(VAR_18, VAR_4);

                if(((uint8_t*)(VAR_22->payload+16))[1] != 0)
                    FUNC_4(VAR_18, VAR_5);
                else
                    FUNC_5(VAR_18, VAR_5);
                break;
            case 130:
                if( ((uint32_t*)(VAR_22->payload+16))[0] == 0x816A4EB2) {
                    if( ((uint8_t*)(VAR_22->payload+16))[4] & 0x0F) {
                        ledPacket_type VAR_31;
                        VAR_31.s.type = 130;
                        ((uint32_t*)VAR_31.s.payload)[0] = 0x816A4EB2;
                        ((uint32_t*)VAR_31.s.payload)[12] = 0x816A4EB2;
                        ((uint32_t*)VAR_31.s.payload)[24] = 0x816A4EB2;
                        ((uint32_t*)VAR_31.s.payload)[36] = 0x816A4EB2;
                        ((uint32_t*)VAR_31.s.payload)[48] = 0x816A4EB2;
                        for(VAR_25 = 0; VAR_25 < 4; VAR_25++) {
                            if( ((uint8_t*)(VAR_22->payload+16))[4] & (0x01 << VAR_25)) {
                                FUNC_6(&VAR_19[VAR_25], VAR_31.a, sizeof(ledPacket_type));
                            }
                        }
                    }
                    if( ((uint8_t*)(VAR_22->payload+16))[4] & 0x10) {
                        FUNC_2(100);
                        FUNC_3();
                    }
                }
                break;
            case 137:
                if(VAR_6 == VAR_1) {

                    VAR_6 = VAR_0;
                }

            default:
                VAR_28 = 0;
                break;
        }


        for(VAR_25 = 0; VAR_25 < 4; VAR_25++) {
            VAR_16[VAR_25].s.type = VAR_28;
            VAR_16[VAR_25].s.param1 = VAR_29;
        }


        if( (VAR_13 != VAR_3) && (VAR_2 - VAR_14 >= VAR_17) )
            FUNC_11();


        FUNC_10(VAR_22);
    }
    FUNC_0(0);
}
