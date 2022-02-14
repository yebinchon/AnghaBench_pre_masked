
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct ixgbevf_adapter {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbevf_adapter*) ;
 int FUNC_1 (struct ixgbevf_adapter*) ;
 struct ixgbevf_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, u32 VAR_2)
{
 struct ixgbevf_adapter *VAR_3 = FUNC_2(VAR_1);
 if (VAR_2)
  VAR_3->flags |= VAR_0;
 else
  VAR_3->flags &= ~VAR_0;

 if (FUNC_3(VAR_1)) {
  FUNC_0(VAR_3);
 } else {
  FUNC_1(VAR_3);
 }

 return 0;
}
