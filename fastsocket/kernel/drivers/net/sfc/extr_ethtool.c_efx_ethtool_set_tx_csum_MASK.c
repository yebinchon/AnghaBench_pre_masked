
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct net_device {unsigned long features; } ;
struct efx_nic {TYPE_1__* type; } ;
struct TYPE_2__ {unsigned long offload_features; } ;


 unsigned long VAR_0 ;
 struct efx_nic* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1, u32 VAR_2)
{
 struct efx_nic *VAR_3 = FUNC_0(VAR_1);
 unsigned long VAR_4 = VAR_3->type->offload_features & VAR_0;

 if (VAR_2)
  VAR_1->features |= VAR_4;
 else
  VAR_1->features &= ~VAR_4;

 return 0;
}
