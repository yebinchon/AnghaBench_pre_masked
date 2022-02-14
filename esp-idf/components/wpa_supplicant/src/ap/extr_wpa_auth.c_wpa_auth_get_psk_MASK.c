
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct wpa_authenticator {int dummy; } ;
struct hostapd_data {int conf; } ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int const*,int const*) ;

__attribute__((used)) static inline const u8 * FUNC_2(struct wpa_authenticator *VAR_0,
                      const u8 *VAR_1, const u8 *VAR_2)
{
    struct hostapd_data *VAR_3 = (struct hostapd_data *)FUNC_0();

    if (!VAR_3){
        return ((void*)0);
    }

    return (u8*)FUNC_1(VAR_3->conf, VAR_1, VAR_2);
}
