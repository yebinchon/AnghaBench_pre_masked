
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_20__ {int len; int * p_val; int adv_type; } ;
typedef TYPE_13__ tBTM_BLE_PROP_ELEM ;
typedef int tBTM_BLE_AD_MASK ;
struct TYPE_18__ {int hi; int low; } ;
struct TYPE_21__ {scalar_t__ tx_power; TYPE_12__* p_proprietary; TYPE_11__ int_range; TYPE_10__* p_service_data; TYPE_7__* p_sol_service_128b; TYPE_6__* p_sol_service_32b; TYPE_5__* p_services_128b; TYPE_4__* p_service_32b; TYPE_3__* p_services; TYPE_2__* p_manu; int appearance; int flag; } ;
typedef TYPE_14__ tBTM_BLE_ADV_DATA ;
typedef int UINT8 ;
typedef int UINT32 ;
typedef int UINT16 ;
struct TYPE_30__ {int * uuid128; int uuid32; int uuid16; } ;
struct TYPE_31__ {int len; TYPE_8__ uu; } ;
struct TYPE_29__ {int * uuid128; } ;
struct TYPE_28__ {int num_service; int * p_uuid; } ;
struct TYPE_27__ {int * uuid128; int list_cmpl; } ;
struct TYPE_26__ {int num_service; int * p_uuid; } ;
struct TYPE_25__ {int num_service; int * p_uuid; } ;
struct TYPE_24__ {int len; int * p_val; } ;
struct TYPE_23__ {int * bd_name; } ;
struct TYPE_22__ {TYPE_1__ cfg; } ;
struct TYPE_19__ {int num_elem; TYPE_13__* p_elem; } ;
struct TYPE_17__ {int len; TYPE_9__ service_uuid; int * p_val; } ;


 int FUNC_0 (int*,int *,int) ;
 scalar_t__ VAR_0 ;
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
 int VAR_15 ;
 int VAR_16 ;
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
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_4 (int*,int ) ;
 int FUNC_5 (int*,int ) ;
 int FUNC_6 (scalar_t__) ;
 TYPE_15__ VAR_38 ;
 int FUNC_7 (int *) ;

