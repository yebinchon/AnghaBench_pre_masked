
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ p_attr_list; } ;
typedef TYPE_1__ tGATT_SVC_DB ;
typedef int tGATT_STATUS ;
typedef int tGATT_SEC_FLAG ;
typedef int tGATT_PERM ;
struct TYPE_5__ {scalar_t__ handle; int permission; scalar_t__ uuid_type; int uuid; scalar_t__ p_next; } ;
typedef TYPE_2__ tGATT_ATTR16 ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
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
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;







 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;

tGATT_STATUS FUNC_2 (tGATT_SVC_DB *VAR_29, UINT8 VAR_30,
        UINT16 VAR_31, UINT16 VAR_32, UINT8 *VAR_33,
        UINT16 VAR_34, tGATT_SEC_FLAG VAR_35, UINT8 VAR_36)
{
    tGATT_STATUS VAR_37 = VAR_10;
    tGATT_ATTR16 *VAR_38;
    UINT16 VAR_39 = 0;
    tGATT_PERM VAR_40;
    UINT16 VAR_41;

    FUNC_0( "gatts_write_attr_perm_check op_code=0x%0x handle=0x%04x offset=%d len=%d sec_flag=0x%0x key_size=%d",
                      VAR_30, VAR_31, VAR_32, VAR_34, VAR_35, VAR_36);

    if (VAR_29 != ((void*)0)) {
        VAR_38 = (tGATT_ATTR16 *) VAR_29->p_attr_list;

        while (VAR_38 != ((void*)0)) {
            if (VAR_38->handle == VAR_31) {
                VAR_40 = VAR_38->permission;
                VAR_41 = (((VAR_40 & VAR_4) >> 12));
                if (VAR_41 != 0 ) {
                    VAR_41 += 6;
                }
                FUNC_0( "gatts_write_attr_perm_check p_attr->permission =0x%04x min_key_size==0x%04x",
                                  VAR_38->permission,
                                  VAR_41);

                if ((VAR_30 == VAR_3 || VAR_30 == VAR_17)
                        && (VAR_40 & VAR_28)) {



                    if ((VAR_40 & VAR_14) && (VAR_40 & VAR_12)) {
                        VAR_40 = VAR_12;
                    }


                    else if (((VAR_40 & VAR_15) && (VAR_40 & VAR_12)) ||

                             ((VAR_40 & VAR_28) && (VAR_40 & VAR_13))) {
                        VAR_40 = VAR_13;
                    }
                }

                if ((VAR_30 == VAR_21) && !(VAR_40 & VAR_28)) {
                    VAR_37 = VAR_27;
                    FUNC_0( "gatts_write_attr_perm_check - sign cmd write not allowed");
                }
                if ((VAR_30 == VAR_21) && (VAR_35 & VAR_18)) {
                    VAR_37 = VAR_9;
                    FUNC_1( "gatts_write_attr_perm_check - Error!! sign cmd write sent on a encypted link");
                } else if (!(VAR_40 & VAR_23)) {
                    VAR_37 = VAR_27;
                    FUNC_1( "gatts_write_attr_perm_check - GATT_WRITE_NOT_PERMIT");
                }

                else if ((VAR_40 & VAR_24 ) && !(VAR_35 & VAR_20)) {
                    VAR_37 = VAR_5;
                    FUNC_1( "gatts_write_attr_perm_check - GATT_INSUF_AUTHENTICATION");
                } else if ((VAR_40 & VAR_26 ) && !(VAR_35 & VAR_19)) {
                    VAR_37 = VAR_5;
                    FUNC_1( "gatts_write_attr_perm_check - GATT_INSUF_AUTHENTICATION: MITM required");
                } else if ((VAR_40 & VAR_25 ) && !(VAR_35 & VAR_18)) {
                    VAR_37 = VAR_6;
                    FUNC_1( "gatts_write_attr_perm_check - GATT_INSUF_ENCRYPTION");
                } else if ((VAR_40 & VAR_25 ) && (VAR_35 & VAR_18) && (VAR_36 < VAR_41)) {
                    VAR_37 = VAR_7;
                    FUNC_1( "gatts_write_attr_perm_check - GATT_INSUF_KEY_SIZE");
                }

                else if (VAR_40 & VAR_28 && VAR_30 != VAR_21 && !(VAR_35 & VAR_18)
                         && (VAR_40 & VAR_23) == 0) {
                    VAR_37 = VAR_5;
                    FUNC_1( "gatts_write_attr_perm_check - GATT_INSUF_AUTHENTICATION: LE security mode 2 required");
                } else {
                    if (VAR_38->uuid_type == VAR_1) {
                        switch (VAR_38->uuid) {
                        case 130:
                        case 131:
                        case 134:
                        case 128:
                            VAR_37 = VAR_27;
                            break;

                        case 133:



                        case 129:
                            VAR_39 = 2;
                        case 132:
                        default:
                            VAR_37 = VAR_22;
                            break;
                        }
                    } else if (VAR_38->uuid_type == VAR_0 ||
                               VAR_38->uuid_type == VAR_2) {
                        VAR_37 = VAR_22;
                    } else {
                        VAR_37 = VAR_9;
                    }

                    if (VAR_33 == ((void*)0) && VAR_34 > 0) {
                        VAR_37 = VAR_9;
                    }


                    else if ( (VAR_38->uuid_type == VAR_1) &&
                              (VAR_38->uuid == 133 ||
                               VAR_38->uuid == 129) )

                    {
                        if (VAR_30 == VAR_16 && VAR_32 != 0) {
                            VAR_37 = VAR_11;
                            FUNC_1( "gatts_write_attr_perm_check - GATT_NOT_LONG");
                        } else if (VAR_34 != VAR_39) {
                            VAR_37 = VAR_8;
                            FUNC_1( "gatts_write_attr_perm_check - GATT_INVALID_PDU");
                        } else {
                            VAR_37 = VAR_22;
                        }
                    }
                }
                break;
            } else {
                VAR_38 = (tGATT_ATTR16 *)VAR_38->p_next;
            }
        }
    }

    return VAR_37;
}
