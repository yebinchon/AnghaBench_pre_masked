
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ieee80211_device {size_t mgmt_queue_tail; size_t mgmt_queue_head; struct sk_buff** mgmt_queue_ring; } ;


 int VAR_0 ;

struct sk_buff *FUNC_0(struct ieee80211_device *VAR_1)
{
 struct sk_buff *VAR_2;

 if(VAR_1->mgmt_queue_tail == VAR_1->mgmt_queue_head)
  return ((void*)0);

 VAR_2 = VAR_1->mgmt_queue_ring[VAR_1->mgmt_queue_tail];

 VAR_1->mgmt_queue_tail =
  (VAR_1->mgmt_queue_tail+1) % VAR_0;

 return VAR_2;
}
