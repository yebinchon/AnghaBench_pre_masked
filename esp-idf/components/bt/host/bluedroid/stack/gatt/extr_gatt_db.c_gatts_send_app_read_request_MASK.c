
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_13__ {int tcb_idx; } ;
typedef TYPE_2__ tGATT_TCB ;
typedef int tGATT_STATUS ;
struct TYPE_14__ {int gatt_if; } ;
typedef TYPE_3__ tGATT_SR_REG ;
struct TYPE_12__ {void* need_rsp; void* offset; void* is_long; void* handle; } ;
struct TYPE_15__ {TYPE_1__ read_req; } ;
typedef TYPE_4__ tGATTS_DATA ;
typedef size_t UINT8 ;
typedef int UINT32 ;
typedef void* UINT16 ;
struct TYPE_11__ {TYPE_3__* sr_reg; } ;
typedef void* BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_10__ VAR_6 ;
 int FUNC_1 (TYPE_2__*,size_t,void*) ;
 size_t FUNC_2 (void*) ;
 int FUNC_3 (void*,int ,int ,TYPE_4__*) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_4__*,int ,int) ;

__attribute__((used)) static tGATT_STATUS FUNC_6(tGATT_TCB *VAR_7, UINT8 VAR_8,
        UINT16 VAR_9, UINT16 VAR_10, UINT32 VAR_11, BOOLEAN VAR_12)
{
    tGATTS_DATA VAR_13;
    UINT8 VAR_14;
    tGATT_SR_REG *VAR_15;
    UINT16 VAR_16;

    VAR_14 = FUNC_2(VAR_9);
    VAR_15 = &VAR_6.sr_reg[VAR_14];
    VAR_16 = FUNC_0(VAR_7->tcb_idx, VAR_15->gatt_if);

    if (VAR_11 == 0) {
        VAR_11 = FUNC_1(VAR_7, VAR_8, VAR_9);
        FUNC_4(VAR_7, VAR_15->gatt_if, VAR_5, VAR_5);
    }

    if (VAR_11 != 0 ) {
        FUNC_5(&VAR_13, 0, sizeof(tGATTS_DATA));

        VAR_13.read_req.handle = VAR_9;
        VAR_13.read_req.is_long = (BOOLEAN)(VAR_8 == VAR_3);
        VAR_13.read_req.offset = VAR_10;
        VAR_13.read_req.need_rsp = VAR_12;

        FUNC_3(VAR_16,
                                  VAR_11, VAR_0, &VAR_13);

        if (VAR_12) {
            return (tGATT_STATUS) VAR_2;
        }
        else{
            return (tGATT_STATUS) VAR_4;
        }
    } else {
        return (tGATT_STATUS) VAR_1;
    }

}
