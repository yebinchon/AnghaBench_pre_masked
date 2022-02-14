
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int type; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct ixgbe_adapter {int flags2; scalar_t__ rx_itr_setting; int flags; TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 int FUNC_3 (struct net_device*) ;


 int FUNC_4 (struct ixgbe_adapter*) ;
 struct ixgbe_adapter* FUNC_5 (struct net_device*) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_10, u32 VAR_11)
{
 struct ixgbe_adapter *VAR_12 = FUNC_5(VAR_10);
 bool VAR_13 = 0;
 int VAR_14;

 VAR_14 = FUNC_1(VAR_10, VAR_11);
 if (VAR_14)
  return VAR_14;


 if ((VAR_12->flags2 & VAR_2) &&
     (!!(VAR_11 & VAR_0) !=
      !!(VAR_12->flags2 & VAR_3))) {
  if ((VAR_11 & VAR_0) &&
      (!VAR_12->rx_itr_setting ||
       (VAR_12->rx_itr_setting > VAR_8))) {
   FUNC_0(VAR_9, "rx-usecs set too low, "
          "not enabling RSC.\n");
  } else {
   VAR_12->flags2 ^= VAR_3;
   switch (VAR_12->hw.mac.type) {
   case 128:
    FUNC_4(VAR_12);
    break;
   case 129:
    VAR_13 = 1;
    break;
   default:
    break;
   }
  }
 }





 if (!FUNC_2(VAR_12))
  goto skip_fdir;

 if (!(VAR_12->flags & VAR_6)) {

  if (VAR_11 & VAR_1) {
   VAR_12->flags &= ~VAR_5;
   VAR_12->flags |= VAR_6;
   VAR_13 = 1;
  }
 } else if (!(VAR_11 & VAR_1)) {

  VAR_12->flags &= ~VAR_6;
  if (!(VAR_12->flags & VAR_7) &&
      !(VAR_12->flags & VAR_4))
   VAR_12->flags |= VAR_5;
  VAR_13 = 1;
 }

skip_fdir:
 if (VAR_13)
  FUNC_3(VAR_10);
 return 0;

}
