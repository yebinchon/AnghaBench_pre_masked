
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hdr {int dummy; } ;


 scalar_t__ FUNC_0 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_1 (struct ieee80211_hdr*,struct ieee80211_hdr*) ;

__attribute__((used)) static inline bool FUNC_2(struct ieee80211_hdr *VAR_0, struct ieee80211_hdr *VAR_1)
{
 return (FUNC_0(VAR_0) == FUNC_0(VAR_1)) || FUNC_1(VAR_0, VAR_1);
}
