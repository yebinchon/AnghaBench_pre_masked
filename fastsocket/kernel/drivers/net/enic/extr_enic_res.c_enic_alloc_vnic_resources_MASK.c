
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wq_enet_desc {int dummy; } ;
struct rq_enet_desc {int dummy; } ;
struct TYPE_2__ {int wq_desc_count; int rq_desc_count; } ;
struct enic {unsigned int wq_count; unsigned int rq_count; unsigned int cq_count; unsigned int intr_count; int legacy_pba; int vdev; int * intr; TYPE_1__ config; int * cq; int * rq; int * wq; } ;
struct cq_enet_wq_desc {int dummy; } ;
struct cq_enet_rq_desc {int dummy; } ;
typedef enum vnic_dev_intr_mode { ____Placeholder_vnic_dev_intr_mode } vnic_dev_intr_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int,unsigned int,unsigned int,char*) ;
 int FUNC_2 (struct enic*) ;
 int FUNC_3 (struct enic*) ;
 int FUNC_4 (int ,int *,unsigned int,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int *,unsigned int) ;
 int FUNC_8 (int ,int *,unsigned int,int ,int) ;
 int FUNC_9 (int ,int *,unsigned int,int ,int) ;

int FUNC_10(struct enic *VAR_5)
{
 enum vnic_dev_intr_mode VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 VAR_6 = FUNC_5(VAR_5->vdev);

 FUNC_1(FUNC_3(VAR_5), "vNIC resources used:  "
  "wq %d rq %d cq %d intr %d intr mode %s\n",
  VAR_5->wq_count, VAR_5->rq_count,
  VAR_5->cq_count, VAR_5->intr_count,
  VAR_6 == VAR_2 ? "legacy PCI INTx" :
  VAR_6 == VAR_3 ? "MSI" :
  VAR_6 == VAR_4 ? "MSI-X" :
  "unknown");




 for (VAR_7 = 0; VAR_7 < VAR_5->wq_count; VAR_7++) {
  VAR_8 = FUNC_9(VAR_5->vdev, &VAR_5->wq[VAR_7], VAR_7,
   VAR_5->config.wq_desc_count,
   sizeof(struct wq_enet_desc));
  if (VAR_8)
   goto err_out_cleanup;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5->rq_count; VAR_7++) {
  VAR_8 = FUNC_8(VAR_5->vdev, &VAR_5->rq[VAR_7], VAR_7,
   VAR_5->config.rq_desc_count,
   sizeof(struct rq_enet_desc));
  if (VAR_8)
   goto err_out_cleanup;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5->cq_count; VAR_7++) {
  if (VAR_7 < VAR_5->rq_count)
   VAR_8 = FUNC_4(VAR_5->vdev, &VAR_5->cq[VAR_7], VAR_7,
    VAR_5->config.rq_desc_count,
    sizeof(struct cq_enet_rq_desc));
  else
   VAR_8 = FUNC_4(VAR_5->vdev, &VAR_5->cq[VAR_7], VAR_7,
    VAR_5->config.wq_desc_count,
    sizeof(struct cq_enet_wq_desc));
  if (VAR_8)
   goto err_out_cleanup;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5->intr_count; VAR_7++) {
  VAR_8 = FUNC_7(VAR_5->vdev, &VAR_5->intr[VAR_7], VAR_7);
  if (VAR_8)
   goto err_out_cleanup;
 }




 VAR_5->legacy_pba = FUNC_6(VAR_5->vdev,
  VAR_1, 0);
 if (!VAR_5->legacy_pba && VAR_6 == VAR_2) {
  FUNC_0(FUNC_3(VAR_5),
   "Failed to hook legacy pba resource\n");
  VAR_8 = -VAR_0;
  goto err_out_cleanup;
 }

 return 0;

err_out_cleanup:
 FUNC_2(VAR_5);

 return VAR_8;
}
