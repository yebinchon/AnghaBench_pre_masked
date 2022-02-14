
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_eapol_ie_parse {int const* rsn_ie; int rsn_ie_len; int const* mdie; int mdie_len; int const* ftie; int ftie_len; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int FUNC_0 (struct wpa_eapol_ie_parse*,int ,int) ;
 int FUNC_1 (int ,char*,int const*,int) ;
 int FUNC_2 (int ,char*,int const*,size_t) ;
 int FUNC_3 (int const*,int const*,struct wpa_eapol_ie_parse*) ;
 int FUNC_4 (int ,char*,int const,int const,int) ;

int FUNC_5(const u8 *VAR_5, size_t VAR_6, struct wpa_eapol_ie_parse *VAR_7)
{
 const u8 *VAR_8, *VAR_9;
 int VAR_10 = 0;

 FUNC_0(VAR_7, 0, sizeof(*VAR_7));
 for (VAR_8 = VAR_5, VAR_9 = VAR_8 + VAR_6; VAR_8 + 1 < VAR_9; VAR_8 += 2 + VAR_8[1]) {
  if (VAR_8[0] == 0xdd &&
      ((VAR_8 == VAR_5 + VAR_6 - 1) || VAR_8[1] == 0)) {

   break;
  }
  if (VAR_8 + 2 + VAR_8[1] > VAR_9) {
   FUNC_4( VAR_0, "WPA: EAPOL-Key Key Data "
       "underflow (ie=%d len=%d pos=%d)",
       VAR_8[0], VAR_8[1], (int) (VAR_8 - VAR_5));
   FUNC_2(VAR_0, "WPA: Key Data",
     VAR_5, VAR_6);
   VAR_10 = -1;
   break;
  }
  if (*VAR_8 == VAR_3) {
   VAR_7->rsn_ie = VAR_8;
   VAR_7->rsn_ie_len = VAR_8[1] + 2;
  } else if (*VAR_8 == VAR_4) {
   VAR_10 = FUNC_3(VAR_8, VAR_9, VAR_7);
   if (VAR_10 < 0)
    break;
   if (VAR_10 > 0) {
    VAR_10 = 0;
    break;
   }
  } else {
   FUNC_1(VAR_0, "WPA: Unrecognized EAPOL-Key "
        "Key Data IE", VAR_8, 2 + VAR_8[1]);
  }
 }

 return VAR_10;
}
