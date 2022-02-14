
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbsoft_priv {int dummy; } ;
struct sk_buff {int len; int data; } ;
struct ieee80211_hw {struct wbsoft_priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct wbsoft_priv*,int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct ieee80211_hw *VAR_2, struct sk_buff *VAR_3)
{
 struct wbsoft_priv *VAR_4 = VAR_2->priv;

 FUNC_0(VAR_4, VAR_3->data, VAR_3->len, VAR_0);

 return VAR_1;
}
