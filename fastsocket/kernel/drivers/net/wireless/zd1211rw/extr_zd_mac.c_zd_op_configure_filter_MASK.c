
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct zd_mc_hash {int low; int high; } ;
struct zd_mac {int pass_failed_fcs; int pass_ctrl; int chip; int lock; struct zd_mc_hash multicast_hash; } ;
struct ieee80211_hw {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct zd_mac*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,struct zd_mc_hash*) ;
 struct zd_mac* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct zd_mac*) ;
 int FUNC_7 (struct zd_mc_hash*) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_hw *VAR_5,
   unsigned int VAR_6,
   unsigned int *VAR_7,
   u64 VAR_8)
{
 struct zd_mc_hash VAR_9 = {
  .low = VAR_8,
  .high = VAR_8 >> 32,
 };
 struct zd_mac *VAR_10 = FUNC_5(VAR_5);
 unsigned long VAR_11;
 int VAR_12;


 VAR_6 &= VAR_4;
 *VAR_7 &= VAR_4;
 if (*VAR_7 & (VAR_3 | VAR_0))
  FUNC_7(&VAR_9);

 FUNC_2(&VAR_10->lock, VAR_11);
 VAR_10->pass_failed_fcs = !!(*VAR_7 & VAR_2);
 VAR_10->pass_ctrl = !!(*VAR_7 & VAR_1);
 VAR_10->multicast_hash = VAR_9;
 FUNC_3(&VAR_10->lock, VAR_11);

 FUNC_4(&VAR_10->chip, &VAR_9);

 if (VAR_6 & VAR_1) {
  VAR_12 = FUNC_1(VAR_10);
  if (VAR_12)
   FUNC_0(FUNC_6(VAR_10), "set_rx_filter error %d\n", VAR_12);
 }
}
