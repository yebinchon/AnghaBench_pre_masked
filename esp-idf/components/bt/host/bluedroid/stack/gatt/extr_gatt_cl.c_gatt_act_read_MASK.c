
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int tGATT_TCB ;
typedef int tGATT_READ_MULTI ;
struct TYPE_11__ {int uuid16; } ;
struct TYPE_16__ {TYPE_1__ uu; int len; } ;
struct TYPE_13__ {void* offset; int handle; } ;
struct TYPE_12__ {TYPE_7__ uuid; int e_handle; int s_handle; } ;
struct TYPE_14__ {int handle; TYPE_7__ read_multi; TYPE_3__ read_blob; TYPE_2__ browse; } ;
typedef TYPE_4__ tGATT_CL_MSG ;
struct TYPE_15__ {int op_subtype; int clcb_idx; int s_handle; int * p_attr_buf; int first_read_blob_after_read; int counter; int uuid; int e_handle; int * p_tcb; } ;
typedef TYPE_5__ tGATT_CLCB ;
typedef int tBT_UUID ;
typedef scalar_t__ UINT8 ;
typedef void* UINT16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;







 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int *,int ,scalar_t__,TYPE_4__*) ;
 int FUNC_3 (TYPE_5__*,scalar_t__,int *) ;
 int FUNC_4 (TYPE_7__*,int *,int) ;
 int FUNC_5 (TYPE_4__*,int ,int) ;

void FUNC_6 (tGATT_CLCB *VAR_11, UINT16 VAR_12)
{
    tGATT_TCB *VAR_13 = VAR_11->p_tcb;
    UINT8 VAR_14 = VAR_2;
    tGATT_CL_MSG VAR_15;
    UINT8 VAR_16 = 0;

    FUNC_5 (&VAR_15, 0, sizeof(tGATT_CL_MSG));

    switch (VAR_11->op_subtype) {
    case 132:
    case 133:
        VAR_16 = VAR_5;
        VAR_15.browse.s_handle = VAR_11->s_handle;
        VAR_15.browse.e_handle = VAR_11->e_handle;
        if (VAR_11->op_subtype == 133) {
            FUNC_4(&VAR_15.browse.uuid, &VAR_11->uuid, sizeof(tBT_UUID));
        } else {
            VAR_15.browse.uuid.len = VAR_9;
            VAR_15.browse.uuid.uu.uuid16 = VAR_8;
        }
        break;

    case 131:
    case 134:
        if (!VAR_11->counter) {
            VAR_16 = VAR_3;
            VAR_15.handle = VAR_11->s_handle;
        } else {
            if (!VAR_11->first_read_blob_after_read) {
                VAR_11->first_read_blob_after_read = VAR_10;
            } else {
                VAR_11->first_read_blob_after_read = VAR_0;
            }

            FUNC_0("gatt_act_read first_read_blob_after_read=%d",
                             VAR_11->first_read_blob_after_read);
            VAR_16 = VAR_4;
            VAR_15.read_blob.offset = VAR_12;
            VAR_15.read_blob.handle = VAR_11->s_handle;
        }
        VAR_11->op_subtype &= ~ 0x80;
        break;

    case 128:
        VAR_16 = VAR_4;
        VAR_15.read_blob.handle = VAR_11->s_handle;
        VAR_15.read_blob.offset = VAR_12;
        break;

    case 129:
        VAR_16 = VAR_6;
        FUNC_4 (&VAR_15.read_multi, VAR_11->p_attr_buf, sizeof(tGATT_READ_MULTI));
        break;

    case 130:
        VAR_16 = VAR_3;
        VAR_15.handle = VAR_11->s_handle;
        VAR_11->op_subtype &= ~ 0x90;
        break;

    default:
        FUNC_1("Unknown read type: %d", VAR_11->op_subtype);
        break;
    }

    if (VAR_16 != 0) {
        VAR_14 = FUNC_2(VAR_13, VAR_11->clcb_idx, VAR_16, &VAR_15);
    }

    if ( VAR_16 == 0 || (VAR_14 != VAR_7 && VAR_14 != VAR_1)) {
        FUNC_3(VAR_11, VAR_14, ((void*)0));
    }
}
