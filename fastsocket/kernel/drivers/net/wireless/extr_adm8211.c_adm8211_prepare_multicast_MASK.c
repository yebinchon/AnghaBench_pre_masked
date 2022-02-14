
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ieee80211_hw {int dummy; } ;
struct dev_addr_list {struct dev_addr_list* next; int dmi_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static u64 FUNC_1(struct ieee80211_hw *VAR_1,
         int VAR_2, struct dev_addr_list *VAR_3)
{
 unsigned int VAR_4, VAR_5;
 u32 VAR_6[2];

 VAR_6[1] = VAR_6[0] = 0;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (!VAR_3)
   break;
  VAR_4 = FUNC_0(VAR_0, VAR_3->dmi_addr) >> 26;

  VAR_4 &= 0x3F;
  VAR_6[VAR_4 >> 5] |= 1 << (VAR_4 & 31);
  VAR_3 = VAR_3->next;
 }

 return VAR_6[0] | ((u64)(VAR_6[1]) << 32);
}
