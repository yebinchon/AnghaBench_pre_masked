
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct pda_rssi_cal_ext_entry {int add; int mul; int freq; } ;
struct pda_rssi_cal_entry {int add; int mul; } ;
struct p54_rssi_db_entry {void* add; void* mul; scalar_t__ freq; } ;
struct p54_common {TYPE_1__* rssi_db; } ;
struct ieee80211_hw {int wiphy; struct p54_common* priv; } ;
typedef void* s16 ;
typedef scalar_t__ __le16 ;
struct TYPE_2__ {unsigned long offset; size_t entries; int entry_size; size_t len; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (size_t,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (char*,int ,int *,int) ;
 int FUNC_4 (struct p54_rssi_db_entry*,size_t,int,int ,int *) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_7,
        u8 *VAR_8, int VAR_9, u16 VAR_10)
{
 struct p54_common *VAR_11 = VAR_7->priv;
 struct p54_rssi_db_entry *VAR_12;
 size_t VAR_13, VAR_14;
 int VAR_15 = 0, VAR_16;

 if (VAR_10 != VAR_5) {
  VAR_14 = (VAR_10 == VAR_4) ? 1 : 2;
  if (VAR_9 != sizeof(struct pda_rssi_cal_entry) * VAR_14) {
   FUNC_5(VAR_7->wiphy, "rssical size mismatch.\n");
   goto err_data;
  }
 } else {




  if (*((__le16 *)&VAR_8[VAR_15]) == FUNC_0(0))
   VAR_15 += 2;

  VAR_14 = (VAR_9 - VAR_15) /
   sizeof(struct pda_rssi_cal_ext_entry);

  if (VAR_9 < VAR_15 ||
      (VAR_9 - VAR_15) % sizeof(struct pda_rssi_cal_ext_entry) ||
      VAR_14 == 0) {
   FUNC_5(VAR_7->wiphy, "invalid rssi database.\n");
   goto err_data;
  }
 }

 VAR_13 = sizeof(*VAR_12) * VAR_14;
 VAR_11->rssi_db = FUNC_1(VAR_13 + sizeof(*VAR_11->rssi_db), VAR_3);
 if (!VAR_11->rssi_db)
  return -VAR_2;

 VAR_11->rssi_db->offset = 0;
 VAR_11->rssi_db->entries = VAR_14;
 VAR_11->rssi_db->entry_size = sizeof(*VAR_12);
 VAR_11->rssi_db->len = VAR_13;

 VAR_12 = (void *)((unsigned long)VAR_11->rssi_db->data + VAR_11->rssi_db->offset);
 if (VAR_10 == VAR_5) {
  struct pda_rssi_cal_ext_entry *VAR_17 = (void *) &VAR_8[VAR_15];

  for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
   VAR_12[VAR_16].freq = FUNC_2(VAR_17[VAR_16].freq);
   VAR_12[VAR_16].mul = (s16) FUNC_2(VAR_17[VAR_16].mul);
   VAR_12[VAR_16].add = (s16) FUNC_2(VAR_17[VAR_16].add);
  }
 } else {
  struct pda_rssi_cal_entry *VAR_18 = (void *) &VAR_8[VAR_15];

  for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
   u16 VAR_19 = 0;
   switch (VAR_16) {
   case 129:
    VAR_19 = 2437;
    break;
   case 128:
    VAR_19 = 5240;
    break;
   }

   VAR_12[VAR_16].freq = VAR_19;
   VAR_12[VAR_16].mul = (s16) FUNC_2(VAR_18[VAR_16].mul);
   VAR_12[VAR_16].add = (s16) FUNC_2(VAR_18[VAR_16].add);
  }
 }


 FUNC_4(VAR_12, VAR_14, sizeof(*VAR_12), VAR_6, ((void*)0));
 return 0;

err_data:
 FUNC_5(VAR_7->wiphy,
    "rssi calibration data packing type:(%x) len:%d.\n",
    VAR_10, VAR_9);

 FUNC_3("rssical:", VAR_0, VAR_8, VAR_9);

 FUNC_5(VAR_7->wiphy, "please report this issue.\n");
 return -VAR_1;
}
