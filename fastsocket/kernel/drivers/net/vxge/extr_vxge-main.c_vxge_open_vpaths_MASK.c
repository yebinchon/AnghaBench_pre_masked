
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_15__ {int vpath_open_fail; int vpaths_open; } ;
struct TYPE_13__ {int gro_enable; int fifo_indicate_max_pkts; int tx_steering_type; } ;
struct vxgedev {int no_of_vpath; int vpaths_deployed; TYPE_9__* vpaths; TYPE_7__* ndev; TYPE_6__ stats; int vlan_tag_strip; TYPE_4__ config; scalar_t__* vp_handles; int rx_csum; int pdev; int devh; } ;
struct vxge_tx_priv {int dummy; } ;
struct vxge_rx_priv {int dummy; } ;
struct TYPE_11__ {int per_rxd_space; void* userdata; int rxd_term; int rxd_init; int callback; } ;
struct TYPE_10__ {int per_txdl_space; void* userdata; int txdl_term; int callback; } ;
struct vxge_hw_vpath_attr {TYPE_2__ ring_attr; TYPE_1__ fifo_attr; int vp_id; } ;
struct __vxge_hw_vpath_handle {TYPE_8__* vpath; } ;
struct __vxge_hw_ring {int dummy; } ;
struct __vxge_hw_fifo {int dummy; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;
struct TYPE_14__ {int vlan_tag_strip; int gro_enable; int rx_csum; scalar_t__ rx_vector_no; struct __vxge_hw_ring* handle; int pdev; TYPE_7__* ndev; } ;
struct TYPE_12__ {int indicate_max_pkts; int pdev; TYPE_7__* ndev; int tx_steering_type; struct __vxge_hw_fifo* handle; } ;
struct TYPE_18__ {int is_open; scalar_t__ handle; int device_id; TYPE_5__ ring; TYPE_3__ fifo; int is_configured; } ;
struct TYPE_17__ {int vp_id; } ;
struct TYPE_16__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vxgedev*,int ) ;
 int FUNC_2 (int ,char*,int ,int ,int) ;
 int FUNC_3 (int ,struct vxge_hw_vpath_attr*,scalar_t__*) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_5(struct vxgedev *VAR_8)
{
 enum vxge_hw_status VAR_9;
 int VAR_10;
 u32 VAR_11 = 0;
 struct vxge_hw_vpath_attr VAR_12;

 for (VAR_10 = 0; VAR_10 < VAR_8->no_of_vpath; VAR_10++) {
  FUNC_0(VAR_8->vpaths[VAR_10].is_configured);
  VAR_12.vp_id = VAR_8->vpaths[VAR_10].device_id;
  VAR_12.fifo_attr.callback = VAR_7;
  VAR_12.fifo_attr.txdl_term = VAR_6;
  VAR_12.fifo_attr.per_txdl_space = sizeof(struct vxge_tx_priv);
  VAR_12.fifo_attr.userdata = (void *)&VAR_8->vpaths[VAR_10].fifo;

  VAR_12.ring_attr.callback = VAR_3;
  VAR_12.ring_attr.rxd_init = VAR_4;
  VAR_12.ring_attr.rxd_term = VAR_5;
  VAR_12.ring_attr.per_rxd_space = sizeof(struct vxge_rx_priv);
  VAR_12.ring_attr.userdata = (void *)&VAR_8->vpaths[VAR_10].ring;

  VAR_8->vpaths[VAR_10].ring.ndev = VAR_8->ndev;
  VAR_8->vpaths[VAR_10].ring.pdev = VAR_8->pdev;
  VAR_9 = FUNC_3(VAR_8->devh, &VAR_12,
    &(VAR_8->vpaths[VAR_10].handle));
  if (VAR_9 == VAR_2) {
   VAR_8->vpaths[VAR_10].fifo.handle =
       (struct __vxge_hw_fifo *)VAR_12.fifo_attr.userdata;
   VAR_8->vpaths[VAR_10].ring.handle =
       (struct __vxge_hw_ring *)VAR_12.ring_attr.userdata;
   VAR_8->vpaths[VAR_10].fifo.tx_steering_type =
    VAR_8->config.tx_steering_type;
   VAR_8->vpaths[VAR_10].fifo.ndev = VAR_8->ndev;
   VAR_8->vpaths[VAR_10].fifo.pdev = VAR_8->pdev;
   VAR_8->vpaths[VAR_10].fifo.indicate_max_pkts =
    VAR_8->config.fifo_indicate_max_pkts;
   VAR_8->vpaths[VAR_10].ring.rx_vector_no = 0;
   VAR_8->vpaths[VAR_10].ring.rx_csum = VAR_8->rx_csum;
   VAR_8->vpaths[VAR_10].is_open = 1;
   VAR_8->vp_handles[VAR_10] = VAR_8->vpaths[VAR_10].handle;
   VAR_8->vpaths[VAR_10].ring.gro_enable =
      VAR_8->config.gro_enable;
   VAR_8->vpaths[VAR_10].ring.vlan_tag_strip =
      VAR_8->vlan_tag_strip;
   VAR_8->stats.vpaths_open++;
  } else {
   VAR_8->stats.vpath_open_fail++;
   FUNC_2(VAR_1,
    "%s: vpath: %d failed to open "
    "with status: %d",
       VAR_8->ndev->name, VAR_8->vpaths[VAR_10].device_id,
    VAR_9);
   FUNC_1(VAR_8, 0);
   return -VAR_0;
  }

  VAR_11 =
    ((struct __vxge_hw_vpath_handle *)VAR_8->vpaths[VAR_10].handle)->
    vpath->vp_id;
  VAR_8->vpaths_deployed |= FUNC_4(VAR_11);
 }
 return VAR_2;
}
