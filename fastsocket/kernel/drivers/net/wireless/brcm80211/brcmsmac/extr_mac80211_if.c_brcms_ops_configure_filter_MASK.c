
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct ieee80211_hw {struct brcms_info* priv; } ;
struct brcms_info {int lock; TYPE_2__* wlc; } ;
struct bcma_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* hw; } ;
struct TYPE_3__ {struct bcma_device* d11core; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (TYPE_2__*,unsigned int) ;
 int FUNC_1 (struct bcma_device*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct ieee80211_hw *VAR_8,
   unsigned int VAR_9,
   unsigned int *VAR_10, u64 VAR_11)
{
 struct brcms_info *VAR_12 = VAR_8->priv;
 struct bcma_device *VAR_13 = VAR_12->wlc->hw->d11core;

 VAR_9 &= VAR_7;
 *VAR_10 &= VAR_7;

 if (VAR_9 & VAR_5)
  FUNC_1(VAR_13, "FIF_PROMISC_IN_BSS\n");
 if (VAR_9 & VAR_0)
  FUNC_1(VAR_13, "FIF_ALLMULTI\n");
 if (VAR_9 & VAR_3)
  FUNC_1(VAR_13, "FIF_FCSFAIL\n");
 if (VAR_9 & VAR_2)
  FUNC_1(VAR_13, "FIF_CONTROL\n");
 if (VAR_9 & VAR_4)
  FUNC_1(VAR_13, "FIF_OTHER_BSS\n");
 if (VAR_9 & VAR_6)
  FUNC_1(VAR_13, "FIF_PSPOLL\n");
 if (VAR_9 & VAR_1)
  FUNC_1(VAR_13, "FIF_BCN_PRBRESP_PROMISC\n");

 FUNC_2(&VAR_12->lock);
 FUNC_0(VAR_12->wlc, *VAR_10);
 FUNC_3(&VAR_12->lock);
 return;
}
