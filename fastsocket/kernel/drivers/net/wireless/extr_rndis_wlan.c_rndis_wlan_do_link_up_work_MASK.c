
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int net; } ;
struct rndis_wlan_private {scalar_t__ infra_mode; int connected; int bssid; int work; int workqueue; int work_pending; } ;
struct ndis_80211_assoc_info {int offset_resp_ies; int resp_ie_length; int offset_req_ies; int req_ie_length; } ;
typedef int bssid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int ,int *,int *,int,int *,int,int ,int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int *,int *,int *,int,int *,int,int ) ;
 int FUNC_4 (struct usbnet*,struct ndis_80211_assoc_info*,int) ;
 int FUNC_5 (struct usbnet*,int *) ;
 struct rndis_wlan_private* FUNC_6 (struct usbnet*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ndis_80211_assoc_info*) ;
 struct ndis_80211_assoc_info* FUNC_9 (int,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int *,int) ;
 int FUNC_12 (int *,int ,int) ;
 int FUNC_13 (int ,char*,int *,char*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (struct usbnet*,int *,int*) ;
 int FUNC_17 (struct usbnet*,int *,struct ndis_80211_assoc_info*) ;
 int FUNC_18 (int ,int *) ;
 int FUNC_19 (struct usbnet*) ;

__attribute__((used)) static void FUNC_20(struct usbnet *VAR_6)
{
 struct rndis_wlan_private *VAR_7 = FUNC_6(VAR_6);
 struct ndis_80211_assoc_info *VAR_8 = ((void*)0);
 u8 VAR_9[VAR_1];
 int VAR_10, VAR_11;
 u8 *VAR_12, *VAR_13;
 int VAR_14, VAR_15;
 bool VAR_16 = 0;
 bool VAR_17;

 if (VAR_7->infra_mode == VAR_4 && VAR_7->connected) {


  VAR_16 = 1;
 }

 VAR_11 = 0;
 VAR_10 = 0;
 VAR_12 = ((void*)0);
 VAR_13 = ((void*)0);

 if (VAR_7->infra_mode == VAR_4) {
  VAR_8 = FUNC_9(VAR_0, VAR_2);
  if (!VAR_8) {

   FUNC_18(VAR_5, &VAR_7->work_pending);
   FUNC_15(VAR_7->workqueue, &VAR_7->work);
   return;
  }


  VAR_14 = FUNC_4(VAR_6, VAR_8, VAR_0);
  if (!VAR_14) {
   VAR_11 = FUNC_10(VAR_8->req_ie_length);
   if (VAR_11 > 0) {
    VAR_15 = FUNC_10(VAR_8->offset_req_ies);

    if (VAR_15 > VAR_0)
     VAR_15 = VAR_0;

    VAR_12 = (u8 *)VAR_8 + VAR_15;

    if (VAR_15 + VAR_11 > VAR_0)
     VAR_11 =
      VAR_0 - VAR_15;
   }

   VAR_10 = FUNC_10(VAR_8->resp_ie_length);
   if (VAR_10 > 0) {
    VAR_15 = FUNC_10(VAR_8->offset_resp_ies);

    if (VAR_15 > VAR_0)
     VAR_15 = VAR_0;

    VAR_13 = (u8 *)VAR_8 + VAR_15;

    if (VAR_15 + VAR_10 > VAR_0)
     VAR_10 =
      VAR_0 - VAR_15;
   }
  } else {




   FUNC_8(VAR_8);
   VAR_8 = ((void*)0);
  }
 } else if (FUNC_0(VAR_7->infra_mode != VAR_3))
  return;

 VAR_14 = FUNC_5(VAR_6, VAR_9);
 if (VAR_14 < 0)
  FUNC_12(VAR_9, 0, sizeof(VAR_9));

 FUNC_13(VAR_6->net, "link up work: [%pM]%s\n",
     VAR_9, VAR_16 ? " roamed" : "");
 VAR_17 = 0;
 FUNC_16(VAR_6, VAR_9, &VAR_17);

 if (!FUNC_7(VAR_9) && !VAR_17) {



  FUNC_17(VAR_6, VAR_9, VAR_8);
 }

 if (VAR_7->infra_mode == VAR_4) {
  if (!VAR_16)
   FUNC_1(VAR_6->net, VAR_9, VAR_12,
      VAR_11, VAR_13,
      VAR_10, 0, VAR_2);
  else
   FUNC_3(VAR_6->net, ((void*)0), VAR_9,
     VAR_12, VAR_11,
     VAR_13, VAR_10, VAR_2);
 } else if (VAR_7->infra_mode == VAR_3)
  FUNC_2(VAR_6->net, VAR_9, VAR_2);

 if (VAR_8 != ((void*)0))
  FUNC_8(VAR_8);

 VAR_7->connected = 1;
 FUNC_11(VAR_7->bssid, VAR_9, VAR_1);

 FUNC_19(VAR_6);
 FUNC_14(VAR_6->net);
}
