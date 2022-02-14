
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_eapol_ie_parse {int const* wpa_ie; int wpa_ie_len; int const* pmkid; int const* gtk; int gtk_len; int const* mac_addr; int mac_addr_len; int const* smk; int smk_len; int const* nonce; int nonce_len; int const* lifetime; int lifetime_len; int const* error; int error_len; int const* igtk; int igtk_len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int const*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_1(const u8 *VAR_12, const u8 *VAR_13,
        struct wpa_eapol_ie_parse *VAR_14)
{
 if (VAR_12[1] == 0)
  return 1;

 if (VAR_12[1] >= 6 &&
     FUNC_0(VAR_12 + 2) == VAR_10 &&
     VAR_12[2 + VAR_11] == 1 &&
     VAR_12[2 + VAR_11 + 1] == 0) {
  VAR_14->wpa_ie = VAR_12;
  VAR_14->wpa_ie_len = VAR_12[1] + 2;
  return 0;
 }

 if (VAR_12 + 1 + VAR_9 < VAR_13 &&
     VAR_12[1] >= VAR_9 + VAR_0 &&
     FUNC_0(VAR_12 + 2) == VAR_7) {
  VAR_14->pmkid = VAR_12 + 2 + VAR_9;
  return 0;
 }

 if (VAR_12[1] > VAR_9 + 2 &&
     FUNC_0(VAR_12 + 2) == VAR_2) {
  VAR_14->gtk = VAR_12 + 2 + VAR_9;
  VAR_14->gtk_len = VAR_12[1] - VAR_9;
  return 0;
 }

 if (VAR_12[1] > VAR_9 + 2 &&
     FUNC_0(VAR_12 + 2) == VAR_5) {
  VAR_14->mac_addr = VAR_12 + 2 + VAR_9;
  VAR_14->mac_addr_len = VAR_12[1] - VAR_9;
  return 0;
 }
 return 0;
}
