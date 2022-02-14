
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int cb; } ;
typedef int p80211_rxmeta_t ;
struct TYPE_3__ {int * rx; } ;
typedef TYPE_1__ p80211_frmmeta_t ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (char*) ;

void FUNC_4(struct sk_buff *VAR_0)
{
 p80211_rxmeta_t *VAR_1;
 p80211_frmmeta_t *VAR_2;


 if (VAR_0 == ((void*)0)) {
  FUNC_3("Called w/ null skb.\n");
  goto exit;
 }
 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 == ((void*)0)) {
  FUNC_3("Called w/ bad frmmeta magic.\n");
  goto exit;
 }
 VAR_1 = VAR_2->rx;
 if (VAR_1 == ((void*)0)) {
  FUNC_3("Called w/ bad rxmeta ptr.\n");
  goto exit;
 }


 FUNC_1(VAR_1);


 FUNC_2(VAR_0->cb, 0, sizeof(VAR_0->cb));
exit:
 return;
}
