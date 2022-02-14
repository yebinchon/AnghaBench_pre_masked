
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hdr {int addr1; } ;
struct ar9170 {TYPE_1__* vif_priv; } ;
struct TYPE_4__ {unsigned int misc; } ;
struct _carl9170_tx_superframe {TYPE_2__ s; scalar_t__ frame_data; } ;
struct TYPE_3__ {int vif; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 struct ieee80211_sta* FUNC_1 (struct ieee80211_vif*,int ) ;
 struct ieee80211_vif* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static struct ieee80211_sta *FUNC_4(struct ar9170 *VAR_3,
         struct sk_buff *VAR_4)
{
 struct _carl9170_tx_superframe *VAR_5 = (void *) VAR_4->data;
 struct ieee80211_hdr *VAR_6 = (void *) VAR_5->frame_data;
 struct ieee80211_vif *VAR_7;
 unsigned int VAR_8;

 VAR_8 = (VAR_5->s.misc & VAR_1) >>
   VAR_2;

 if (FUNC_0(VAR_8 >= VAR_0))
  return ((void*)0);

 VAR_7 = FUNC_2(VAR_3->vif_priv[VAR_8].vif);
 if (FUNC_3(!VAR_7))
  return ((void*)0);
 return FUNC_1(VAR_7, VAR_6->addr1);
}
