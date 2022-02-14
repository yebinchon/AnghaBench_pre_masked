
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {int len; int* data; } ;
struct net_device {int dev_addr; } ;
struct ieee80211_hdr {int addr1; int addr3; int frame_control; } ;
struct TYPE_3__ {struct net_device* dev; } ;
typedef TYPE_1__ local_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(local_info_t *VAR_4, struct sk_buff *VAR_5)
{
 struct net_device *VAR_6 = VAR_4->dev;
 u16 VAR_7, VAR_8;
 struct ieee80211_hdr *VAR_9;
 u8 *VAR_10;

 if (VAR_5->len < 24)
  return 0;

 VAR_9 = (struct ieee80211_hdr *) VAR_5->data;
 VAR_7 = FUNC_0(VAR_9->frame_control);


 if ((VAR_7 & (VAR_3 | VAR_2)) ==
     VAR_3 &&
     FUNC_1(VAR_9->addr1, VAR_6->dev_addr, VAR_0) == 0 &&
     FUNC_1(VAR_9->addr3, VAR_6->dev_addr, VAR_0) == 0) {

 } else if ((VAR_7 & (VAR_3 | VAR_2)) ==
     VAR_2 &&
     FUNC_1(VAR_9->addr1, VAR_6->dev_addr, VAR_0) == 0) {

 } else
  return 0;

 if (VAR_5->len < 24 + 8)
  return 0;


 VAR_10 = VAR_5->data + 24;
 VAR_8 = (VAR_10[6] << 8) | VAR_10[7];
 if (VAR_8 == VAR_1)
  return 1;

 return 0;
}
