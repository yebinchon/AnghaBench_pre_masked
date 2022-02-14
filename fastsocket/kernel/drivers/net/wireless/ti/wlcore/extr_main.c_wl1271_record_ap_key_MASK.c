
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {struct wl1271_ap_key** recorded_keys; } ;
struct wl12xx_vif {TYPE_1__ ap; } ;
struct wl1271_ap_key {scalar_t__ id; int tx_seq_16; int tx_seq_32; scalar_t__ hlid; int key; scalar_t__ key_size; scalar_t__ key_type; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct wl1271_ap_key* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,scalar_t__ const*,scalar_t__) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct wl1271 *VAR_7, struct wl12xx_vif *VAR_8,
    u8 VAR_9, u8 VAR_10, u8 VAR_11,
    const u8 *VAR_12, u8 VAR_13, u32 VAR_14,
    u16 VAR_15)
{
 struct wl1271_ap_key *VAR_16;
 int VAR_17;

 FUNC_2(VAR_0, "record ap key id %d", (int)VAR_9);

 if (VAR_11 > VAR_5)
  return -VAR_2;





 for (VAR_17 = 0; VAR_17 < VAR_6; VAR_17++) {
  if (VAR_8->ap.recorded_keys[VAR_17] == ((void*)0))
   break;

  if (VAR_8->ap.recorded_keys[VAR_17]->id == VAR_9) {
   FUNC_3("trying to record key replacement");
   return -VAR_2;
  }
 }

 if (VAR_17 == VAR_6)
  return -VAR_1;

 VAR_16 = FUNC_0(sizeof(*VAR_16), VAR_4);
 if (!VAR_16)
  return -VAR_3;

 VAR_16->id = VAR_9;
 VAR_16->key_type = VAR_10;
 VAR_16->key_size = VAR_11;
 FUNC_1(VAR_16->key, VAR_12, VAR_11);
 VAR_16->hlid = VAR_13;
 VAR_16->tx_seq_32 = VAR_14;
 VAR_16->tx_seq_16 = VAR_15;

 VAR_8->ap.recorded_keys[VAR_17] = VAR_16;
 return 0;
}
