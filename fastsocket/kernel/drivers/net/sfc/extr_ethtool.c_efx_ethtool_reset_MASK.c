
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct efx_nic {TYPE_1__* type; } ;
struct TYPE_2__ {int (* map_reset_flags ) (int *) ;} ;


 int FUNC_0 (struct efx_nic*,int) ;
 struct efx_nic* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct net_device *VAR_0, u32 *VAR_1)
{
 struct efx_nic *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 VAR_3 = VAR_2->type->map_reset_flags(VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_0(VAR_2, VAR_3);
}
