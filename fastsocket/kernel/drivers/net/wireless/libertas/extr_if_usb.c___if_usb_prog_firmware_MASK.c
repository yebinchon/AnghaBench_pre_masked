
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct if_usb_card {scalar_t__ bootcmdresp; int CRC_OK; int fwseqnum; TYPE_2__* fw; scalar_t__ fwdnldover; int rx_urb; int fw_timeout; scalar_t__ surprise_removed; int fw_wq; scalar_t__ fwfinalblk; scalar_t__ totalbytes; scalar_t__ fwlastblksent; int tx_urb; TYPE_1__* udev; } ;
struct TYPE_5__ {int size; int data; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct if_usb_card*,int) ;
 int FUNC_3 (struct if_usb_card*) ;
 int FUNC_4 (struct if_usb_card*) ;
 scalar_t__ FUNC_5 (struct if_usb_card*) ;
 scalar_t__ FUNC_6 (struct if_usb_card*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__**,char const*,int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int) ;

__attribute__((used)) static int FUNC_17(struct if_usb_card *VAR_5,
     const char *VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 static int VAR_9 = 10;
 int VAR_10 = 0;

 FUNC_7(VAR_4);

 VAR_10 = FUNC_14(&VAR_5->fw, VAR_6, &VAR_5->udev->dev);
 if (VAR_10 < 0) {
  FUNC_10("request_firmware() failed with %#x\n", VAR_10);
  FUNC_10("firmware %s not found\n", VAR_6);
  goto done;
 }

 if (FUNC_0(VAR_5->fw->data, VAR_5->fw->size)) {
  VAR_10 = -VAR_1;
  goto release_fw;
 }


 FUNC_15(VAR_5->rx_urb);
 FUNC_15(VAR_5->tx_urb);

 VAR_5->fwlastblksent = 0;
 VAR_5->fwdnldover = 0;
 VAR_5->totalbytes = 0;
 VAR_5->fwfinalblk = 0;
 VAR_5->bootcmdresp = 0;

restart:
 if (FUNC_6(VAR_5) < 0) {
  FUNC_9(&VAR_5->udev->dev, "URB submission is failed\n");
  VAR_10 = -VAR_2;
  goto release_fw;
 }

 VAR_5->bootcmdresp = 0;
 do {
  int VAR_11 = 0;
  VAR_8++;
  FUNC_2(VAR_5, VAR_7);

  do {
   VAR_11++;
   FUNC_12(100);
  } while (VAR_5->bootcmdresp == 0 && VAR_11 < 10);
 } while (VAR_5->bootcmdresp == 0 && VAR_8 < 5);

 if (VAR_5->bootcmdresp == VAR_0) {

  VAR_10 = -VAR_3;
  FUNC_15(VAR_5->rx_urb);
  FUNC_15(VAR_5->tx_urb);
  if (FUNC_5(VAR_5) < 0)
   VAR_10 = -VAR_2;
  goto release_fw;
 } else if (VAR_5->bootcmdresp <= 0) {
  if (--VAR_9 >= 0) {
   FUNC_3(VAR_5);
   goto restart;
  }
  VAR_10 = -VAR_2;
  goto release_fw;
 }

 VAR_8 = 0;

 VAR_5->totalbytes = 0;
 VAR_5->fwlastblksent = 0;
 VAR_5->CRC_OK = 1;
 VAR_5->fwdnldover = 0;
 VAR_5->fwseqnum = -1;
 VAR_5->totalbytes = 0;
 VAR_5->fwfinalblk = 0;


 FUNC_4(VAR_5);


 FUNC_16(VAR_5->fw_wq, VAR_5->surprise_removed || VAR_5->fwdnldover);

 FUNC_1(&VAR_5->fw_timeout);
 FUNC_15(VAR_5->rx_urb);

 if (!VAR_5->fwdnldover) {
  FUNC_11("failed to load fw, resetting device!\n");
  if (--VAR_9 >= 0) {
   FUNC_3(VAR_5);
   goto restart;
  }

  FUNC_11("FW download failure, time = %d ms\n", VAR_8 * 100);
  VAR_10 = -VAR_2;
  goto release_fw;
 }

 release_fw:
 FUNC_13(VAR_5->fw);
 VAR_5->fw = ((void*)0);

 done:
 FUNC_8(VAR_4, "ret %d", VAR_10);
 return VAR_10;
}
