
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTA_SYS_CONN_STATUS ;
struct TYPE_4__ {int link_policy; int peer_bdaddr; } ;
typedef TYPE_1__ tBTA_DM_PEER_DEVICE ;
typedef int UINT8 ;
typedef int UINT32 ;
typedef int UINT16 ;
struct TYPE_5__ {int cur_policy; int role_policy_mask; } ;
typedef scalar_t__ BD_ADDR ;


 int FUNC_0 (char*,int,int) ;




 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 TYPE_1__* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(tBTA_SYS_CONN_STATUS VAR_4, UINT8 VAR_5, UINT8 VAR_6, BD_ADDR VAR_7)
{
    tBTA_DM_PEER_DEVICE *VAR_8 = ((void*)0);
    UINT16 VAR_9 = VAR_6;
    UINT32 VAR_10 = (UINT32)(1 << VAR_5);

    if (VAR_7) {
        VAR_8 = FUNC_3(VAR_7);
    }

    FUNC_0(" bta_dm_policy_cback cmd:%d, policy:0x%x",
                     VAR_4, VAR_9);
    switch (VAR_4) {
    case 128:
        if (!VAR_8) {
            return;
        }

        VAR_8->link_policy |= VAR_9;
        FUNC_2(VAR_8->peer_bdaddr, &(VAR_8->link_policy));
        break;

    case 131:
        if (!VAR_8) {
            return;
        }

        VAR_8->link_policy &= (~VAR_9);
        FUNC_2(VAR_8->peer_bdaddr, &(VAR_8->link_policy));


        if (VAR_9 & (VAR_2 | VAR_1)) {

            FUNC_4(VAR_8->peer_bdaddr);
        }

        break;

    case 129:

        VAR_3.role_policy_mask &= ~VAR_10;
        if (0 == VAR_3.role_policy_mask) {

            VAR_3.cur_policy |= VAR_0;
            FUNC_1(VAR_3.cur_policy);
        }
        break;

    case 130:

        VAR_3.role_policy_mask |= VAR_10;
        VAR_3.cur_policy &= ~VAR_0;
        FUNC_1(VAR_3.cur_policy);
        break;
    }
}
