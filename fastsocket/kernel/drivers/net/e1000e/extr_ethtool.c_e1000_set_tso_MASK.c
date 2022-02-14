
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int features; } ;
struct e1000_adapter {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct e1000_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_3, u32 VAR_4)
{
 struct e1000_adapter *VAR_5 = FUNC_0(VAR_3);

 if (VAR_4) {
  VAR_3->features |= VAR_1;
  VAR_3->features |= VAR_2;
 } else {
  VAR_3->features &= ~VAR_1;
  VAR_3->features &= ~VAR_2;
 }

 VAR_5->flags |= VAR_0;
 return 0;
}
