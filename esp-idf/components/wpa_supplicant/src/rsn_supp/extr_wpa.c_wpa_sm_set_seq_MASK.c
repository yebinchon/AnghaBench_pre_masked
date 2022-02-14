
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {scalar_t__* seq; } ;
struct TYPE_3__ {scalar_t__* seq; } ;
struct wpa_sm {scalar_t__ proto; TYPE_2__ install_gtk; TYPE_1__ install_ptk; } ;
struct wpa_eapol_key {scalar_t__* key_rsc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (int ,char*,scalar_t__*,int) ;

void FUNC_3(struct wpa_sm *VAR_3, struct wpa_eapol_key *VAR_4, u8 VAR_5)
{
    u8 *VAR_6, *VAR_7;
    u8 VAR_8[VAR_1];

    FUNC_1(VAR_8, VAR_1);

    if (VAR_3->proto == VAR_2) {
        VAR_6 = VAR_8;
    } else {
        VAR_6 = VAR_4->key_rsc;
        FUNC_2(VAR_0, "WPA: RSC", VAR_6, VAR_1);
    }

    VAR_7=(VAR_5) ? (VAR_3->install_ptk).seq : (VAR_3->install_gtk).seq;
    FUNC_0(VAR_7, VAR_6, VAR_1);
}
