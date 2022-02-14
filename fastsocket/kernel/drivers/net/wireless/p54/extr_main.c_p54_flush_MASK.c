
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct p54_common {int dummy; } ;
struct ieee80211_hw {struct p54_common* priv; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct p54_common*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_1, u32 VAR_2, bool VAR_3)
{
 struct p54_common *VAR_4 = VAR_1->priv;
 unsigned int VAR_5, VAR_6;







 VAR_6 = VAR_0 * 2 / 20;






 while ((VAR_5 = FUNC_2(VAR_4) && VAR_6--)) {

  FUNC_1(20);
 }

 FUNC_0(VAR_5, "tx flush timeout, unresponsive firmware");
}
