
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct whc_qset {int dummy; } ;
struct whc {int n_devices; void* di_buf; int di_buf_dma; TYPE_2__* umc; void* dn_buf; int dn_buf_dma; int * gen_cmd_buf; int gen_cmd_buf_dma; int * qset_pool; int n_mmc_ies; int n_keys; scalar_t__ base; scalar_t__ base_phys; int periodic_removed_list; int * periodic_list; int periodic_work; int async_removed_list; int async_list; int async_work; int dn_work; int * workqueue; int periodic_list_wq; int async_list_wq; int cmd_wq; int mutex; int lock; } ;
struct dn_buf_entry {int dummy; } ;
struct di_buf_entry {int dummy; } ;
typedef scalar_t__ resource_size_t ;
struct TYPE_3__ {scalar_t__ end; scalar_t__ start; } ;
struct TYPE_4__ {int dev; TYPE_1__ resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct whc*) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *,char*,int,int ,int ) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 void* FUNC_10 (int *,int,int *,int ) ;
 int * FUNC_11 (char*,int *,int,int,int ) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct whc*) ;
 int FUNC_17 (scalar_t__,scalar_t__,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct whc*) ;
 int VAR_8 ;
 int FUNC_20 (struct whc*) ;
 int FUNC_21 (struct whc*) ;
 int FUNC_22 (struct whc*) ;

int FUNC_23(struct whc *VAR_9)
{
 u32 VAR_10;
 int VAR_11, VAR_12;
 resource_size_t VAR_13, VAR_14;

 FUNC_18(&VAR_9->lock);
 FUNC_15(&VAR_9->mutex);
 FUNC_12(&VAR_9->cmd_wq);
 FUNC_12(&VAR_9->async_list_wq);
 FUNC_12(&VAR_9->periodic_list_wq);
 VAR_9->workqueue = FUNC_6(FUNC_9(&VAR_9->umc->dev));
 if (VAR_9->workqueue == ((void*)0)) {
  VAR_11 = -VAR_1;
  goto error;
 }
 FUNC_1(&VAR_9->dn_work, VAR_8);

 FUNC_1(&VAR_9->async_work, VAR_6);
 FUNC_0(&VAR_9->async_list);
 FUNC_0(&VAR_9->async_removed_list);

 FUNC_1(&VAR_9->periodic_work, VAR_7);
 for (VAR_12 = 0; VAR_12 < 5; VAR_12++)
  FUNC_0(&VAR_9->periodic_list[VAR_12]);
 FUNC_0(&VAR_9->periodic_removed_list);


 VAR_13 = VAR_9->umc->resource.start;
 VAR_14 = VAR_9->umc->resource.end - VAR_13 + 1;
 if (!FUNC_17(VAR_13, VAR_14, "whci-hc")) {
  FUNC_8(&VAR_9->umc->dev, "can't request HC region\n");
  VAR_11 = -VAR_0;
  goto error;
 }
 VAR_9->base_phys = VAR_13;
 VAR_9->base = FUNC_13(VAR_13, VAR_14);
 if (!VAR_9->base) {
  FUNC_8(&VAR_9->umc->dev, "ioremap\n");
  VAR_11 = -VAR_1;
  goto error;
 }

 FUNC_22(VAR_9);


 VAR_10 = FUNC_14(VAR_9->base + VAR_3);
 VAR_9->n_devices = FUNC_2(VAR_10);
 VAR_9->n_keys = FUNC_3(VAR_10);
 VAR_9->n_mmc_ies = FUNC_4(VAR_10);

 FUNC_7(&VAR_9->umc->dev, "N_DEVICES = %d, N_KEYS = %d, N_MMC_IES = %d\n",
  VAR_9->n_devices, VAR_9->n_keys, VAR_9->n_mmc_ies);

 VAR_9->qset_pool = FUNC_11("qset", &VAR_9->umc->dev,
      sizeof(struct whc_qset), 64, 0);
 if (VAR_9->qset_pool == ((void*)0)) {
  VAR_11 = -VAR_1;
  goto error;
 }

 VAR_11 = FUNC_5(VAR_9);
 if (VAR_11 < 0)
  goto error;
 VAR_11 = FUNC_16(VAR_9);
 if (VAR_11 < 0)
  goto error;





 VAR_9->gen_cmd_buf = FUNC_10(&VAR_9->umc->dev, VAR_4,
           &VAR_9->gen_cmd_buf_dma, VAR_2);
 if (VAR_9->gen_cmd_buf == ((void*)0)) {
  VAR_11 = -VAR_1;
  goto error;
 }

 VAR_9->dn_buf = FUNC_10(&VAR_9->umc->dev,
      sizeof(struct dn_buf_entry) * VAR_5,
      &VAR_9->dn_buf_dma, VAR_2);
 if (!VAR_9->dn_buf) {
  VAR_11 = -VAR_1;
  goto error;
 }
 FUNC_21(VAR_9);

 VAR_9->di_buf = FUNC_10(&VAR_9->umc->dev,
      sizeof(struct di_buf_entry) * VAR_9->n_devices,
      &VAR_9->di_buf_dma, VAR_2);
 if (!VAR_9->di_buf) {
  VAR_11 = -VAR_1;
  goto error;
 }
 FUNC_20(VAR_9);

 return 0;

error:
 FUNC_19(VAR_9);
 return VAR_11;
}
