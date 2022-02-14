
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int u32 ;
struct nes_vnic {scalar_t__ local_ipaddr; struct nes_device* nesdev; } ;
struct TYPE_12__ {int device; } ;
struct TYPE_13__ {int qp_id; } ;
struct nes_qp {int active_conn; int private_data_len; TYPE_10__ ibqp; struct nes_cm_node* cm_node; TYPE_2__* nesqp_context; struct iw_cm_id* cm_id; TYPE_1__ hwqp; } ;
struct nes_device {TYPE_8__* pcidev; } ;
struct nes_cm_node {int apbvt_set; struct nes_qp* nesqp; } ;
struct nes_cm_info {int conn_type; struct iw_cm_id* cm_id; void* rem_port; void* rem_addr; void* loc_port; void* loc_addr; } ;
struct TYPE_15__ {scalar_t__ s_addr; } ;
struct TYPE_19__ {int sin_port; TYPE_3__ sin_addr; } ;
struct TYPE_16__ {scalar_t__ s_addr; } ;
struct TYPE_17__ {int sin_port; TYPE_4__ sin_addr; } ;
struct iw_cm_id {int (* rem_ref ) (struct iw_cm_id*) ;TYPE_7__ local_addr; int (* add_ref ) (struct iw_cm_id*) ;TYPE_5__ remote_addr; struct nes_qp* provider_data; int device; } ;
struct iw_cm_conn_param {int private_data_len; scalar_t__ ord; scalar_t__ private_data; int qpn; } ;
struct ib_qp {int dummy; } ;
struct TYPE_21__ {TYPE_6__* api; } ;
struct TYPE_20__ {int devfn; } ;
struct TYPE_18__ {struct nes_cm_node* (* connect ) (TYPE_9__*,struct nes_vnic*,int,void*,struct nes_cm_info*) ;} ;
struct TYPE_14__ {int ird_ord_sizes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 TYPE_9__* VAR_7 ;
 void* FUNC_3 (scalar_t__) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_10__*) ;
 int FUNC_6 (int ,char*,int,...) ;
 struct ib_qp* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct nes_vnic*,int ,int ,int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct iw_cm_id*) ;
 struct nes_cm_node* FUNC_12 (TYPE_9__*,struct nes_vnic*,int,void*,struct nes_cm_info*) ;
 int FUNC_13 (struct iw_cm_id*) ;
 struct nes_qp* FUNC_14 (struct ib_qp*) ;
 struct nes_vnic* FUNC_15 (int ) ;

int FUNC_16(struct iw_cm_id *VAR_8, struct iw_cm_conn_param *VAR_9)
{
 struct ib_qp *VAR_10;
 struct nes_qp *VAR_11;
 struct nes_vnic *VAR_12;
 struct nes_device *VAR_13;
 struct nes_cm_node *VAR_14;
 struct nes_cm_info VAR_15;
 int VAR_16 = 0;

 VAR_10 = FUNC_7(VAR_8->device, VAR_9->qpn);
 if (!VAR_10)
  return -VAR_0;
 VAR_11 = FUNC_14(VAR_10);
 if (!VAR_11)
  return -VAR_0;
 VAR_12 = FUNC_15(VAR_11->ibqp.device);
 if (!VAR_12)
  return -VAR_0;
 VAR_13 = VAR_12->nesdev;
 if (!VAR_13)
  return -VAR_0;

 if (!(VAR_8->local_addr.sin_port) || !(VAR_8->remote_addr.sin_port))
  return -VAR_0;

 FUNC_6(VAR_3, "QP%u, current IP = 0x%08X, Destination IP = "
    "0x%08X:0x%04X, local = 0x%08X:0x%04X.\n", VAR_11->hwqp.qp_id,
    FUNC_9(VAR_12->local_ipaddr),
    FUNC_9(VAR_8->remote_addr.sin_addr.s_addr),
    FUNC_10(VAR_8->remote_addr.sin_port),
    FUNC_9(VAR_8->local_addr.sin_addr.s_addr),
    FUNC_10(VAR_8->local_addr.sin_port));

 FUNC_1(&VAR_6);
 VAR_11->active_conn = 1;


 VAR_11->cm_id = VAR_8;

 VAR_8->provider_data = VAR_11;

 VAR_11->private_data_len = VAR_9->private_data_len;
 VAR_11->nesqp_context->ird_ord_sizes |= FUNC_2((u32)VAR_9->ord);

 if (VAR_9->ord == 0)
  VAR_11->nesqp_context->ird_ord_sizes |= FUNC_2(1);

 FUNC_6(VAR_3, "requested ord = 0x%08X.\n", (u32)VAR_9->ord);
 FUNC_6(VAR_3, "mpa private data len =%u\n",
    VAR_9->private_data_len);

 if (VAR_8->local_addr.sin_addr.s_addr !=
     VAR_8->remote_addr.sin_addr.s_addr) {
  FUNC_8(VAR_12, FUNC_10(VAR_8->local_addr.sin_port),
     FUNC_0(VAR_13->pcidev->devfn), VAR_4);
  VAR_16 = 1;
 }


 VAR_15.loc_addr = FUNC_3(VAR_8->local_addr.sin_addr.s_addr);
 VAR_15.loc_port = FUNC_4(VAR_8->local_addr.sin_port);
 VAR_15.rem_addr = FUNC_3(VAR_8->remote_addr.sin_addr.s_addr);
 VAR_15.rem_port = FUNC_4(VAR_8->remote_addr.sin_port);
 VAR_15.cm_id = VAR_8;
 VAR_15.conn_type = VAR_2;

 VAR_8->add_ref(VAR_8);


 VAR_14 = VAR_7->api->connect(VAR_7, VAR_12,
       VAR_9->private_data_len, (void *)VAR_9->private_data,
       &VAR_15);
 if (!VAR_14) {
  if (VAR_16)
   FUNC_8(VAR_12, FUNC_10(VAR_8->local_addr.sin_port),
      FUNC_0(VAR_13->pcidev->devfn),
      VAR_5);

  VAR_8->rem_ref(VAR_8);
  return -VAR_1;
 }

 VAR_14->apbvt_set = VAR_16;
 VAR_11->cm_node = VAR_14;
 VAR_14->nesqp = VAR_11;
 FUNC_5(&VAR_11->ibqp);

 return 0;
}
