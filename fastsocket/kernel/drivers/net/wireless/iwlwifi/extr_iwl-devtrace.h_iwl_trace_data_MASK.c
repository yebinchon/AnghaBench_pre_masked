
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ protocol; scalar_t__ data; } ;
struct ieee80211_hdr {int frame_control; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline bool FUNC_2(struct sk_buff *VAR_1)
{
 struct ieee80211_hdr *VAR_2 = (void *)VAR_1->data;

 if (FUNC_1(VAR_2->frame_control))
  return VAR_1->protocol != FUNC_0(VAR_0);
 return 0;
}
