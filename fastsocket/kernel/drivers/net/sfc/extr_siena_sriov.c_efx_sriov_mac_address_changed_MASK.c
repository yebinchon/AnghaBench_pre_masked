
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vfdi_status {TYPE_2__* peers; } ;
struct TYPE_4__ {struct vfdi_status* addr; } ;
struct efx_nic {int peer_work; TYPE_3__* net_dev; int vf_init_count; TYPE_1__ vfdi_status; } ;
struct TYPE_6__ {int dev_addr; } ;
struct TYPE_5__ {int mac_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;

void FUNC_2(struct efx_nic *VAR_2)
{
 struct vfdi_status *VAR_3 = VAR_2->vfdi_status.addr;

 if (!VAR_2->vf_init_count)
  return;
 FUNC_0(VAR_3->peers[0].mac_addr,
        VAR_2->net_dev->dev_addr, VAR_0);
 FUNC_1(VAR_1, &VAR_2->peer_work);
}
