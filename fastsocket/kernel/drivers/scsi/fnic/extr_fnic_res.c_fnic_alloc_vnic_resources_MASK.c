
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wq_enet_desc {int dummy; } ;
struct rq_enet_desc {int dummy; } ;
struct TYPE_3__ {unsigned int wq_enet_desc_count; int wq_copy_desc_count; unsigned int rq_desc_count; int intr_timer_type; int intr_timer; } ;
struct fnic {unsigned int wq_copy_count; unsigned int raw_wq_count; unsigned int rq_count; unsigned int cq_count; unsigned int intr_count; unsigned int err_intr_offset; int vdev; TYPE_2__* lport; int stats; TYPE_1__ config; int * intr; int * cq; int * wq_copy; int * wq; int * rq; int legacy_pba; int wq_count; } ;
struct fcpio_host_req {int dummy; } ;
struct fcpio_fw_req {int dummy; } ;
struct cq_enet_wq_desc {int dummy; } ;
struct cq_enet_rq_desc {int dummy; } ;
typedef enum vnic_dev_intr_mode { ____Placeholder_vnic_dev_intr_mode } vnic_dev_intr_mode ;
struct TYPE_4__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (struct fnic*) ;
 int FUNC_1 (int ,int ,char*,...) ;
 int FUNC_2 (int ,int *,unsigned int,unsigned int,int) ;
 int FUNC_3 (int *,int ,int,int ,int ,int,int,int,int ,unsigned int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *,unsigned int) ;
 int FUNC_9 (int *,int ,int ,unsigned int) ;
 int FUNC_10 (int ,int *,unsigned int,unsigned int,int) ;
 int FUNC_11 (int *,unsigned int,unsigned int,unsigned int) ;
 int FUNC_12 (int ,int *,unsigned int,unsigned int,int) ;
 int FUNC_13 (int ,int *,unsigned int,int,int) ;
 int FUNC_14 (int *,int ,unsigned int,unsigned int) ;
 int FUNC_15 (int *,unsigned int,unsigned int,unsigned int) ;

