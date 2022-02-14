
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_sm {scalar_t__ pairwise_cipher; int key_mgmt; int snonce; int bssid; int own_addr; int pmk_len; int pmk; } ;
struct wpa_ptk {int dummy; } ;
struct wpa_eapol_key {int key_nonce; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*,int ,int ,int ,int ,int *,size_t,int ) ;

int FUNC_2(struct wpa_sm *VAR_1, const unsigned char *VAR_2,
              const struct wpa_eapol_key *VAR_3,
              struct wpa_ptk *VAR_4)
{
    size_t VAR_5 = VAR_1->pairwise_cipher == VAR_0 ? 48 : 64;

    FUNC_1(VAR_1->pmk, VAR_1->pmk_len, "Pairwise key expansion",
               VAR_1->own_addr, VAR_1->bssid, VAR_1->snonce, VAR_3->key_nonce,
               (u8 *) VAR_4, VAR_5,
               FUNC_0(VAR_1->key_mgmt));
    return 0;
}
