
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct if_usb_card {int totalbytes; int fwlastblksent; int fwfinalblk; TYPE_2__* udev; int fwseqnum; struct fwdata* ep_out_buf; int CRC_OK; TYPE_1__* fw; } ;
struct fwheader {int dummy; } ;
struct TYPE_6__ {int dnldcmd; int datalength; } ;
struct fwdata {TYPE_3__ hdr; int seqnum; TYPE_3__* data; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int const*,int) ;
 int FUNC_4 (struct if_usb_card*,struct fwdata*,int) ;

__attribute__((used)) static int FUNC_5(struct if_usb_card *VAR_2)
{
 struct fwdata *VAR_3 = VAR_2->ep_out_buf;
 const uint8_t *VAR_4 = VAR_2->fw->data;



 if (!VAR_2->CRC_OK) {
  VAR_2->totalbytes = VAR_2->fwlastblksent;
  VAR_2->fwseqnum--;
 }

 FUNC_1(&VAR_2->udev->dev, "totalbytes = %d\n",
       VAR_2->totalbytes);





 FUNC_3(&VAR_3->hdr, &VAR_4[VAR_2->totalbytes],
        sizeof(struct fwheader));

 VAR_2->fwlastblksent = VAR_2->totalbytes;
 VAR_2->totalbytes += sizeof(struct fwheader);

 FUNC_3(VAR_3->data, &VAR_4[VAR_2->totalbytes],
        FUNC_2(VAR_3->hdr.datalength));

 FUNC_1(&VAR_2->udev->dev, "Data length = %d\n",
       FUNC_2(VAR_3->hdr.datalength));

 VAR_3->seqnum = FUNC_0(++VAR_2->fwseqnum);
 VAR_2->totalbytes += FUNC_2(VAR_3->hdr.datalength);

 FUNC_4(VAR_2, VAR_2->ep_out_buf, sizeof(struct fwdata) +
       FUNC_2(VAR_3->hdr.datalength));

 if (VAR_3->hdr.dnldcmd == FUNC_0(VAR_0)) {
  FUNC_1(&VAR_2->udev->dev, "There are data to follow\n");
  FUNC_1(&VAR_2->udev->dev, "seqnum = %d totalbytes = %d\n",
        VAR_2->fwseqnum, VAR_2->totalbytes);
 } else if (VAR_3->hdr.dnldcmd == FUNC_0(VAR_1)) {
  FUNC_1(&VAR_2->udev->dev, "Host has finished FW downloading\n");
  FUNC_1(&VAR_2->udev->dev, "Donwloading FW JUMP BLOCK\n");

  VAR_2->fwfinalblk = 1;
 }

 FUNC_1(&VAR_2->udev->dev, "Firmware download done; size %d\n",
       VAR_2->totalbytes);

 return 0;
}
