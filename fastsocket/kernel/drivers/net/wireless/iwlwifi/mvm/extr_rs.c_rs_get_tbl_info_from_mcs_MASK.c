
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct iwl_scale_tbl_info {int is_SGI; int is_ht40; int ant_type; int lq_type; int max_search; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int const VAR_13 ;
 int VAR_14 ;
 int const VAR_15 ;
 int const VAR_16 ;
 int const VAR_17 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (struct iwl_scale_tbl_info*,int ,int) ;
 int FUNC_3 (int const) ;

__attribute__((used)) static int FUNC_4(const u32 VAR_18,
        enum ieee80211_band VAR_19,
        struct iwl_scale_tbl_info *VAR_20,
        int *VAR_21)
{
 u32 VAR_22 = (VAR_18 & VAR_13);
 u8 VAR_23 = FUNC_0(VAR_18);
 u8 VAR_24;

 FUNC_2(VAR_20, 0, sizeof(struct iwl_scale_tbl_info));
 *VAR_21 = FUNC_1(VAR_18);

 if (*VAR_21 == VAR_4) {
  *VAR_21 = -1;
  return -VAR_0;
 }
 VAR_20->is_SGI = 0;
 VAR_20->is_ht40 = 0;
 VAR_20->ant_type = (VAR_22 >> VAR_14);
 VAR_20->lq_type = VAR_11;
 VAR_20->max_search = VAR_3;


 if (!(VAR_18 & VAR_16)) {
  if (VAR_23 == 1) {
   if (VAR_19 == VAR_1)
    VAR_20->lq_type = VAR_7;
   else
    VAR_20->lq_type = VAR_8;
  }

 } else {
  if (VAR_18 & VAR_17)
   VAR_20->is_SGI = 1;

  if (VAR_18 & VAR_15)
   VAR_20->is_ht40 = 1;

  VAR_24 = FUNC_3(VAR_18);


  if (VAR_24 <= VAR_6) {
   if (VAR_23 == 1)
    VAR_20->lq_type = VAR_12;

  } else if (VAR_24 <= VAR_5) {
   if (VAR_23 == 2)
    VAR_20->lq_type = VAR_9;

  } else {
   if (VAR_23 == 3) {
    VAR_20->max_search = VAR_2;
    VAR_20->lq_type = VAR_10;
   }
  }
 }
 return 0;
}
