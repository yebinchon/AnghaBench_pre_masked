
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_state_machine {scalar_t__ pairwise; int addr; } ;
struct TYPE_2__ {scalar_t__ wpa_group; } ;
struct wpa_authenticator {TYPE_1__ conf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct wpa_authenticator*,int ) ;
 int FUNC_1 (struct wpa_state_machine*) ;

__attribute__((used)) static int FUNC_2(struct wpa_authenticator *VAR_1,
                    struct wpa_state_machine *VAR_2, int VAR_3)
{
    if (VAR_3 && VAR_1->conf.wpa_group != VAR_0) {
    } else if (!VAR_3 && VAR_2->pairwise != VAR_0) {
    } else {
        if (FUNC_0(VAR_1, VAR_2->addr) > 0)
            return 1;
    }





    FUNC_1(VAR_2);
    return 0;
}
