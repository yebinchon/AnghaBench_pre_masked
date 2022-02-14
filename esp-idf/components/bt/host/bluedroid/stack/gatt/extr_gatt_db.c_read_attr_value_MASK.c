
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef scalar_t__ tGATT_STATUS ;
typedef int tGATT_SEC_FLAG ;
struct TYPE_22__ {scalar_t__ uuid_type; int uuid; } ;
typedef TYPE_8__ tGATT_ATTR32 ;
struct TYPE_19__ {scalar_t__ auto_rsp; } ;
struct TYPE_23__ {scalar_t__ uuid; scalar_t__ uuid_type; TYPE_7__* p_value; TYPE_5__ control; scalar_t__ p_next; int permission; } ;
typedef TYPE_9__ tGATT_ATTR16 ;
struct TYPE_13__ {int * uuid; } ;
typedef TYPE_10__ tGATT_ATTR128 ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_20__ {scalar_t__ attr_len; int * attr_val; } ;
struct TYPE_16__ {scalar_t__ uuid16; } ;
struct TYPE_17__ {scalar_t__ len; TYPE_2__ uu; } ;
struct TYPE_18__ {scalar_t__ s_handle; scalar_t__ e_handle; TYPE_3__ service_type; } ;
struct TYPE_15__ {scalar_t__ char_val_handle; int property; } ;
struct TYPE_14__ {scalar_t__ len; } ;
struct TYPE_21__ {TYPE_6__ attr_val; TYPE_4__ incl_handle; TYPE_1__ char_decl; TYPE_12__ uuid; } ;
typedef int BOOLEAN ;


 int FUNC_0 (int *,int *,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (char*,scalar_t__,int ,int ,scalar_t__,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int **,TYPE_12__) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (TYPE_9__*,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static tGATT_STATUS FUNC_7 (void *VAR_15,
                                     UINT16 VAR_16,
                                     UINT8 **VAR_17,
                                     BOOLEAN VAR_18,
                                     UINT16 VAR_19,
                                     UINT16 *VAR_20,
                                     tGATT_SEC_FLAG VAR_21,
                                     UINT8 VAR_22)
{
    UINT16 VAR_23 = 0, VAR_24 = 0;
    UINT8 *VAR_25 = *VAR_17;
    tGATT_STATUS VAR_26;
    tGATT_ATTR16 *VAR_27 = (tGATT_ATTR16 *)VAR_15;

    FUNC_1("read_attr_value uuid=0x%04x perm=0x%0x sec_flag=0x%x offset=%d read_long=%d\n",
                     VAR_27->uuid,
                     VAR_27->permission,
                     VAR_21,
                     VAR_16,
                     VAR_18);

    VAR_26 = FUNC_6((tGATT_ATTR16 *)VAR_15, VAR_16, VAR_18, VAR_21, VAR_22);

    if (VAR_26 != VAR_7) {
        return VAR_26;
    }

    if (VAR_27->uuid_type == VAR_0) {
        VAR_24 = VAR_27->uuid;
    }

    VAR_26 = VAR_3;

    if (VAR_24 == VAR_11 || VAR_24 == VAR_12) {
        VAR_23 = VAR_27->p_value->uuid.len;
        if (VAR_19 >= VAR_27->p_value->uuid.len) {
            FUNC_4(&VAR_25, VAR_27->p_value->uuid);
            VAR_26 = VAR_7;
        }
    } else if (VAR_24 == VAR_9) {
        VAR_23 = (((tGATT_ATTR16 *)(VAR_27->p_next))->uuid_type == VAR_0) ? 5 : 19;

        if (VAR_19 >= VAR_23) {
            FUNC_3(VAR_25, VAR_27->p_value->char_decl.property);
            FUNC_2(VAR_25, VAR_27->p_value->char_decl.char_val_handle);

            if (((tGATT_ATTR16 *)(VAR_27->p_next))->uuid_type == VAR_0) {
                FUNC_2(VAR_25, ((tGATT_ATTR16 *)(VAR_27->p_next))->uuid);
            }

            else if (((tGATT_ATTR32 *)(VAR_27->p_next))->uuid_type == VAR_1) {
                FUNC_5 (VAR_25, ((tGATT_ATTR32 *)(VAR_27->p_next))->uuid);
                VAR_25 += VAR_13;
            } else {
                FUNC_0 (VAR_25, ((tGATT_ATTR128 *)(VAR_27->p_next))->uuid, VAR_13);
            }
            VAR_26 = VAR_7;
        }

    } else if (VAR_24 == VAR_10) {
        if (VAR_27->p_value->incl_handle.service_type.len == VAR_14) {
            VAR_23 = 6;
        } else {
            VAR_23 = 4;
        }

        if (VAR_19 >= VAR_23) {
            FUNC_2(VAR_25, VAR_27->p_value->incl_handle.s_handle);
            FUNC_2(VAR_25, VAR_27->p_value->incl_handle.e_handle);

            if (VAR_27->p_value->incl_handle.service_type.len == VAR_14) {
                FUNC_2(VAR_25, VAR_27->p_value->incl_handle.service_type.uu.uuid16);
            }
            VAR_26 = VAR_7;
        }
    } else {
        if (VAR_27->control.auto_rsp == VAR_5) {
            if (VAR_27->p_value == ((void*)0) || VAR_27->p_value->attr_val.attr_val == ((void*)0)) {
                VAR_26 = VAR_8;
            }
            else if (VAR_16 > VAR_27->p_value->attr_val.attr_len){


                VAR_26 = VAR_2;
            } else {
                UINT8 *VAR_28 = (UINT8 *)(VAR_27->p_value->attr_val.attr_val) + VAR_16;
                UINT16 VAR_29 = VAR_27->p_value->attr_val.attr_len - VAR_16;
                VAR_23 = (VAR_19 >= VAR_29) ? (VAR_29) : VAR_19;
                FUNC_0(VAR_25, VAR_28, VAR_23);
                VAR_26 = VAR_6;
            }

        } else {
            VAR_26 = VAR_4;
        }
    }

    *VAR_20 = VAR_23;
    *VAR_17 = VAR_25;
    return VAR_26;
}
