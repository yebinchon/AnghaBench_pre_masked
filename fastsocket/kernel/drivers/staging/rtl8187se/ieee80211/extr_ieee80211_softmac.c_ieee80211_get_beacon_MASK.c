
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int seq_ctrl; } ;
struct ieee80211_probe_response {TYPE_1__ header; } ;
struct ieee80211_device {int* seq_ctrl; } ;


 int FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (struct ieee80211_device*) ;

struct sk_buff *FUNC_2(struct ieee80211_device *VAR_0)
{
 struct sk_buff *VAR_1;
 struct ieee80211_probe_response *VAR_2;

 VAR_1 = FUNC_1(VAR_0);
 if(!VAR_1)
  return ((void*)0);

 VAR_2 = (struct ieee80211_probe_response *) VAR_1->data;
 VAR_2->header.seq_ctrl = FUNC_0(VAR_0->seq_ctrl[0] << 4);

 if (VAR_0->seq_ctrl[0] == 0xFFF)
  VAR_0->seq_ctrl[0] = 0;
 else
  VAR_0->seq_ctrl[0]++;

 return VAR_1;
}
