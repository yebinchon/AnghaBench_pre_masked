
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_state_machine {scalar_t__ pairwise; int wpa_key_mgmt; int SNonce; int ANonce; int addr; TYPE_1__* wpa_auth; } ;
struct wpa_ptk {int dummy; } ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct wpa_state_machine*,int const*,struct wpa_ptk*,size_t) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int const*,int ,char*,int ,int ,int ,int ,int *,size_t,int ) ;

__attribute__((used)) static int FUNC_4(struct wpa_state_machine *VAR_2, const u8 *VAR_3,
              struct wpa_ptk *VAR_4)
{
    size_t VAR_5 = VAR_2->pairwise != VAR_1 ? 48 : 64;





    FUNC_3(VAR_3, VAR_0, "Pairwise key expansion",
               VAR_2->wpa_auth->addr, VAR_2->addr, VAR_2->ANonce, VAR_2->SNonce,
               (u8 *) VAR_4, VAR_5,
               FUNC_2(VAR_2->wpa_key_mgmt));

    return 0;
}
