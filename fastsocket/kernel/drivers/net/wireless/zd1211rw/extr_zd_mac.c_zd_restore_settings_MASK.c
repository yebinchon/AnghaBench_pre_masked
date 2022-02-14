
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct zd_mc_hash {int dummy; } ;
struct TYPE_2__ {int interval; int period; int last_update; } ;
struct zd_mac {unsigned int short_preamble; int lock; TYPE_1__ beacon; int type; int chip; int hw; int * vif; int channel; struct zd_mc_hash multicast_hash; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 struct sk_buff* FUNC_1 (int ,int *) ;
 int VAR_3 ;
 int FUNC_2 (struct zd_mac*) ;
 int FUNC_3 (struct zd_mac*,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,struct zd_mc_hash*) ;
 int FUNC_8 (int ,struct sk_buff*,int) ;
 int FUNC_9 (struct zd_mac*) ;
 int FUNC_10 (int *,int,int,int ) ;

int FUNC_11(struct zd_mac *VAR_4)
{
 struct sk_buff *VAR_5;
 struct zd_mc_hash VAR_6;
 unsigned int VAR_7;
 int VAR_8, VAR_9, VAR_10;
 u8 VAR_11;

 FUNC_0(FUNC_9(VAR_4), "\n");

 FUNC_4(&VAR_4->lock);
 VAR_6 = VAR_4->multicast_hash;
 VAR_7 = VAR_4->short_preamble;
 VAR_9 = VAR_4->beacon.interval;
 VAR_10 = VAR_4->beacon.period;
 VAR_11 = VAR_4->channel;
 FUNC_5(&VAR_4->lock);

 VAR_8 = FUNC_2(VAR_4);
 if (VAR_8 < 0) {
  FUNC_0(FUNC_9(VAR_4), "set_mac_and_bssid failed, %d\n", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_6(&VAR_4->chip, VAR_11);
 if (VAR_8 < 0) {
  FUNC_0(FUNC_9(VAR_4), "zd_chip_set_channel failed, %d\n",
     VAR_8);
  return VAR_8;
 }

 FUNC_3(VAR_4, VAR_7);

 VAR_8 = FUNC_7(&VAR_4->chip, &VAR_6);
 if (VAR_8 < 0) {
  FUNC_0(FUNC_9(VAR_4),
     "zd_chip_set_multicast_hash failed, %d\n", VAR_8);
  return VAR_8;
 }

 if (VAR_4->type == VAR_2 ||
     VAR_4->type == VAR_0 ||
     VAR_4->type == VAR_1) {
  if (VAR_4->vif != ((void*)0)) {
   VAR_5 = FUNC_1(VAR_4->hw, VAR_4->vif);
   if (VAR_5)
    FUNC_8(VAR_4->hw, VAR_5, 0);
  }

  FUNC_10(&VAR_4->chip, VAR_9,
     VAR_10, VAR_4->type);

  FUNC_4(&VAR_4->lock);
  VAR_4->beacon.last_update = VAR_3;
  FUNC_5(&VAR_4->lock);
 }

 return 0;
}
