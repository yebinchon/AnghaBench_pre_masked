
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ len; scalar_t__ offset; scalar_t__ value; int handle; } ;
typedef TYPE_1__ tGATT_VALUE ;
struct TYPE_9__ {scalar_t__ payload_size; } ;
typedef TYPE_2__ tGATT_TCB ;
struct TYPE_10__ {scalar_t__ op_subtype; scalar_t__ start_offset; scalar_t__ counter; int clcb_idx; int s_handle; scalar_t__ p_attr_buf; } ;
typedef TYPE_3__ tGATT_CLCB ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_3__*,scalar_t__,int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,int ,int ,scalar_t__,scalar_t__,scalar_t__) ;

void FUNC_3(tGATT_TCB *VAR_5, tGATT_CLCB *VAR_6)
{
    tGATT_VALUE *VAR_7 = (tGATT_VALUE *)VAR_6->p_attr_buf;
    UINT16 VAR_8, VAR_9;
    UINT8 VAR_10 = VAR_2;
    UINT8 VAR_11 = VAR_6->op_subtype;

    FUNC_0("gatt_send_prepare_write type=0x%x", VAR_11 );
    VAR_8 = VAR_7->len - VAR_7->offset;

    if (VAR_8 > (VAR_5->payload_size - VAR_3)) {
        VAR_8 = VAR_5->payload_size - VAR_3;
    }

    VAR_6->s_handle = VAR_7->handle;

    VAR_9 = VAR_7->offset;
    if (VAR_11 == VAR_4) {
        VAR_9 += VAR_6->start_offset;
    }

    FUNC_0("offset =0x%x len=%d", VAR_9, VAR_8 );

    VAR_10 = FUNC_2(VAR_5,
                             VAR_6->clcb_idx,
                             VAR_1,
                             VAR_7->handle,
                             VAR_8,
                             VAR_9,
                             VAR_7->value + VAR_7->offset);


    VAR_6->counter = VAR_8;

    if (VAR_10 != VAR_2 && VAR_10 != VAR_0) {
        FUNC_1(VAR_6, VAR_10, ((void*)0));
    }
}
