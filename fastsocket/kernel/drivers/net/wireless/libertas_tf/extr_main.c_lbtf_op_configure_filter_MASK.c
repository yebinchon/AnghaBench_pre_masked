
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct lbtf_private {int mac_control; scalar_t__ nr_of_multicastmacaddr; } ;
struct ieee80211_hw {struct lbtf_private* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (struct lbtf_private*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct lbtf_private*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_8,
   unsigned int VAR_9,
   unsigned int *VAR_10,
   u64 VAR_11)
{
 struct lbtf_private *VAR_12 = VAR_8->priv;
 int VAR_13 = VAR_12->mac_control;

 FUNC_1(VAR_5);

 VAR_9 &= VAR_7;
 *VAR_10 &= VAR_7;

 if (!VAR_9) {
  FUNC_2(VAR_5);
  return;
 }

 if (*VAR_10 & (VAR_4))
  VAR_12->mac_control |= VAR_2;
 else
  VAR_12->mac_control &= ~VAR_2;
 if (*VAR_10 & (VAR_3) ||
     VAR_11 > VAR_6) {
  VAR_12->mac_control |= VAR_0;
  VAR_12->mac_control &= ~VAR_1;
 } else if (VAR_11) {
  VAR_12->mac_control |= VAR_1;
  VAR_12->mac_control &= ~VAR_0;
  FUNC_0(VAR_12);
 } else {
  VAR_12->mac_control &= ~(VAR_1 |
           VAR_0);
  if (VAR_12->nr_of_multicastmacaddr) {
   VAR_12->nr_of_multicastmacaddr = 0;
   FUNC_0(VAR_12);
  }
 }


 if (VAR_12->mac_control != VAR_13)
  FUNC_3(VAR_12);

 FUNC_2(VAR_5);
}