int FUNC_16(struct fnic *VAR_4)
{
 enum vnic_dev_intr_mode VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10, VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 VAR_5 = FUNC_4(VAR_4->vdev);

 FUNC_1(VAR_2, VAR_4->lport->host, "vNIC interrupt mode: %s\n",
       VAR_5 == 130 ? "legacy PCI INTx" :
       VAR_5 == 129 ? "MSI" :
       VAR_5 == 128 ?
       "MSI-X" : "unknown");

 FUNC_1(VAR_2, VAR_4->lport->host, "vNIC resources avail: "
       "wq %d cp_wq %d raw_wq %d rq %d cq %d intr %d\n",
       VAR_4->wq_count, VAR_4->wq_copy_count, VAR_4->raw_wq_count,
       VAR_4->rq_count, VAR_4->cq_count, VAR_4->intr_count);


 for (VAR_10 = 0; VAR_10 < VAR_4->raw_wq_count; VAR_10++) {
  VAR_13 = FUNC_12(VAR_4->vdev, &VAR_4->wq[VAR_10], VAR_10,
   VAR_4->config.wq_enet_desc_count,
   sizeof(struct wq_enet_desc));
  if (VAR_13)
   goto err_out_cleanup;
 }


 for (VAR_10 = 0; VAR_10 < VAR_4->wq_copy_count; VAR_10++) {
  VAR_13 = FUNC_13(VAR_4->vdev, &VAR_4->wq_copy[VAR_10],
   (VAR_4->raw_wq_count + VAR_10),
   VAR_4->config.wq_copy_desc_count,
   sizeof(struct fcpio_host_req));
  if (VAR_13)
   goto err_out_cleanup;
 }


 for (VAR_10 = 0; VAR_10 < VAR_4->rq_count; VAR_10++) {
  VAR_13 = FUNC_10(VAR_4->vdev, &VAR_4->rq[VAR_10], VAR_10,
   VAR_4->config.rq_desc_count,
   sizeof(struct rq_enet_desc));
  if (VAR_13)
   goto err_out_cleanup;
 }


 for (VAR_10 = 0; VAR_10 < VAR_4->rq_count; VAR_10++) {
  VAR_11 = VAR_10;
  VAR_13 = FUNC_2(VAR_4->vdev,
   &VAR_4->cq[VAR_11], VAR_11,
   VAR_4->config.rq_desc_count,
   sizeof(struct cq_enet_rq_desc));
  if (VAR_13)
   goto err_out_cleanup;
 }


 for (VAR_10 = 0; VAR_10 < VAR_4->raw_wq_count; VAR_10++) {
  VAR_11 = VAR_4->rq_count + VAR_10;
  VAR_13 = FUNC_2(VAR_4->vdev, &VAR_4->cq[VAR_11], VAR_11,
   VAR_4->config.wq_enet_desc_count,
   sizeof(struct cq_enet_wq_desc));
  if (VAR_13)
   goto err_out_cleanup;
 }


 VAR_12 = (VAR_4->config.wq_copy_desc_count * 3);
 for (VAR_10 = 0; VAR_10 < VAR_4->wq_copy_count; VAR_10++) {
  VAR_11 = VAR_4->raw_wq_count + VAR_4->rq_count + VAR_10;
  VAR_13 = FUNC_2(VAR_4->vdev, &VAR_4->cq[VAR_11],
   VAR_11,
   VAR_12,
   sizeof(struct fcpio_fw_req));
  if (VAR_13)
   goto err_out_cleanup;
 }

 for (VAR_10 = 0; VAR_10 < VAR_4->intr_count; VAR_10++) {
  VAR_13 = FUNC_8(VAR_4->vdev, &VAR_4->intr[VAR_10], VAR_10);
  if (VAR_13)
   goto err_out_cleanup;
 }

 VAR_4->legacy_pba = FUNC_5(VAR_4->vdev,
    VAR_3, 0);

 if (!VAR_4->legacy_pba && VAR_5 == 130) {
  FUNC_1(VAR_1, VAR_4->lport->host,
        "Failed to hook legacy pba resource\n");
  VAR_13 = -VAR_0;
  goto err_out_cleanup;
 }
 switch (VAR_5) {
 case 130:
 case 128:
  VAR_8 = 1;
  VAR_9 = VAR_4->err_intr_offset;
  break;
 default:
  VAR_8 = 0;
  VAR_9 = 0;
  break;
 }

 for (VAR_10 = 0; VAR_10 < VAR_4->rq_count; VAR_10++) {
  VAR_11 = VAR_10;
  FUNC_11(&VAR_4->rq[VAR_10],
        VAR_11,
        VAR_8,
        VAR_9);
 }

 for (VAR_10 = 0; VAR_10 < VAR_4->raw_wq_count; VAR_10++) {
  VAR_11 = VAR_10 + VAR_4->rq_count;
  FUNC_15(&VAR_4->wq[VAR_10],
        VAR_11,
        VAR_8,
        VAR_9);
 }

 for (VAR_10 = 0; VAR_10 < VAR_4->wq_copy_count; VAR_10++) {
  FUNC_14(&VAR_4->wq_copy[VAR_10],
      0 ,
      VAR_8,
      VAR_9);
 }

 for (VAR_10 = 0; VAR_10 < VAR_4->cq_count; VAR_10++) {

  switch (VAR_5) {
  case 128:
   VAR_7 = VAR_10;
   break;
  default:
   VAR_7 = 0;
   break;
  }

  FUNC_3(&VAR_4->cq[VAR_10],
   0 ,
   1 ,
   0 ,
   0 ,
   1 ,
   1 ,
   1 ,
   0 ,
   VAR_7,
   0 );
 }
 switch (VAR_5) {
 case 129:
 case 128:
  VAR_6 = 1;
  break;
 default:
  VAR_6 = 0;
  break;
 }

 for (VAR_10 = 0; VAR_10 < VAR_4->intr_count; VAR_10++) {
  FUNC_9(&VAR_4->intr[VAR_10],
   VAR_4->config.intr_timer,
   VAR_4->config.intr_timer_type,
   VAR_6);
 }


 VAR_13 = FUNC_7(VAR_4->vdev, &VAR_4->stats);
 if (VAR_13) {
  FUNC_1(VAR_1, VAR_4->lport->host,
        "vnic_dev_stats_dump failed - x%x\n", VAR_13);
  goto err_out_cleanup;
 }


 FUNC_6(VAR_4->vdev);

 return 0;

err_out_cleanup:
 FUNC_0(VAR_4);

 return VAR_13;
}
