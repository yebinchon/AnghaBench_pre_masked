
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tGATT_STATUS ;
typedef int tGATT_SEC_FLAG ;
typedef int tGATT_PERM ;
struct TYPE_3__ {int permission; int uuid; } ;
typedef TYPE_1__ tGATT_ATTR16 ;
typedef int UINT8 ;
typedef int UINT16 ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static tGATT_STATUS FUNC_2(tGATT_ATTR16 *VAR_15,
        UINT16 VAR_16,
        BOOLEAN VAR_17,
        tGATT_SEC_FLAG VAR_18,
        UINT8 VAR_19)
{
    UINT16 VAR_20;
    tGATT_PERM VAR_21 = VAR_15->permission;

    FUNC_1(VAR_16);
    VAR_20 = (((VAR_21 & VAR_1) >> 12));
    if (VAR_20 != 0 ) {
        VAR_20 += 6;
    }

    if (!(VAR_21 & VAR_6)) {
        FUNC_0( "GATT_READ_NOT_PERMIT\n");
        return VAR_10;
    }

    if ((VAR_21 & VAR_7 ) && !(VAR_18 & VAR_13) &&
            !(VAR_18 & VAR_0)) {
        FUNC_0( "GATT_INSUF_AUTHENTICATION\n");
        return VAR_2;
    }

    if ((VAR_21 & VAR_9 ) && !(VAR_18 & VAR_12)) {
        FUNC_0( "GATT_INSUF_AUTHENTICATION: MITM Required\n");
        return VAR_2;
    }

    if ((VAR_21 & VAR_8 ) && !(VAR_18 & VAR_11)) {
        FUNC_0( "GATT_INSUF_ENCRYPTION\n");
        return VAR_3;
    }

    if ( (VAR_21 & VAR_8) && (VAR_18 & VAR_11) && (VAR_19 < VAR_20)) {
        FUNC_0( "GATT_INSUF_KEY_SIZE\n");
        return VAR_4;
    }


    if (VAR_17) {
        switch (VAR_15->uuid) {
        case 129:
        case 128:
        case 134:
        case 130:
        case 133:
        case 135:
        case 131:
        case 132:
            FUNC_0("GATT_NOT_LONG\n");
            return VAR_5;

        default:
            break;
        }
    }

    return VAR_14;
}
