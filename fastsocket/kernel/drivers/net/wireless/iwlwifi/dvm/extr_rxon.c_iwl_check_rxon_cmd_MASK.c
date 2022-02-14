
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_rxon_cmd {int flags; int* node_addr; int* bssid_addr; int ofdm_basic_rates; int cck_basic_rates; scalar_t__ assoc_id; scalar_t__ channel; } ;
struct iwl_rxon_context {struct iwl_rxon_cmd staging; } ;
struct iwl_priv {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct iwl_priv*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int,char*,int,int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct iwl_priv *VAR_10,
         struct iwl_rxon_context *VAR_11)
{
 struct iwl_rxon_cmd *VAR_12 = &VAR_11->staging;
 u32 VAR_13 = 0;

 if (VAR_12->flags & VAR_4) {
  if (VAR_12->flags & VAR_9) {
   FUNC_1(VAR_10, "check 2.4G: wrong narrow\n");
   VAR_13 |= FUNC_0(0);
  }
  if (VAR_12->flags & VAR_6) {
   FUNC_1(VAR_10, "check 2.4G: wrong radar\n");
   VAR_13 |= FUNC_0(1);
  }
 } else {
  if (!(VAR_12->flags & VAR_7)) {
   FUNC_1(VAR_10, "check 5.2G: not short slot!\n");
   VAR_13 |= FUNC_0(2);
  }
  if (VAR_12->flags & VAR_5) {
   FUNC_1(VAR_10, "check 5.2G: CCK!\n");
   VAR_13 |= FUNC_0(3);
  }
 }
 if ((VAR_12->node_addr[0] | VAR_12->bssid_addr[0]) & 0x1) {
  FUNC_1(VAR_10, "mac/bssid mcast!\n");
  VAR_13 |= FUNC_0(4);
 }


 if ((VAR_12->ofdm_basic_rates & VAR_2) == 0 &&
     (VAR_12->cck_basic_rates & VAR_1) == 0) {
  FUNC_1(VAR_10, "neither 1 nor 6 are basic\n");
  VAR_13 |= FUNC_0(5);
 }

 if (FUNC_3(VAR_12->assoc_id) > 2007) {
  FUNC_1(VAR_10, "aid > 2007\n");
  VAR_13 |= FUNC_0(6);
 }

 if ((VAR_12->flags & (VAR_5 | VAR_7))
   == (VAR_5 | VAR_7)) {
  FUNC_1(VAR_10, "CCK and short slot\n");
  VAR_13 |= FUNC_0(7);
 }

 if ((VAR_12->flags & (VAR_5 | VAR_3))
   == (VAR_5 | VAR_3)) {
  FUNC_1(VAR_10, "CCK and auto detect");
  VAR_13 |= FUNC_0(8);
 }

 if ((VAR_12->flags & (VAR_3 |
       VAR_8)) ==
       VAR_8) {
  FUNC_1(VAR_10, "TGg but no auto-detect\n");
  VAR_13 |= FUNC_0(9);
 }

 if (VAR_12->channel == 0) {
  FUNC_1(VAR_10, "zero channel is invalid\n");
  VAR_13 |= FUNC_0(10);
 }

 FUNC_2(VAR_13, "Invalid RXON (%#x), channel %d",
      VAR_13, FUNC_3(VAR_12->channel));

 return VAR_13 ? -VAR_0 : 0;
}
