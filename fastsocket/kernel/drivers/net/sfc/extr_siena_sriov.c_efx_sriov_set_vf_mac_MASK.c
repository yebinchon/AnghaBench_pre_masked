
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int mac_addr; } ;
struct efx_vf {int status_lock; TYPE_1__ addr; } ;
struct efx_nic {int vf_init_count; struct efx_vf* vf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct efx_vf*) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct efx_nic* FUNC_4 (struct net_device*) ;

int FUNC_5(struct net_device *VAR_2, int VAR_3, u8 *VAR_4)
{
 struct efx_nic *VAR_5 = FUNC_4(VAR_2);
 struct efx_vf *VAR_6;

 if (VAR_3 >= VAR_5->vf_init_count)
  return -VAR_0;
 VAR_6 = VAR_5->vf + VAR_3;

 FUNC_2(&VAR_6->status_lock);
 FUNC_1(VAR_6->addr.mac_addr, VAR_4, VAR_1);
 FUNC_0(VAR_6);
 FUNC_3(&VAR_6->status_lock);

 return 0;
}
