
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_3__ {TYPE_2__ mac; } ;
struct ixgbe_adapter {int flags; TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 struct ixgbe_adapter* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_8, int VAR_9)
{
 struct ixgbe_adapter *VAR_10 = FUNC_3(VAR_8);
 int VAR_11 = VAR_9 + VAR_3 + VAR_1;


 if ((VAR_9 < 68) || (VAR_11 > VAR_5))
  return -VAR_0;






 if ((VAR_10->flags & VAR_4) &&
     (VAR_10->hw.mac.type == VAR_6) &&
     (VAR_11 > (VAR_2 + VAR_1)))
  FUNC_1(VAR_7, "Setting MTU > 1500 will disable legacy VFs\n");

 FUNC_0(VAR_7, "changing MTU from %d to %d\n", VAR_8->mtu, VAR_9);


 VAR_8->mtu = VAR_9;

 if (FUNC_4(VAR_8))
  FUNC_2(VAR_10);

 return 0;
}
