
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct net_device {int dummy; } ;
struct ixgbevf_adapter {int state; int hw; } ;
struct ethtool_test {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (struct ixgbevf_adapter*,int *) ;
 scalar_t__ FUNC_5 (struct ixgbevf_adapter*,int *) ;
 int FUNC_6 (struct ixgbevf_adapter*) ;
 int FUNC_7 (int) ;
 struct ixgbevf_adapter* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct net_device *VAR_3,
         struct ethtool_test *VAR_4, u64 *VAR_5)
{
 struct ixgbevf_adapter *VAR_6 = FUNC_8(VAR_3);
 bool VAR_7 = FUNC_9(VAR_3);

 FUNC_10(VAR_2, &VAR_6->state);
 if (VAR_4->flags == VAR_1) {


  FUNC_3(&VAR_6->hw, "offline testing starting\n");



  if (FUNC_4(VAR_6, &VAR_5[1]))
   VAR_4->flags |= VAR_0;

  if (VAR_7)

   FUNC_1(VAR_3);
  else
   FUNC_6(VAR_6);

  FUNC_3(&VAR_6->hw, "register testing starting\n");
  if (FUNC_5(VAR_6, &VAR_5[0]))
   VAR_4->flags |= VAR_0;

  FUNC_6(VAR_6);

  FUNC_0(VAR_2, &VAR_6->state);
  if (VAR_7)
   FUNC_2(VAR_3);
 } else {
  FUNC_3(&VAR_6->hw, "online testing starting\n");

  if (FUNC_4(VAR_6, &VAR_5[1]))
   VAR_4->flags |= VAR_0;


  VAR_5[0] = 0;

  FUNC_0(VAR_2, &VAR_6->state);
 }
 FUNC_7(4 * 1000);
}
