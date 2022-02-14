
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct zd_mc_hash {int low; scalar_t__ high; } ;
struct zd_mac {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct dev_addr_list {struct dev_addr_list* next; int dmi_addr; } ;


 int FUNC_0 (int ,char*,int ) ;
 struct zd_mac* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct zd_mac*) ;
 int FUNC_3 (struct zd_mc_hash*,int ) ;
 int FUNC_4 (struct zd_mc_hash*) ;

__attribute__((used)) static u64 FUNC_5(struct ieee80211_hw *VAR_0,
       int VAR_1, struct dev_addr_list *VAR_2)
{
 struct zd_mac *VAR_3 = FUNC_1(VAR_0);
 struct zd_mc_hash VAR_4;
 int VAR_5;

 FUNC_4(&VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (!VAR_2)
   break;
  FUNC_0(FUNC_2(VAR_3), "mc addr %pM\n", VAR_2->dmi_addr);
  FUNC_3(&VAR_4, VAR_2->dmi_addr);
  VAR_2 = VAR_2->next;
 }

 return VAR_4.low | ((u64)VAR_4.high << 32);
}
