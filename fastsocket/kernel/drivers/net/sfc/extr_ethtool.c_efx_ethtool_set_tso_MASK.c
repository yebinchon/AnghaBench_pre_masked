
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct net_device {unsigned long features; } ;
struct efx_nic {TYPE_1__* type; } ;
struct TYPE_2__ {int offload_features; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 struct efx_nic* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_3, u32 VAR_4)
{
 struct efx_nic *VAR_5 __attribute__ ((unused)) = FUNC_0(VAR_3);
 unsigned long VAR_6;

 VAR_6 = VAR_0;
 if (VAR_5->type->offload_features & VAR_2)
  VAR_6 |= VAR_1;

 if (VAR_4)
  VAR_3->features |= VAR_6;
 else
  VAR_3->features &= ~VAR_6;

 return 0;
}
