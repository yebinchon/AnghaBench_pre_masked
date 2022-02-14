
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
struct TYPE_4__ {TYPE_1__* pm_timer; } ;
struct TYPE_3__ {scalar_t__* srvc_id; scalar_t__* pm_action; int peer_bdaddr; scalar_t__ in_use; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (TYPE_1__*,scalar_t__ const) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(BD_ADDR VAR_4, UINT8 VAR_5)
{
    const UINT8 VAR_6 = FUNC_2(VAR_5);
    if (VAR_6 == VAR_1) {
        return;
    }

    for (int VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
        if (VAR_3.pm_timer[VAR_7].in_use && !FUNC_0(VAR_3.pm_timer[VAR_7].peer_bdaddr, VAR_4)) {
            if (VAR_3.pm_timer[VAR_7].srvc_id[VAR_6] != VAR_2) {
                FUNC_1(&VAR_3.pm_timer[VAR_7], VAR_6);






                VAR_3.pm_timer[VAR_7].pm_action[VAR_6] = VAR_5;
            }
            break;
        }
    }
}
