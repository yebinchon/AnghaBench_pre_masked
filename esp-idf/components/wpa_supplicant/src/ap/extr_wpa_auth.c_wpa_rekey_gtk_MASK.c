
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_group {scalar_t__ changed; int GTKReKey; struct wpa_group* next; } ;
struct TYPE_2__ {scalar_t__ wpa_group_rekey; } ;
struct wpa_authenticator {TYPE_1__ conf; struct wpa_group* group; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,void (*) (void*,void*),struct wpa_authenticator*,int *) ;
 int FUNC_1 (struct wpa_authenticator*,struct wpa_group*) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, void *VAR_3)
{
    struct wpa_authenticator *VAR_4 = VAR_2;
    struct wpa_group *VAR_5;

    for (VAR_5 = VAR_4->group; VAR_5; VAR_5 = VAR_5->next) {
        VAR_5->GTKReKey = VAR_1;
        do {
            VAR_5->changed = VAR_0;
            FUNC_1(VAR_4, VAR_5);
        } while (VAR_5->changed);
    }

    if (VAR_4->conf.wpa_group_rekey) {
        FUNC_0(VAR_4->conf.wpa_group_rekey,
                       0, FUNC_2, VAR_4, ((void*)0));
    }
}
