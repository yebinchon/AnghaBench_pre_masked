
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct if_usb_card {scalar_t__ bootcmdresp; int CRC_OK; int fwseqnum; TYPE_4__* priv; TYPE_2__* fw; scalar_t__ fwdnldover; int rx_urb; int fw_timeout; int fw_wq; scalar_t__ fwfinalblk; scalar_t__ totalbytes; scalar_t__ fwlastblksent; TYPE_1__* udev; } ;
struct TYPE_7__ {int fw_ready; scalar_t__ surpriseremoved; } ;
struct TYPE_6__ {int size; int data; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (struct if_usb_card*,int ) ;
 int FUNC_3 (struct if_usb_card*) ;
 int FUNC_4 (struct if_usb_card*) ;
 int FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (struct if_usb_card*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (int *,char*) ;
 int VAR_3 ;
 int FUNC_12 (int) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__**,int,int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int) ;

__attribute__((used)) static int FUNC_19(struct if_usb_card *VAR_4)
{
 int VAR_5 = 0;
 static int VAR_6 = 10;
 int VAR_7 = 0;

 FUNC_9(VAR_1);

 FUNC_7(VAR_2);
 VAR_7 = FUNC_16(&VAR_4->fw, VAR_3, &VAR_4->udev->dev);
 if (VAR_7 < 0) {
  FUNC_13("request_firmware() failed with %#x\n", VAR_7);
  FUNC_13("firmware %s not found\n", VAR_3);
  FUNC_8(VAR_2);
  goto done;
 }
 FUNC_8(VAR_2);

 if (FUNC_0(VAR_4->fw->data, VAR_4->fw->size))
  goto release_fw;

restart:
 if (FUNC_6(VAR_4) < 0) {
  FUNC_11(&VAR_4->udev->dev, "URB submission is failed\n");
  VAR_7 = -1;
  goto release_fw;
 }

 VAR_4->bootcmdresp = 0;
 do {
  int VAR_8 = 0;
  VAR_5++;

  FUNC_2(VAR_4, VAR_0);

  do {
   VAR_8++;
   FUNC_12(100);
  } while (VAR_4->bootcmdresp == 0 && VAR_8 < 10);
 } while (VAR_4->bootcmdresp == 0 && VAR_5 < 5);

 if (VAR_4->bootcmdresp <= 0) {
  if (--VAR_6 >= 0) {
   FUNC_3(VAR_4);
   goto restart;
  }
  return -1;
 }

 VAR_5 = 0;

 VAR_4->totalbytes = 0;
 VAR_4->fwlastblksent = 0;
 VAR_4->CRC_OK = 1;
 VAR_4->fwdnldover = 0;
 VAR_4->fwseqnum = -1;
 VAR_4->totalbytes = 0;
 VAR_4->fwfinalblk = 0;


 FUNC_4(VAR_4);


 FUNC_18(VAR_4->fw_wq, VAR_4->priv->surpriseremoved ||
            VAR_4->fwdnldover);

 FUNC_1(&VAR_4->fw_timeout);
 FUNC_17(VAR_4->rx_urb);

 if (!VAR_4->fwdnldover) {
  FUNC_14("failed to load fw, resetting device!\n");
  if (--VAR_6 >= 0) {
   FUNC_3(VAR_4);
   goto restart;
  }

  FUNC_14("FW download failure, time = %d ms\n", VAR_5 * 100);
  VAR_7 = -1;
  goto release_fw;
 }

 VAR_4->priv->fw_ready = 1;

 release_fw:
 FUNC_15(VAR_4->fw);
 VAR_4->fw = ((void*)0);

 FUNC_5(VAR_4->priv);

 done:
 FUNC_10(VAR_1, "ret %d", VAR_7);
 return VAR_7;
}
