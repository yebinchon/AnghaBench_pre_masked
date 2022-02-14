
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orinoco_private {scalar_t__ nicbuf_size; } ;
struct net_device {int mtu; } ;
struct ieee80211_hdr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct orinoco_private* FUNC_0 (struct net_device*) ;

int FUNC_1(struct net_device *VAR_5, int VAR_6)
{
 struct orinoco_private *VAR_7 = FUNC_0(VAR_5);

 if ((VAR_6 < VAR_4) || (VAR_6 > VAR_3))
  return -VAR_0;


 if ((VAR_6 + VAR_1 + sizeof(struct ieee80211_hdr)) >
      (VAR_7->nicbuf_size - VAR_2))
  return -VAR_0;

 VAR_5->mtu = VAR_6;

 return 0;
}
