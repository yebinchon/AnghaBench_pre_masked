
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tSMP_CB ;
typedef int * UINT8 ;
struct TYPE_8__ {scalar_t__ own_addr_type; int static_rand_addr; int private_addr; } ;
struct TYPE_9__ {TYPE_1__ addr_mgnt_cb; } ;
struct TYPE_13__ {TYPE_2__ ble_ctr_cb; } ;
struct TYPE_12__ {TYPE_4__* (* get_address ) () ;} ;
struct TYPE_11__ {int address; } ;
struct TYPE_10__ {int offset; int len; } ;
typedef TYPE_3__ BT_HDR ;


 int FUNC_0 (int **,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int **,int) ;
 int FUNC_3 (int *) ;
 TYPE_7__ VAR_4 ;
 TYPE_6__* FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (int) ;
 TYPE_4__* FUNC_7 () ;

__attribute__((used)) static BT_HDR *FUNC_8(UINT8 VAR_5, tSMP_CB *VAR_6)
{
    BT_HDR *VAR_7 = ((void*)0);
    UINT8 *VAR_8;

    FUNC_3(VAR_5);
    FUNC_3(VAR_6);
    FUNC_1("smp_build_id_addr_cmd\n");
    if ((VAR_7 = (BT_HDR *)FUNC_6(sizeof(BT_HDR) + VAR_2 + VAR_1)) != ((void*)0)) {
        VAR_8 = (UINT8 *)(VAR_7 + 1) + VAR_1;

        FUNC_2 (VAR_8, VAR_3);




        if(VAR_4.ble_ctr_cb.addr_mgnt_cb.own_addr_type == VAR_0 && FUNC_5(VAR_4.ble_ctr_cb.addr_mgnt_cb.static_rand_addr, VAR_4.ble_ctr_cb.addr_mgnt_cb.private_addr,6) == 0) {
            FUNC_2 (VAR_8, 0x01);
            FUNC_0 (VAR_8, VAR_4.ble_ctr_cb.addr_mgnt_cb.static_rand_addr);
        } else

        {
            FUNC_2 (VAR_8, 0);
            FUNC_0 (VAR_8, FUNC_4()->get_address()->address);
        }

        VAR_7->offset = VAR_1;
        VAR_7->len = VAR_2;
    }

    return VAR_7;
}
