
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int io_cap; int oob_data; int auth_req; int bd_addr; } ;
typedef TYPE_2__ tBTM_SP_IO_RSP ;
typedef int tBTM_SP_EVT_DATA ;
struct TYPE_8__ {int rmt_io_caps; int rmt_auth_req; int dev_class; int trusted_mask; } ;
typedef TYPE_3__ tBTM_SEC_DEV_REC ;
typedef int UINT8 ;
struct TYPE_6__ {int (* p_sp_callback ) (int ,int *) ;} ;
struct TYPE_9__ {scalar_t__ pairing_state; TYPE_1__ api; int pairing_flags; int connecting_dc; int connecting_bda; int pairing_bda; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int,int *) ;
 TYPE_5__ VAR_7 ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int *) ;

void FUNC_10 (UINT8 *VAR_8)
{
    tBTM_SEC_DEV_REC *VAR_9;
    tBTM_SP_IO_RSP VAR_10;

    FUNC_1 (VAR_10.bd_addr, VAR_8);
    FUNC_2 (VAR_10.io_cap, VAR_8);
    FUNC_2 (VAR_10.oob_data, VAR_8);
    FUNC_2 (VAR_10.auth_req, VAR_8);


    VAR_9 = FUNC_3 (VAR_10.bd_addr);


    if (VAR_7.pairing_state == VAR_3) {
        FUNC_8 (VAR_7.pairing_bda, VAR_10.bd_addr, VAR_0);

        FUNC_5 (VAR_4);


        FUNC_0(VAR_9->trusted_mask);


        FUNC_4();
    }


    FUNC_6 (VAR_10.bd_addr);







    if (!FUNC_7 (VAR_10.bd_addr, VAR_7.connecting_bda, VAR_0)) {
        FUNC_8 (VAR_9->dev_class, VAR_7.connecting_dc, VAR_6);
    }


    if (VAR_7.pairing_state == VAR_4
            && (VAR_10.auth_req & VAR_1) ) {
        VAR_7.pairing_flags |= VAR_2;
    }


    VAR_9->rmt_io_caps = VAR_10.io_cap;
    VAR_9->rmt_auth_req = VAR_10.auth_req;

    if (VAR_7.api.p_sp_callback) {
        (*VAR_7.api.p_sp_callback) (VAR_5, (tBTM_SP_EVT_DATA *)&VAR_10);
    }
}
