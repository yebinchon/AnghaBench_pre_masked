
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {scalar_t__* args; } ;
struct iwl_priv {int mutex; int tst; } ;
struct ieee80211_hw {int dummy; } ;


 struct iwl_priv* FUNC_0 (struct ieee80211_hw*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,scalar_t__,struct sk_buff*,struct netlink_callback*) ;
 int FUNC_2 (int *,struct nlattr**,void*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct nlattr*) ;

int FUNC_6(struct ieee80211_hw *VAR_2, struct sk_buff *VAR_3,
        struct netlink_callback *VAR_4,
        void *VAR_5, int VAR_6)
{
 struct iwl_priv *VAR_7 = FUNC_0(VAR_2);
 int VAR_8;
 u32 VAR_9;

 if (VAR_4->args[3]) {

  VAR_9 = VAR_4->args[3] - 1;
 } else {
  struct nlattr *VAR_10[VAR_1];

  VAR_8 = FUNC_2(&VAR_7->tst, VAR_10, VAR_5, VAR_6);
  if (VAR_8)
   return VAR_8;

  VAR_9 = FUNC_5(VAR_10[VAR_0]);
  VAR_4->args[3] = VAR_9 + 1;
 }


 FUNC_3(&VAR_7->mutex);
 VAR_8 = FUNC_1(&VAR_7->tst, VAR_9, VAR_3, VAR_4);
 FUNC_4(&VAR_7->mutex);
 return VAR_8;
}
