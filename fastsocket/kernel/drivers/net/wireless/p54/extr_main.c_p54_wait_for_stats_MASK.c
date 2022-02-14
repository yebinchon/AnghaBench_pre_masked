
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p54_common {int update_stats; int stat_comp; } ;
struct ieee80211_hw {struct p54_common* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct p54_common*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct ieee80211_hw *VAR_2)
{
 struct p54_common *VAR_3 = VAR_2->priv;
 int VAR_4;

 VAR_3->update_stats = 1;
 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(&VAR_3->stat_comp, VAR_1);
 if (VAR_4 == 0)
  return -VAR_0;

 return 0;
}
