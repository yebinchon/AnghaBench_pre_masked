
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct ieee80211_hdr {int frame_control; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct sk_buff *VAR_0)
{
 struct ieee80211_hdr *VAR_1 = (struct ieee80211_hdr *)(VAR_0->data);

 return FUNC_0(VAR_1->frame_control);
}
