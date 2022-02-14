
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


typedef scalar_t__ tGATT_STATUS ;
struct TYPE_19__ {scalar_t__ uuid16; } ;
struct TYPE_20__ {int len; TYPE_4__ uu; } ;
struct TYPE_21__ {scalar_t__ s_handle; scalar_t__ e_handle; int value; int value_len; TYPE_5__ uuid; } ;
struct TYPE_16__ {scalar_t__ uuid16; } ;
struct TYPE_17__ {int len; TYPE_1__ uu; } ;
struct TYPE_18__ {scalar_t__ s_handle; scalar_t__ e_handle; TYPE_2__ uuid; } ;
struct TYPE_23__ {TYPE_6__ find_type_value; TYPE_3__ browse; } ;
typedef TYPE_8__ tGATT_CL_MSG ;
struct TYPE_15__ {int uuid32; } ;
struct TYPE_22__ {int len; TYPE_11__ uu; } ;
struct TYPE_24__ {size_t op_subtype; scalar_t__ s_handle; scalar_t__ e_handle; int clcb_idx; int p_tcb; TYPE_7__ uuid; } ;
typedef TYPE_9__ tGATT_CLCB ;
typedef int UINT8 ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int ,TYPE_8__*) ;
 int * VAR_6 ;
 scalar_t__* VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_9__*,scalar_t__,int *) ;
 int FUNC_3 (int ,TYPE_11__*,int ) ;
 int FUNC_4 (TYPE_8__*,int ,int) ;

void FUNC_5(tGATT_CLCB *VAR_8)
{
    UINT8 VAR_9 = VAR_6[VAR_8->op_subtype];
    tGATT_CL_MSG VAR_10;
    tGATT_STATUS VAR_11;

    if (VAR_8->s_handle <= VAR_8->e_handle && VAR_8->s_handle != 0) {
        FUNC_4(&VAR_10, 0, sizeof(tGATT_CL_MSG));

        VAR_10.browse.s_handle = VAR_8->s_handle;
        VAR_10.browse.e_handle = VAR_8->e_handle;

        if (VAR_7[VAR_8->op_subtype] != 0) {
            VAR_10.browse.uuid.len = 2;
            VAR_10.browse.uuid.uu.uuid16 = VAR_7[VAR_8->op_subtype];
        }

        if (VAR_8->op_subtype == VAR_1) {
            VAR_10.find_type_value.uuid.len = 2;
            VAR_10.find_type_value.uuid.uu.uuid16 = VAR_7[VAR_8->op_subtype];
            VAR_10.find_type_value.s_handle = VAR_8->s_handle;
            VAR_10.find_type_value.e_handle = VAR_8->e_handle;
            VAR_10.find_type_value.value_len = VAR_8->uuid.len;

            if (VAR_8->uuid.len == VAR_5) {
                VAR_10.find_type_value.value_len = VAR_4;
                FUNC_1(VAR_10.find_type_value.value, VAR_8->uuid.uu.uuid32);
            } else {
                FUNC_3 (VAR_10.find_type_value.value, &VAR_8->uuid.uu, VAR_8->uuid.len);
            }
        }

        VAR_11 = FUNC_0(VAR_8->p_tcb, VAR_8->clcb_idx, VAR_9, &VAR_10);

        if (VAR_11 != VAR_3 && VAR_11 != VAR_0) {
            FUNC_2(VAR_8, VAR_2, ((void*)0));
        }
    } else {
        FUNC_2(VAR_8, VAR_3, ((void*)0));
    }
}
