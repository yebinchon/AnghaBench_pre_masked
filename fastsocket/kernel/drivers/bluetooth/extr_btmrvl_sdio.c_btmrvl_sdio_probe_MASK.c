
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int num; } ;
struct sdio_device_id {scalar_t__ driver_data; int class; int device; int vendor; } ;
struct btmrvl_sdio_device {int firmware; int helper; } ;
struct btmrvl_sdio_card {struct btmrvl_private* priv; int firmware; int helper; struct sdio_func* func; } ;
struct btmrvl_private {int hw_wakeup_firmware; int hw_host_to_card; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct btmrvl_private* FUNC_2 (struct btmrvl_sdio_card*) ;
 int FUNC_3 (struct btmrvl_sdio_card*) ;
 scalar_t__ FUNC_4 (struct btmrvl_sdio_card*) ;
 int FUNC_5 (struct btmrvl_sdio_card*) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (struct btmrvl_sdio_card*) ;
 int FUNC_7 (struct btmrvl_sdio_card*) ;
 int VAR_5 ;
 int FUNC_8 (struct btmrvl_private*,int ) ;
 int FUNC_9 (struct btmrvl_sdio_card*) ;
 struct btmrvl_sdio_card* FUNC_10 (int,int ) ;
 int FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct sdio_func *VAR_6,
     const struct sdio_device_id *VAR_7)
{
 int VAR_8 = 0;
 struct btmrvl_private *VAR_9 = ((void*)0);
 struct btmrvl_sdio_card *VAR_10 = ((void*)0);

 FUNC_1("vendor=0x%x, device=0x%x, class=%d, fn=%d",
   VAR_7->vendor, VAR_7->device, VAR_7->class, VAR_6->num);

 VAR_10 = FUNC_10(sizeof(*VAR_10), VAR_2);
 if (!VAR_10) {
  VAR_8 = -VAR_1;
  goto done;
 }

 VAR_10->func = VAR_6;

 if (VAR_7->driver_data) {
  struct btmrvl_sdio_device *VAR_11 = (void *) VAR_7->driver_data;
  VAR_10->helper = VAR_11->helper;
  VAR_10->firmware = VAR_11->firmware;
 }

 if (FUNC_6(VAR_10) < 0) {
  FUNC_0("Failed to register BT device!");
  VAR_8 = -VAR_0;
  goto free_card;
 }


 FUNC_3(VAR_10);

 if (FUNC_4(VAR_10)) {
  FUNC_0("Downloading firmware failed!");
  VAR_8 = -VAR_0;
  goto unreg_dev;
 }

 FUNC_11(100);

 FUNC_5(VAR_10);

 VAR_9 = FUNC_2(VAR_10);
 if (!VAR_9) {
  FUNC_0("Initializing card failed!");
  VAR_8 = -VAR_0;
  goto disable_host_int;
 }

 VAR_10->priv = VAR_9;


 VAR_9->hw_host_to_card = VAR_4;
 VAR_9->hw_wakeup_firmware = VAR_5;

 FUNC_8(VAR_9, VAR_3);

 return 0;

disable_host_int:
 FUNC_3(VAR_10);
unreg_dev:
 FUNC_7(VAR_10);
free_card:
 FUNC_9(VAR_10);
done:
 return VAR_8;
}
