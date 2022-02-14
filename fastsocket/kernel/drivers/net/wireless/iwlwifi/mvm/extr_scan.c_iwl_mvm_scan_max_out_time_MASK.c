
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ assoc; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;
typedef int __le32 ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline __le32 FUNC_1(struct ieee80211_vif *VAR_0)
{
 if (VAR_0->bss_conf.assoc)
  return FUNC_0(200 * 1024);
 else
  return 0;
}
