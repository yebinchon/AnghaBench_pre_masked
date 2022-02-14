
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_state_machine {int group; struct wpa_authenticator* wpa_auth; int addr; } ;
struct wpa_authenticator {int group; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct wpa_state_machine*) ;

struct wpa_state_machine *
FUNC_3(struct wpa_authenticator *VAR_1, const u8 *VAR_2)
{
    struct wpa_state_machine *VAR_3;

    VAR_3 = (struct wpa_state_machine *)FUNC_1(sizeof(struct wpa_state_machine));
    if (VAR_3 == ((void*)0))
        return ((void*)0);
    FUNC_0(VAR_3->addr, VAR_2, VAR_0);

    VAR_3->wpa_auth = VAR_1;
    VAR_3->group = VAR_1->group;
    FUNC_2(VAR_3);

    return VAR_3;
}
