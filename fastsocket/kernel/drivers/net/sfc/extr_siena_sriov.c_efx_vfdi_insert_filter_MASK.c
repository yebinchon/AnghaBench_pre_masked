
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int rxq; int flags; } ;
struct TYPE_6__ {TYPE_2__ mac_filter; } ;
struct vfdi_req {TYPE_3__ u; } ;
struct TYPE_4__ {struct vfdi_req* addr; } ;
struct efx_vf {int rx_filtering; unsigned int rx_filter_flags; unsigned int rx_filter_qid; int pci_name; TYPE_1__ buf; struct efx_nic* efx; } ;
struct efx_nic {int peer_work; int net_dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct efx_nic*,unsigned int) ;
 int FUNC_1 (struct efx_vf*) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct efx_nic*,int ,int ,char*,int ,unsigned int,int) ;
 int FUNC_4 (int ,int *) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_5(struct efx_vf *VAR_8)
{
 struct efx_nic *VAR_9 = VAR_8->efx;
 struct vfdi_req *VAR_10 = VAR_8->buf.addr;
 unsigned VAR_11 = VAR_10->u.mac_filter.rxq;
 unsigned VAR_12;

 if (FUNC_0(VAR_9, VAR_11) || VAR_8->rx_filtering) {
  if (FUNC_2())
   FUNC_3(VAR_9, VAR_6, VAR_9->net_dev,
      "ERROR: Invalid INSERT_FILTER from %s: rxq %d "
      "flags 0x%x\n", VAR_8->pci_name, VAR_11,
      VAR_10->u.mac_filter.flags);
  return VAR_4;
 }

 VAR_12 = 0;
 if (VAR_10->u.mac_filter.flags & VAR_2)
  VAR_12 |= VAR_0;
 if (VAR_10->u.mac_filter.flags & VAR_3)
  VAR_12 |= VAR_1;
 VAR_8->rx_filter_flags = VAR_12;
 VAR_8->rx_filter_qid = VAR_11;
 VAR_8->rx_filtering = 1;

 FUNC_1(VAR_8);
 FUNC_4(VAR_7, &VAR_9->peer_work);

 return VAR_5;
}
