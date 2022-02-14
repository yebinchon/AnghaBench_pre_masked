
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int num_params; void** params; int protocol_uuid; } ;
typedef TYPE_2__ tSDP_PROTOCOL_ELEM ;
struct TYPE_6__ {int uuid128; int uuid32; int uuid16; } ;
struct TYPE_8__ {int len; TYPE_1__ uu; } ;
typedef TYPE_3__ tBT_UUID ;
typedef int UINT8 ;
typedef int UINT32 ;
typedef void* UINT16 ;


 int FUNC_0 (int *,int ,int const) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,void*,void*) ;
 int FUNC_2 (char*,int) ;



 int FUNC_3 (int ,int ,int ,int ,int *) ;
 int FUNC_4 (int ,int,TYPE_2__*) ;
 int FUNC_5 (int ,int,int *) ;
 int FUNC_6 (int ,int ,int,void**) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;

UINT32 FUNC_11 (tBT_UUID *VAR_10, UINT16 VAR_11, UINT16 VAR_12)
{
    tSDP_PROTOCOL_ELEM VAR_13[2];
    UINT32 VAR_14;
    UINT16 VAR_15 = VAR_9;
    UINT8 VAR_16[60];
    UINT8 *VAR_17 = VAR_16;

    FUNC_1("gatt_add_sdp_record s_hdl=0x%x  s_hdl=0x%x", VAR_11, VAR_12);

    if ((VAR_14 = FUNC_7()) == 0) {
        return 0;
    }

    switch (VAR_10->len) {
    case 129:
        FUNC_5(VAR_14, 1, &VAR_10->uu.uuid16);
        break;

    case 128:
        FUNC_10 (VAR_17, (VAR_6 << 3) | VAR_4);
        FUNC_9 (VAR_17, VAR_10->uu.uuid32);
        FUNC_3 (VAR_14, VAR_1, VAR_3,
                          (UINT32) (VAR_17 - VAR_16), VAR_16);
        break;

    case 130:
        FUNC_10 (VAR_17, (VAR_6 << 3) | VAR_5);
        FUNC_0 (VAR_17, VAR_10->uu.uuid128, 130);
        FUNC_3 (VAR_14, VAR_1, VAR_3,
                          (UINT32) (VAR_17 - VAR_16), VAR_16);
        break;

    default:
        FUNC_2("inavlid UUID len=%d", VAR_10->len);
        FUNC_8(VAR_14);
        return 0;
        break;
    }


    VAR_13[0].protocol_uuid = VAR_8;
    VAR_13[0].num_params = 1;
    VAR_13[0].params[0] = VAR_2;
    VAR_13[1].protocol_uuid = VAR_7;
    VAR_13[1].num_params = 2;
    VAR_13[1].params[0] = VAR_11;
    VAR_13[1].params[1] = VAR_12;

    FUNC_4(VAR_14, 2, VAR_13);


    FUNC_6 (VAR_14, VAR_0, 1, &VAR_15);

    return (VAR_14);
}
