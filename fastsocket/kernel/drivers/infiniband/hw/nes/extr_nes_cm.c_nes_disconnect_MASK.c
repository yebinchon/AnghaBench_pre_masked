
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct nes_vnic {TYPE_2__* netdev; struct nes_ib_device* nesibdev; struct nes_device* nesdev; } ;
struct TYPE_7__ {int device; } ;
struct nes_qp {scalar_t__ cm_node; int ietf_frame_pbase; int ietf_frame; scalar_t__ ietf_frame_size; scalar_t__ private_data_len; int lsmm_mr; scalar_t__ active_conn; TYPE_1__ ibqp; } ;
struct TYPE_9__ {int (* dereg_mr ) (int ) ;} ;
struct nes_ib_device {TYPE_3__ ibdev; } ;
struct nes_device {int pcidev; } ;
struct TYPE_11__ {TYPE_4__* api; } ;
struct TYPE_10__ {int (* close ) (TYPE_5__*,scalar_t__) ;} ;
struct TYPE_8__ {int refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_5__* VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*,scalar_t__) ;
 struct nes_vnic* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct nes_qp *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 struct nes_vnic *VAR_6;
 struct nes_device *VAR_7;
 struct nes_ib_device *VAR_8;

 VAR_6 = FUNC_5(VAR_3->ibqp.device);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = VAR_6->nesdev;
 VAR_8 = VAR_6->nesibdev;

 FUNC_1(VAR_1, "netdev refcnt = %u.\n",
   FUNC_0(&VAR_6->netdev->refcnt));

 if (VAR_3->active_conn) {


  VAR_3->active_conn = 0;
 } else {

  if (VAR_3->ietf_frame) {
   if (VAR_3->lsmm_mr)
    VAR_8->ibdev.dereg_mr(VAR_3->lsmm_mr);
   FUNC_2(VAR_7->pcidev,
         VAR_3->private_data_len + VAR_3->ietf_frame_size,
         VAR_3->ietf_frame, VAR_3->ietf_frame_pbase);
  }
 }


 if (VAR_3->cm_node) {
  FUNC_1(VAR_1, "Call close API\n");

  VAR_2->api->close(VAR_2, VAR_3->cm_node);
 }

 return VAR_5;
}
