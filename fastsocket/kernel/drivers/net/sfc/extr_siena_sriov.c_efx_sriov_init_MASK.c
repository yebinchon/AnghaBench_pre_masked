
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vfdi_status {int version; int length; scalar_t__ peer_count; TYPE_1__* peers; int timer_quantum_ns; int rss_rxq_count; int vi_scale; int max_tx_channels; } ;
struct net_device {int dev_addr; } ;
struct TYPE_5__ {struct vfdi_status* addr; } ;
struct efx_nic {scalar_t__ vf_count; scalar_t__ vf_init_count; TYPE_2__ vfdi_status; int vf; int peer_work; int pci_dev; int local_page_list; int local_addr_list; int local_lock; int timer_quantum_ns; int rss_spread; int vi_scale; struct net_device* net_dev; } ;
struct TYPE_4__ {int mac_addr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct efx_nic*,TYPE_2__*,int) ;
 int FUNC_5 (struct efx_nic*,TYPE_2__*) ;
 int FUNC_6 (struct efx_nic*,int,int *,int *) ;
 int FUNC_7 (struct efx_nic*) ;
 int VAR_4 ;
 int FUNC_8 (struct efx_nic*,int) ;
 int FUNC_9 (struct efx_nic*) ;
 int FUNC_10 (struct efx_nic*) ;
 int FUNC_11 (struct efx_nic*) ;
 int FUNC_12 (struct efx_nic*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (struct vfdi_status*,int ,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct efx_nic*,int ,struct net_device*,char*,scalar_t__,int ) ;
 int FUNC_18 (int ,scalar_t__) ;
 int VAR_5 ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int VAR_6 ;

int FUNC_21(struct efx_nic *VAR_7)
{
 struct net_device *VAR_8 = VAR_7->net_dev;
 struct vfdi_status *VAR_9;
 int VAR_10;


 FUNC_0(VAR_0 + 1 >= VAR_1);

 FUNC_0(VAR_1 & ((1 << VAR_2) - 1));

 if (VAR_7->vf_count == 0)
  return 0;

 VAR_10 = FUNC_6(VAR_7, 1, ((void*)0), ((void*)0));
 if (VAR_10)
  goto fail_cmd;

 VAR_10 = FUNC_4(VAR_7, &VAR_7->vfdi_status, sizeof(*VAR_9));
 if (VAR_10)
  goto fail_status;
 VAR_9 = VAR_7->vfdi_status.addr;
 FUNC_15(VAR_9, 0, sizeof(*VAR_9));
 VAR_9->version = 1;
 VAR_9->length = sizeof(*VAR_9);
 VAR_9->max_tx_channels = VAR_6;
 VAR_9->vi_scale = VAR_7->vi_scale;
 VAR_9->rss_rxq_count = VAR_7->rss_spread;
 VAR_9->peer_count = 1 + VAR_7->vf_count;
 VAR_9->timer_quantum_ns = VAR_7->timer_quantum_ns;

 VAR_10 = FUNC_9(VAR_7);
 if (VAR_10)
  goto fail_alloc;

 FUNC_16(&VAR_7->local_lock);
 FUNC_2(&VAR_7->peer_work, VAR_4);
 FUNC_1(&VAR_7->local_addr_list);
 FUNC_1(&VAR_7->local_page_list);

 VAR_10 = FUNC_11(VAR_7);
 if (VAR_10)
  goto fail_vfs;

 FUNC_19();
 FUNC_14(VAR_9->peers[0].mac_addr,
        VAR_8->dev_addr, VAR_3);
 VAR_7->vf_init_count = VAR_7->vf_count;
 FUNC_20();

 FUNC_8(VAR_7, 1);



 VAR_10 = FUNC_18(VAR_7->pci_dev, VAR_7->vf_count);
 if (VAR_10)
  goto fail_pci;

 FUNC_17(VAR_7, VAR_5, VAR_8,
     "enabled SR-IOV for %d VFs, %d VI per VF\n",
     VAR_7->vf_count, FUNC_12(VAR_7));
 return 0;

fail_pci:
 FUNC_8(VAR_7, 0);
 FUNC_19();
 VAR_7->vf_init_count = 0;
 FUNC_20();
 FUNC_10(VAR_7);
fail_vfs:
 FUNC_3(&VAR_7->peer_work);
 FUNC_7(VAR_7);
 FUNC_13(VAR_7->vf);
fail_alloc:
 FUNC_5(VAR_7, &VAR_7->vfdi_status);
fail_status:
 FUNC_6(VAR_7, 0, ((void*)0), ((void*)0));
fail_cmd:
 return VAR_10;
}
