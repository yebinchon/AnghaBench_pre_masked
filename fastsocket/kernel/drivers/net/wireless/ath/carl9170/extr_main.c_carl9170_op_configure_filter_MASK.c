
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct ieee80211_hw {struct ar9170* priv; } ;
struct TYPE_2__ {int ba_filter; scalar_t__ rx_filter; } ;
struct ar9170 {unsigned int rx_filter_caps; unsigned int filter_state; scalar_t__ cur_mc_hash; int sniffer_enabled; int mutex; TYPE_1__ fw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_0 (struct ar9170*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ar9170*,int ) ;
 int FUNC_3 (struct ar9170*) ;
 int FUNC_4 (struct ar9170*,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_12,
      unsigned int VAR_13,
      unsigned int *VAR_14,
      u64 VAR_15)
{
 struct ar9170 *VAR_16 = VAR_12->priv;


 *VAR_14 &= VAR_5 | VAR_16->rx_filter_caps;

 if (!FUNC_0(VAR_16))
  return;

 FUNC_5(&VAR_16->mutex);

 VAR_16->filter_state = *VAR_14;





 if (*VAR_14 & VAR_5)
  VAR_15 = ~0ULL;

 if (VAR_15 != VAR_16->cur_mc_hash)
  FUNC_1(FUNC_4(VAR_16, VAR_15));

 if (VAR_13 & (VAR_8 | VAR_10)) {
  VAR_16->sniffer_enabled = !!(*VAR_14 &
   (VAR_8 | VAR_10));

  FUNC_1(FUNC_3(VAR_16));
 }

 if (VAR_16->fw.rx_filter && VAR_13 & VAR_16->rx_filter_caps) {
  u32 VAR_17 = 0;

  if (!VAR_16->fw.ba_filter)
   VAR_17 |= VAR_1;

  if (!(*VAR_14 & (VAR_7 | VAR_9)))
   VAR_17 |= VAR_0;

  if (!(*VAR_14 & VAR_6))
   VAR_17 |= VAR_1;

  if (!(*VAR_14 & VAR_11))
   VAR_17 |= VAR_2;

  if (!(*VAR_14 & (VAR_8 | VAR_10))) {
   VAR_17 |= VAR_4;
   VAR_17 |= VAR_3;
  }

  FUNC_1(FUNC_2(VAR_16, VAR_17));
 }

 FUNC_6(&VAR_16->mutex);
}
