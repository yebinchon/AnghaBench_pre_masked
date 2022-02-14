
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int dummy; } ;
struct nlattr {int dummy; } ;
struct ieee80211_hw {struct wl1271* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;





 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr**,int ,void*,int,int ) ;
 int FUNC_2 (struct wl1271*,struct nlattr**) ;
 int FUNC_3 (struct wl1271*,struct nlattr**) ;
 int FUNC_4 (struct wl1271*,struct nlattr**) ;
 int FUNC_5 (struct wl1271*,struct nlattr**) ;
 int VAR_4 ;
 int FUNC_6 (struct wl1271*,struct nlattr**) ;

int FUNC_7(struct ieee80211_hw *VAR_5, void *VAR_6, int VAR_7)
{
 struct wl1271 *VAR_8 = VAR_5->priv;
 struct nlattr *VAR_9[VAR_3 + 1];
 int VAR_10;

 VAR_10 = FUNC_1(VAR_9, VAR_3, VAR_6, VAR_7, VAR_4);
 if (VAR_10)
  return VAR_10;

 if (!VAR_9[VAR_2])
  return -VAR_0;

 switch (FUNC_0(VAR_9[VAR_2])) {
 case 128:
  return FUNC_5(VAR_8, VAR_9);
 case 130:
  return FUNC_3(VAR_8, VAR_9);
 case 132:
  return FUNC_2(VAR_8, VAR_9);
 case 129:
  return FUNC_4(VAR_8, VAR_9);
 case 131:
  return FUNC_6(VAR_8, VAR_9);
 default:
  return -VAR_1;
 }
}