UINT8 *FUNC_8(tBTM_BLE_AD_MASK *VAR_39, UINT8 **VAR_40,
                              tBTM_BLE_ADV_DATA *VAR_41)
{
    UINT32 VAR_42 = *VAR_39;
    UINT8 *VAR_43 = *VAR_40,
             *VAR_44 = ((void*)0);
    UINT16 VAR_45 = VAR_14, VAR_46 = 0;
    UINT8 VAR_47 = 0;
    tBTM_BLE_PROP_ELEM *VAR_48;

    FUNC_2 (" btm_ble_build_adv_data");


    if (VAR_42) {

        if (VAR_42 & VAR_3) {
            *VAR_43++ = VAR_37;
            *VAR_43++ = VAR_26;
            VAR_44 = VAR_43;
            if (VAR_41) {
                *VAR_43++ = VAR_41->flag;
            } else {
                *VAR_43++ = 0;
            }

            VAR_45 -= 3;

            VAR_42 &= ~VAR_3;
        }

        if (VAR_45 > 3 && VAR_42 & VAR_1) {
            *VAR_43++ = 3;
            *VAR_43++ = VAR_25;
            FUNC_4(VAR_43, VAR_41->appearance);
            VAR_45 -= 4;

            VAR_42 &= ~VAR_1;
        }
        if (VAR_45 > VAR_37 && VAR_42 & VAR_5 &&
                VAR_41 && VAR_41->p_manu &&
                VAR_41->p_manu->len != 0 && VAR_41->p_manu->p_val) {
            if (VAR_41->p_manu->len > (VAR_45 - VAR_37)) {
                VAR_46 = VAR_45 - VAR_37;
            } else {
                VAR_46 = VAR_41->p_manu->len;
            }
            FUNC_1("cp_len = %d\n,p_data->p_manu->len=%d\n", VAR_46, VAR_41->p_manu->len);
            for (int VAR_49 = 0; VAR_49 < VAR_41->p_manu->len; VAR_49++) {
                FUNC_1("p_data->p_manu->p_val[%d] = %x\n", VAR_49, VAR_41->p_manu->p_val[VAR_49]);
            }
            *VAR_43++ = VAR_46 + 1;
            *VAR_43++ = VAR_28;
            FUNC_0(VAR_43, VAR_41->p_manu->p_val, VAR_46);
            FUNC_1("p_addr = %p\n,p_data->p_manu->p_val = %p\n", VAR_43, VAR_41->p_manu->p_val);
            VAR_45 -= (VAR_46 + VAR_37);
            VAR_42 &= ~VAR_5;
        }

        if (VAR_45 > VAR_37 && VAR_42 & VAR_13) {
            *VAR_43++ = VAR_37;
            *VAR_43++ = VAR_32;
            if (VAR_41->tx_power > VAR_0) {
                VAR_41->tx_power = VAR_0;
            }
            *VAR_43++ = FUNC_6(VAR_41->tx_power);
            VAR_45 -= 3;
            VAR_42 &= ~VAR_13;
        }

        if (VAR_45 > VAR_37 && VAR_42 & VAR_7 &&
                VAR_41 && VAR_41->p_services &&
                VAR_41->p_services->num_service != 0 &&
                VAR_41->p_services->p_uuid) {
            if (VAR_41->p_services->num_service * VAR_34 > (VAR_45 - VAR_37)) {
                VAR_46 = (VAR_45 - VAR_37) / VAR_34;
                *VAR_43 ++ = 1 + VAR_46 * VAR_34;
                *VAR_43++ = VAR_20;
            } else {
                VAR_46 = VAR_41->p_services->num_service;
                *VAR_43++ = 1 + VAR_46 * VAR_34;
                *VAR_43++ = VAR_19;
            }
            for (VAR_47 = 0; VAR_47 < VAR_46; VAR_47 ++) {
                FUNC_4(VAR_43, *(VAR_41->p_services->p_uuid + VAR_47));
            }

            VAR_45 -= (VAR_46 * VAR_37 + VAR_37);
            VAR_42 &= ~VAR_7;
        }

        if (VAR_45 > VAR_37 && VAR_42 & VAR_10 &&
                VAR_41 && VAR_41->p_service_32b &&
                VAR_41->p_service_32b->num_service != 0 &&
                VAR_41->p_service_32b->p_uuid) {
            if ((VAR_41->p_service_32b->num_service * VAR_35) > (VAR_45 - VAR_37)) {
                VAR_46 = (VAR_45 - VAR_37) / VAR_35;
                *VAR_43 ++ = 1 + VAR_46 * VAR_35;
                *VAR_43++ = VAR_24;
            } else {
                VAR_46 = VAR_41->p_service_32b->num_service;
                *VAR_43++ = 1 + VAR_46 * VAR_35;
                *VAR_43++ = VAR_23;
            }
            for (VAR_47 = 0; VAR_47 < VAR_46; VAR_47 ++) {
                FUNC_5(VAR_43, *(VAR_41->p_service_32b->p_uuid + VAR_47));
            }

            VAR_45 -= (VAR_46 * VAR_35 + VAR_37);
            VAR_42 &= ~VAR_10;
        }

        if (VAR_45 >= (VAR_36 + 2) && VAR_42 & VAR_8 &&
                VAR_41 && VAR_41->p_services_128b) {
            *VAR_43 ++ = 1 + VAR_36;
            if (!VAR_41->p_services_128b->list_cmpl) {
                *VAR_43++ = VAR_18;
            } else {
                *VAR_43++ = VAR_17;
            }

            FUNC_0(VAR_43, VAR_41->p_services_128b->uuid128, VAR_36);

            VAR_45 -= (VAR_36 + VAR_37);
            VAR_42 &= ~VAR_8;
        }

        if (VAR_45 > VAR_37 && VAR_42 & VAR_11 &&
                VAR_41 && VAR_41->p_sol_service_32b &&
                VAR_41->p_sol_service_32b->num_service != 0 &&
                VAR_41->p_sol_service_32b->p_uuid) {
            if ((VAR_41->p_sol_service_32b->num_service * VAR_35) > (VAR_45 - VAR_37)) {
                VAR_46 = (VAR_45 - VAR_37) / VAR_35;
                *VAR_43 ++ = 1 + VAR_46 * VAR_35;
            } else {
                VAR_46 = VAR_41->p_sol_service_32b->num_service;
                *VAR_43++ = 1 + VAR_46 * VAR_35;
            }

            *VAR_43++ = VAR_22;
            for (VAR_47 = 0; VAR_47 < VAR_46; VAR_47 ++) {
                FUNC_5(VAR_43, *(VAR_41->p_sol_service_32b->p_uuid + VAR_47));
            }

            VAR_45 -= (VAR_46 * VAR_35 + VAR_37);
            VAR_42 &= ~VAR_11;
        }

        if (VAR_45 >= (VAR_36 + VAR_37) && VAR_42 & VAR_9 &&
                VAR_41 && VAR_41->p_sol_service_128b) {
            *VAR_43 ++ = 1 + VAR_36;
            *VAR_43++ = VAR_16;
            FUNC_0(VAR_43, VAR_41->p_sol_service_128b->uuid128, VAR_36);
            VAR_45 -= (VAR_36 + VAR_37);
            VAR_42 &= ~VAR_9;
        }

        if (VAR_45 > VAR_37 && VAR_42 & VAR_12 &&
                VAR_41 && VAR_41->p_service_data->len != 0 && VAR_41->p_service_data->p_val) {
            if (VAR_45 > (VAR_41->p_service_data->service_uuid.len + VAR_37)) {
                if (VAR_41->p_service_data->len > (VAR_45 - VAR_37)) {
                    VAR_46 = VAR_45 - VAR_37 - VAR_41->p_service_data->service_uuid.len;
                } else {
                    VAR_46 = VAR_41->p_service_data->len;
                }

                *VAR_43++ = VAR_46 + 1 + VAR_41->p_service_data->service_uuid.len;
                if (VAR_41->p_service_data->service_uuid.len == VAR_34) {
                    *VAR_43++ = VAR_31;
                    FUNC_4(VAR_43, VAR_41->p_service_data->service_uuid.uu.uuid16);
                } else if (VAR_41->p_service_data->service_uuid.len == VAR_35) {
                    *VAR_43++ = VAR_21;
                    FUNC_5(VAR_43, VAR_41->p_service_data->service_uuid.uu.uuid32);
                } else {
                    *VAR_43++ = VAR_15;
                    FUNC_0(VAR_43, VAR_41->p_service_data->service_uuid.uu.uuid128,
                                    VAR_33);
                }

                FUNC_0(VAR_43, VAR_41->p_service_data->p_val, VAR_46);

                VAR_45 -= (VAR_46 + VAR_37 + VAR_41->p_service_data->service_uuid.len);
                VAR_42 &= ~VAR_12;
            } else {
                FUNC_3("service data does not fit");
            }
        }

        if (VAR_45 >= 6 && VAR_42 & VAR_4 &&
                VAR_41) {
            *VAR_43++ = 5;
            *VAR_43++ = VAR_27;
            FUNC_4(VAR_43, VAR_41->int_range.low);
            FUNC_4(VAR_43, VAR_41->int_range.hi);
            VAR_45 -= 6;
            VAR_42 &= ~VAR_4;
        }
        if (VAR_42 & VAR_6 && VAR_41 && VAR_41->p_proprietary) {
            for (VAR_47 = 0; VAR_47 < VAR_41->p_proprietary->num_elem ; VAR_47 ++) {
                VAR_48 = VAR_41->p_proprietary->p_elem + VAR_47;

                if (VAR_45 >= (VAR_37 + VAR_48->len))

                {
                    *VAR_43 ++ = VAR_48->len + 1;
                    *VAR_43 ++ = VAR_48->adv_type;
                    FUNC_0(VAR_43, VAR_48->p_val, VAR_48->len);

                    VAR_45 -= (VAR_37 + VAR_48->len);
                } else {
                    FUNC_3("data exceed max adv packet length");
                    break;
                }
            }
            VAR_42 &= ~VAR_6;
        }
    }

    *VAR_39 = VAR_42;
    *VAR_40 = VAR_43;

    return VAR_44;
}
