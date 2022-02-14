
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int frame_ctl; } ;
struct ieee80211_probe_response {TYPE_1__ header; } ;
struct ieee80211_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (struct ieee80211_device*,int*) ;

struct sk_buff *FUNC_2(struct ieee80211_device *VAR_1)
{
 u8 VAR_2[] = {0xff,0xff,0xff,0xff,0xff,0xff};

 struct sk_buff *VAR_3 = ((void*)0);
 struct ieee80211_probe_response *VAR_4;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_3)
  return ((void*)0);

 VAR_4 = (struct ieee80211_probe_response *) VAR_3->data;
 VAR_4->header.frame_ctl = FUNC_0(VAR_0);

 return VAR_3;

}
