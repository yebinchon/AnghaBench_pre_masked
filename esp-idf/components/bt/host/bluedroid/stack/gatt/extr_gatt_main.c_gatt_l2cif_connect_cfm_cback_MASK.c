
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int mtu; int mtu_present; } ;
typedef TYPE_1__ tL2CAP_CFG_INFO ;
struct TYPE_10__ {int peer_bda; int att_lcid; } ;
typedef TYPE_2__ tGATT_TCB ;
typedef int UINT16 ;
struct TYPE_11__ {int local_mtu; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_7__ VAR_5 ;
 TYPE_2__* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_8(UINT16 VAR_6, UINT16 VAR_7)
{
    tGATT_TCB *VAR_8;
    tL2CAP_CFG_INFO VAR_9;


    if ((VAR_8 = FUNC_4(VAR_6)) != ((void*)0)) {
        FUNC_0("gatt_l2c_connect_cfm_cback result: %d ch_state: %d, lcid:0x%x", VAR_7, FUNC_5(VAR_8), VAR_8->att_lcid);


        if (FUNC_5(VAR_8) == VAR_1) {

            if (VAR_7 == VAR_3) {

                FUNC_6(VAR_8, VAR_0);


                FUNC_7(&VAR_9, 0, sizeof(tL2CAP_CFG_INFO));
                VAR_9.mtu_present = VAR_4;
                VAR_9.mtu = VAR_5.local_mtu;
                FUNC_1(VAR_6, &VAR_9);
            }

            else {
                FUNC_3(VAR_8->peer_bda, VAR_7, VAR_2);
            }
        } else {
            if (VAR_7 == VAR_3) {

                FUNC_2(VAR_6);
            }
        }
    }
}
