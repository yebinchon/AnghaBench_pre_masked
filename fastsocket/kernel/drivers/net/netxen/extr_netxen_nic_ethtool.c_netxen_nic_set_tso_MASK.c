
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int revision_id; } ;
struct netxen_adapter {TYPE_1__ ahw; } ;
struct net_device {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct netxen_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, u32 VAR_3)
{
 if (VAR_3) {
  struct netxen_adapter *VAR_4 = FUNC_1(VAR_2);

  VAR_2->features |= VAR_0;
  if (FUNC_0(VAR_4->ahw.revision_id))
   VAR_2->features |= VAR_1;
 } else
  VAR_2->features &= ~(VAR_0 | VAR_1);

 return 0;
}
