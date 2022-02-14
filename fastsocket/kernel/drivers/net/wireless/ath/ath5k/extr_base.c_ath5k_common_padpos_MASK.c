
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_2)
{
 struct ieee80211_hdr *VAR_3 = (struct ieee80211_hdr *)VAR_2->data;
 __le16 VAR_4 = VAR_3->frame_control;
 int VAR_5 = 24;

 if (FUNC_0(VAR_4))
  VAR_5 += VAR_0;

 if (FUNC_1(VAR_4))
  VAR_5 += VAR_1;

 return VAR_5;
}
