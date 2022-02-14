
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct iwl_tx_cmd {int sec_ctl; int * key; int tx_flags; } ;
struct iwl_mvm {int dummy; } ;
struct TYPE_2__ {struct ieee80211_key_conf* hw_key; } ;
struct ieee80211_tx_info {int flags; TYPE_1__ control; } ;
struct ieee80211_key_conf {int cipher; int keyidx; int keylen; int key; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 int FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_key_conf*,struct sk_buff*,int *) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct iwl_mvm *VAR_8,
          struct ieee80211_tx_info *VAR_9,
          struct iwl_tx_cmd *VAR_10,
          struct sk_buff *VAR_11)
{
 struct ieee80211_key_conf *VAR_12 = VAR_9->control.hw_key;

 switch (VAR_12->cipher) {
 case 131:
  VAR_10->sec_ctl = VAR_2;
  FUNC_3(VAR_10->key, VAR_12->key, VAR_12->keylen);
  if (VAR_9->flags & VAR_0)
   VAR_10->tx_flags |= FUNC_1(VAR_1);
  break;

 case 130:
  VAR_10->sec_ctl = VAR_4;
  FUNC_2(VAR_12, VAR_11, VAR_10->key);
  break;

 case 129:
  VAR_10->sec_ctl |= VAR_3;

 case 128:
  VAR_10->sec_ctl |= VAR_5 |
   ((VAR_12->keyidx << VAR_7) &
     VAR_6);

  FUNC_3(&VAR_10->key[3], VAR_12->key, VAR_12->keylen);
  break;
 default:
  FUNC_0(VAR_8, "Unknown encode cipher %x\n", VAR_12->cipher);
  break;
 }
}
