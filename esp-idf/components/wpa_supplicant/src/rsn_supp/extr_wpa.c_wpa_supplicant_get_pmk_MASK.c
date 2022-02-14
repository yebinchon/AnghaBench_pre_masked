
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_sm {int pmk_len; scalar_t__ key_mgmt; scalar_t__ proto; int bssid; struct rsn_pmksa_cache_entry* cur_pmksa; int pmksa; int network_ctx; int own_addr; int pmk; scalar_t__ xxkey_len; } ;
struct rsn_pmksa_cache_entry {int pmkid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int const*,int ,int ) ;
 struct rsn_pmksa_cache_entry* FUNC_2 (int ,int ,int,int *,int ,unsigned char const*,int ,int ,scalar_t__) ;
 struct rsn_pmksa_cache_entry* FUNC_3 (int ,unsigned char const*,int const*,int *) ;
 int FUNC_4 (int ,char*,int const*,int ) ;
 int FUNC_5 (int ,char*,int ,int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,char*) ;
 int * FUNC_10 (struct wpa_sm*,int ,int *,int ,size_t*,int *) ;
 int FUNC_11 (struct wpa_sm*,int ,int ,int *,size_t) ;
 int FUNC_12 (struct wpa_sm*) ;

__attribute__((used)) static int FUNC_13(struct wpa_sm *VAR_9,
        const unsigned char *VAR_10,
        const u8 *VAR_11)
{
    int VAR_12 = 0;

    if (VAR_11 && !VAR_9->cur_pmksa) {




        VAR_9->cur_pmksa = FUNC_3(VAR_9->pmksa, VAR_10, VAR_11,
                ((void*)0));
        if (VAR_9->cur_pmksa) {
            FUNC_9(VAR_2,
                    "RSN: found matching PMKID from PMKSA cache");
        } else {
            FUNC_9( VAR_2,
                    "RSN: no matching PMKID found");
            VAR_12 = 1;
        }
    }

    if (VAR_11 && VAR_9->cur_pmksa &&
            FUNC_1(VAR_11, VAR_9->cur_pmksa->pmkid, VAR_5) == 0) {

        FUNC_4(VAR_2, "RSN: matched PMKID", VAR_11, VAR_5);
        FUNC_12(VAR_9);
        FUNC_5(VAR_2, "RSN: PMK from PMKSA cache",
                VAR_9->pmk, VAR_9->pmk_len);




    } else if (FUNC_8(VAR_9->key_mgmt)) {
        int VAR_13 = 0, VAR_14;
        VAR_14 = VAR_6;



        if(!VAR_9->pmk_len) {
            VAR_13 = -1;
        }

        if (VAR_13 == 0) {
            struct rsn_pmksa_cache_entry *VAR_15 = ((void*)0);
            FUNC_5(VAR_2, "WPA: PMK from EAPOL state "
                    "machines", VAR_9->pmk, VAR_14);
            VAR_9->pmk_len = VAR_14;

            if (VAR_9->proto == VAR_8 &&
                    !FUNC_7(VAR_9->key_mgmt) &&
                    !FUNC_6(VAR_9->key_mgmt)) {
                VAR_15 = FUNC_2(VAR_9->pmksa,
                        VAR_9->pmk, VAR_14,
                        ((void*)0), 0,
           VAR_10, VAR_9->own_addr,
           VAR_9->network_ctx,
           VAR_9->key_mgmt);
   }
   if (!VAR_9->cur_pmksa && VAR_11 &&
       FUNC_3(VAR_9->pmksa, VAR_10, VAR_11, ((void*)0)))
   {
    FUNC_9( VAR_2,
     "RSN: the new PMK matches with the "
     "PMKID");
    VAR_12 = 0;
   } else if (VAR_15 && !VAR_9->cur_pmksa && VAR_11) {







    FUNC_9( VAR_3,
     "RSN: PMKID mismatch - authentication server may have derived different MSK?!");
    return -1;
   }

   if (!VAR_9->cur_pmksa)
    VAR_9->cur_pmksa = VAR_15;
  } else {
   FUNC_9( VAR_4,
    "WPA: Failed to get master session key from "
    "EAPOL state machines - key handshake "
    "aborted");
   if (VAR_9->cur_pmksa) {
    FUNC_9( VAR_2,
     "RSN: Cancelled PMKSA caching "
     "attempt");
    VAR_9->cur_pmksa = ((void*)0);
    VAR_12 = 1;
   } else if (!VAR_12) {
    return -1;
   }
  }
 }

 if (VAR_12 && FUNC_8(VAR_9->key_mgmt) &&
     !FUNC_7(VAR_9->key_mgmt) &&
     !FUNC_6(VAR_9->key_mgmt) && VAR_9->key_mgmt != VAR_7)
 {

  u8 *VAR_16;
  size_t VAR_17;

  FUNC_9( VAR_2,
   "RSN: no PMKSA entry found - trigger "
   "full EAP authentication");
  VAR_16 = FUNC_10(VAR_9, VAR_1,
      ((void*)0), 0, &VAR_17, ((void*)0));
  if (VAR_16) {
   FUNC_11(VAR_9, VAR_9->bssid, VAR_0,
       VAR_16, VAR_17);
   FUNC_0(VAR_16);
   return -2;
  }

  return -1;
 }

 return 0;
}
