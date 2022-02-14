
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ieee80211_hdr {int seq_ctrl; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline u16 FUNC_1(struct ieee80211_hdr *VAR_0)
{
 return FUNC_0(VAR_0->seq_ctrl) >> 4;
}
