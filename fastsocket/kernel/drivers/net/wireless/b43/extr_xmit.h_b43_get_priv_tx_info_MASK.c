
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_tx_info {scalar_t__ rate_driver_data; } ;
struct b43_private_tx_info {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline struct b43_private_tx_info *
FUNC_1(struct ieee80211_tx_info *VAR_0)
{
 FUNC_0(sizeof(struct b43_private_tx_info) >
       sizeof(VAR_0->rate_driver_data));
 return (struct b43_private_tx_info *)VAR_0->rate_driver_data;
}
