
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rt2x00_intf {int dummy; } ;
struct rt2x00_dev {TYPE_4__* ops; int sleep_work; int autowakeup_work; int intf_work; int workqueue; TYPE_2__* hw; int flags; int bar_list_lock; int bar_list; int csr_mutex; int irqmask_lock; int drv_data; } ;
struct TYPE_10__ {int interface_modes; int flags; scalar_t__* addr_mask; } ;
struct TYPE_9__ {scalar_t__ drv_data_size; TYPE_3__* lib; TYPE_1__* bcn; scalar_t__ max_ap_intf; } ;
struct TYPE_8__ {int (* probe_hw ) (struct rt2x00_dev*) ;} ;
struct TYPE_7__ {int vif_data_size; TYPE_5__* wiphy; } ;
struct TYPE_6__ {scalar_t__ entry_num; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct rt2x00_dev*,char*) ;
 int FUNC_8 (struct rt2x00_dev*) ;
 int FUNC_9 (struct rt2x00_dev*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (struct rt2x00_dev*) ;
 int FUNC_11 (struct rt2x00_dev*) ;
 int FUNC_12 (struct rt2x00_dev*) ;
 int VAR_12 ;
 int FUNC_13 (struct rt2x00_dev*) ;
 int FUNC_14 (struct rt2x00_dev*) ;
 int FUNC_15 (struct rt2x00_dev*) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct rt2x00_dev*) ;
 int FUNC_19 (TYPE_5__*) ;

int FUNC_20(struct rt2x00_dev *VAR_13)
{
 int VAR_14 = -VAR_1;




 FUNC_12(VAR_13);




 if (VAR_13->ops->drv_data_size > 0) {
  VAR_13->drv_data = FUNC_5(VAR_13->ops->drv_data_size,
                         VAR_3);
  if (!VAR_13->drv_data) {
   VAR_14 = -VAR_1;
   goto exit;
  }
 }

 FUNC_17(&VAR_13->irqmask_lock);
 FUNC_6(&VAR_13->csr_mutex);
 FUNC_2(&VAR_13->bar_list);
 FUNC_17(&VAR_13->bar_list_lock);

 FUNC_16(VAR_0, &VAR_13->flags);





 VAR_13->hw->vif_data_size = sizeof(struct rt2x00_intf);





 VAR_13->hw->wiphy->addr_mask[VAR_2 - 1] =
  (VAR_13->ops->max_ap_intf - 1);






 VAR_13->hw->wiphy->interface_modes = FUNC_0(VAR_7);
 if (VAR_13->ops->bcn->entry_num > 0)
  VAR_13->hw->wiphy->interface_modes |=
      FUNC_0(VAR_4) |
      FUNC_0(VAR_5) |



      FUNC_0(VAR_8);

 VAR_13->hw->wiphy->flags |= VAR_9;




 VAR_13->workqueue =
     FUNC_4(FUNC_19(VAR_13->hw->wiphy), 0);
 if (!VAR_13->workqueue) {
  VAR_14 = -VAR_1;
  goto exit;
 }

 FUNC_3(&VAR_13->intf_work, VAR_11);
 FUNC_1(&VAR_13->autowakeup_work, VAR_10);
 FUNC_3(&VAR_13->sleep_work, VAR_12);




 VAR_14 = VAR_13->ops->lib->probe_hw(VAR_13);
 if (VAR_14) {
  FUNC_7(VAR_13, "Failed to allocate device\n");
  goto exit;
 }




 VAR_14 = FUNC_14(VAR_13);
 if (VAR_14)
  goto exit;




 VAR_14 = FUNC_10(VAR_13);
 if (VAR_14) {
  FUNC_7(VAR_13, "Failed to initialize hw\n");
  goto exit;
 }




 FUNC_13(VAR_13);
 FUNC_9(VAR_13);
 FUNC_8(VAR_13);
 FUNC_15(VAR_13);

 return 0;

exit:
 FUNC_11(VAR_13);

 return VAR_14;
}
