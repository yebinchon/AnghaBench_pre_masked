
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_rxon_cmd {int flags; int* node_addr; int* bssid_addr; int ofdm_basic_rates; int cck_basic_rates; int channel; int assoc_id; } ;
struct il_priv {struct il_rxon_cmd staging; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;

int
FUNC_3(struct il_priv *VAR_10)
{
 struct il_rxon_cmd *VAR_11 = &VAR_10->staging;
 bool VAR_12 = 0;

 if (VAR_11->flags & VAR_4) {
  if (VAR_11->flags & VAR_9) {
   FUNC_1("check 2.4G: wrong narrow\n");
   VAR_12 = 1;
  }
  if (VAR_11->flags & VAR_6) {
   FUNC_1("check 2.4G: wrong radar\n");
   VAR_12 = 1;
  }
 } else {
  if (!(VAR_11->flags & VAR_7)) {
   FUNC_1("check 5.2G: not short slot!\n");
   VAR_12 = 1;
  }
  if (VAR_11->flags & VAR_5) {
   FUNC_1("check 5.2G: CCK!\n");
   VAR_12 = 1;
  }
 }
 if ((VAR_11->node_addr[0] | VAR_11->bssid_addr[0]) & 0x1) {
  FUNC_1("mac/bssid mcast!\n");
  VAR_12 = 1;
 }


 if ((VAR_11->ofdm_basic_rates & VAR_2) == 0 &&
     (VAR_11->cck_basic_rates & VAR_1) == 0) {
  FUNC_1("neither 1 nor 6 are basic\n");
  VAR_12 = 1;
 }

 if (FUNC_2(VAR_11->assoc_id) > 2007) {
  FUNC_1("aid > 2007\n");
  VAR_12 = 1;
 }

 if ((VAR_11->flags & (VAR_5 | VAR_7)) ==
     (VAR_5 | VAR_7)) {
  FUNC_1("CCK and short slot\n");
  VAR_12 = 1;
 }

 if ((VAR_11->flags & (VAR_5 | VAR_3)) ==
     (VAR_5 | VAR_3)) {
  FUNC_1("CCK and auto detect");
  VAR_12 = 1;
 }

 if ((VAR_11->
      flags & (VAR_3 | VAR_8)) ==
     VAR_8) {
  FUNC_1("TGg but no auto-detect\n");
  VAR_12 = 1;
 }

 if (VAR_12)
  FUNC_1("Tuning to channel %d\n", FUNC_2(VAR_11->channel));

 if (VAR_12) {
  FUNC_0("Invalid RXON\n");
  return -VAR_0;
 }
 return 0;
}
