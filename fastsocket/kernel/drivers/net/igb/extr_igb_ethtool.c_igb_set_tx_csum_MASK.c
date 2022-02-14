
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct net_device {int features; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct igb_adapter {TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct igb_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_4, u32 VAR_5)
{
 struct igb_adapter *VAR_6 = FUNC_0(VAR_4);

 if (VAR_5) {
  VAR_4->features |= (VAR_1 | VAR_0);
  if (VAR_6->hw.mac.type >= VAR_3)
   VAR_4->features |= VAR_2;
 } else {
  VAR_4->features &= ~(VAR_1 | VAR_0 |
                        VAR_2);
 }

 return 0;
}
