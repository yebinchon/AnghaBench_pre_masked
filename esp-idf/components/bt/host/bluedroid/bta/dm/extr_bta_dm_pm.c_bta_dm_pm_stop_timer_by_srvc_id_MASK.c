
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
struct TYPE_4__ {TYPE_1__* pm_timer; } ;
struct TYPE_3__ {scalar_t__* srvc_id; int * pm_action; int peer_bdaddr; scalar_t__ in_use; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_2(BD_ADDR VAR_4, UINT8 VAR_5)
{
    for (int VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        if (VAR_3.pm_timer[VAR_6].in_use && !FUNC_0(VAR_3.pm_timer[VAR_6].peer_bdaddr, VAR_4)) {
            for (int VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
                if (VAR_3.pm_timer[VAR_6].srvc_id[VAR_7] == VAR_5) {
                    FUNC_1(&VAR_3.pm_timer[VAR_6], VAR_7);
                    VAR_3.pm_timer[VAR_6].pm_action[VAR_7] = VAR_2;
                    break;
                }
            }
        }
    }
}
