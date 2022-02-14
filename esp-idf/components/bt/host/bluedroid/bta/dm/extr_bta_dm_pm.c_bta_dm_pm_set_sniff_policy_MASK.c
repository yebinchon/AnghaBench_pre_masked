
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int link_policy; int peer_bdaddr; } ;
typedef TYPE_1__ tBTA_DM_PEER_DEVICE ;
typedef int UINT16 ;
struct TYPE_5__ {int cur_policy; } ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int ,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(tBTA_DM_PEER_DEVICE *VAR_4, BOOLEAN VAR_5)
{
    UINT16 VAR_6;

    if (!VAR_4) {
        return;
    }

    if (VAR_5) {
        VAR_6 = VAR_3.cur_policy &
                         (VAR_1 |
                          VAR_0 |
                          VAR_2);

    } else {

        VAR_6 = VAR_3.cur_policy;
    }


    if (VAR_5) {
        FUNC_1(VAR_4->peer_bdaddr);
    }


    VAR_4->link_policy = VAR_6;
    FUNC_0(VAR_4->peer_bdaddr, &VAR_6);

}
