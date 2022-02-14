
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
union efx_ioctl_data {TYPE_1__ reset_flags; } ;
struct efx_nic {int net_dev; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static int
FUNC_1(struct efx_nic *VAR_0, union efx_ioctl_data *VAR_1)
{
 return FUNC_0(VAR_0->net_dev, &VAR_1->reset_flags.flags);
}
