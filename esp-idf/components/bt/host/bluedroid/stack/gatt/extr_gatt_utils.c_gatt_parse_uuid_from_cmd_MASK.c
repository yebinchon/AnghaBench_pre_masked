
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int uuid128; int uuid32; int uuid16; } ;
struct TYPE_6__ {int len; TYPE_1__ uu; } ;
typedef TYPE_2__ tBT_UUID ;
typedef size_t UINT8 ;
typedef int UINT16 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;



 int FUNC_2 (int ,size_t*) ;
 int FUNC_3 (int ,size_t*) ;
 int VAR_1 ;
 size_t* VAR_2 ;
 int FUNC_4 (int ,size_t*,int const) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;

BOOLEAN FUNC_6(tBT_UUID *VAR_3, UINT16 VAR_4, UINT8 **VAR_5)
{
    BOOLEAN VAR_6, VAR_7 = VAR_1;
    UINT8 VAR_8;
    UINT8 *VAR_9 = *VAR_5;

    FUNC_5(VAR_3, 0, sizeof(tBT_UUID));

    switch (VAR_4) {
    case 129:
        VAR_3->len = VAR_4;
        FUNC_2 (VAR_3->uu.uuid16, VAR_9);
        *VAR_5 += 129;
        break;

    case 130:

        VAR_6 = VAR_1;
        for (VAR_8 = 0; VAR_8 < 130 - 4; VAR_8++) {
            if (VAR_9[VAR_8] != VAR_2[VAR_8]) {
                VAR_6 = VAR_0;
                break;
            }
        }
        if (VAR_6) {
            if ((VAR_9[130 - 1] == 0) && (VAR_9[130 - 2] == 0)) {
                VAR_9 += (130 - 4);
                VAR_3->len = 129;
                FUNC_2(VAR_3->uu.uuid16, VAR_9);
            } else {
                VAR_9 += (130 - 128);
                VAR_3->len = 128;
                FUNC_3(VAR_3->uu.uuid32, VAR_9);
            }
        }
        if (!VAR_6) {
            VAR_3->len = 130;
            FUNC_4(VAR_3->uu.uuid128, VAR_9, 130);
        }
        *VAR_5 += 130;
        break;


    case 128:
        FUNC_0("DO NOT ALLOW 32 BITS UUID IN ATT PDU");
    case 0:
    default:
        if (VAR_4 != 0) {
            VAR_7 = VAR_0;
        }
        FUNC_1("gatt_parse_uuid_from_cmd invalid uuid size");
        break;
    }

    return ( VAR_7);
}
