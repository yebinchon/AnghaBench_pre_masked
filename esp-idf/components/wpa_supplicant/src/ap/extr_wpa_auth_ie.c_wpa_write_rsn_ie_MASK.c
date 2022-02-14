
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct wpa_auth_config {int wpa_group; int rsn_pairwise; int wpa_key_mgmt; scalar_t__ ieee80211w; scalar_t__ wmm_enabled; scalar_t__ peerkey; scalar_t__ rsn_preauth; } ;
struct rsn_ie_hdr {int len; int * version; int elem_id; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (int,int,int,int) ;
 int VAR_14 ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int const*,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ VAR_30 ;
 scalar_t__ FUNC_7 (int ,int) ;
 int FUNC_8 (int ,char*,int) ;

int FUNC_9(struct wpa_auth_config *VAR_31, u8 *VAR_32, size_t VAR_33,
       const u8 *VAR_34)
{
 struct rsn_ie_hdr *VAR_35;
 int VAR_36, VAR_37;
 u8 *VAR_38, *VAR_39;
 u16 VAR_40;
 u32 VAR_41;

 VAR_35 = (struct rsn_ie_hdr *) VAR_32;
 VAR_35->elem_id = VAR_16;
 FUNC_3(VAR_35->version, VAR_15);
 VAR_38 = (u8 *) (VAR_35 + 1);

 VAR_41 = FUNC_7(VAR_29, VAR_31->wpa_group);
 if (VAR_41 == 0) {
  FUNC_8( VAR_1, "Invalid group cipher (%d).",
      VAR_31->wpa_group);
  return -1;
 }
 FUNC_2(VAR_38, VAR_41);
 VAR_38 += VAR_14;

 VAR_36 = 0;
 VAR_39 = VAR_38;
 VAR_38 += 2;
 VAR_37 = FUNC_6(VAR_38, VAR_31->rsn_pairwise);
 VAR_36 += VAR_37;
 VAR_38 += VAR_37 * VAR_14;
 if (VAR_36 == 0) {
  FUNC_8( VAR_1, "Invalid pairwise cipher (%d).",
      VAR_31->rsn_pairwise);
  return -1;
 }
 FUNC_3(VAR_39, VAR_36);

 VAR_36 = 0;
 VAR_39 = VAR_38;
 VAR_38 += 2;
 if (VAR_31->wpa_key_mgmt & VAR_24) {
  FUNC_2(VAR_38, VAR_11);
  VAR_38 += VAR_14;
  VAR_36++;
 }
 if (VAR_31->wpa_key_mgmt & VAR_26) {
  FUNC_2(VAR_38, VAR_8);
  VAR_38 += VAR_14;
  VAR_36++;
 }
 if (VAR_36 == 0) {
  FUNC_8( VAR_1, "Invalid key management type (%d).",
      VAR_31->wpa_key_mgmt);
  return -1;
 }
 FUNC_3(VAR_39, VAR_36);


 VAR_40 = 0;
 if (VAR_31->rsn_preauth)
  VAR_40 |= VAR_20;
 if (VAR_31->peerkey)
  VAR_40 |= VAR_19;
 if (VAR_31->wmm_enabled) {

  VAR_40 |= (VAR_13 << 2);
 }
 FUNC_3(VAR_38, VAR_40);
 VAR_38 += 2;

 if (VAR_34) {
  if (VAR_38 + 2 + VAR_3 > VAR_32 + VAR_33)
   return -1;

  FUNC_3(VAR_38, 1);
  VAR_38 += 2;
  FUNC_4(VAR_38, VAR_34, VAR_3);
  VAR_38 += VAR_3;
 }
 VAR_35->len = (VAR_38 - VAR_32) - 2;

 return VAR_38 - VAR_32;
}
