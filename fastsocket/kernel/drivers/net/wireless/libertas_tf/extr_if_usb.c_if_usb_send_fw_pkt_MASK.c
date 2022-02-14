
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct if_usb_card {int totalbytes; int fwlastblksent; int fwfinalblk; TYPE_2__* udev; int fwseqnum; struct fwdata* ep_out_buf; int CRC_OK; TYPE_1__* fw; } ;
struct fwheader {int dummy; } ;
struct TYPE_6__ {int dnldcmd; int datalength; } ;
struct fwdata {TYPE_3__ hdr; int seqnum; TYPE_3__* data; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,int *,int) ;
 int FUNC_6 (struct if_usb_card*,struct fwdata*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct if_usb_card *VAR_3)
{
 struct fwdata *VAR_4 = VAR_3->ep_out_buf;
 u8 *VAR_5 = (u8 *) VAR_3->fw->data;

 FUNC_1(VAR_2);



 if (!VAR_3->CRC_OK) {
  VAR_3->totalbytes = VAR_3->fwlastblksent;
  VAR_3->fwseqnum--;
 }

 FUNC_3(&VAR_3->udev->dev, "totalbytes = %d\n",
       VAR_3->totalbytes);





 FUNC_5(&VAR_4->hdr, &VAR_5[VAR_3->totalbytes],
        sizeof(struct fwheader));

 VAR_3->fwlastblksent = VAR_3->totalbytes;
 VAR_3->totalbytes += sizeof(struct fwheader);

 FUNC_5(VAR_4->data, &VAR_5[VAR_3->totalbytes],
        FUNC_4(VAR_4->hdr.datalength));

 FUNC_3(&VAR_3->udev->dev, "Data length = %d\n",
       FUNC_4(VAR_4->hdr.datalength));

 VAR_4->seqnum = FUNC_0(++VAR_3->fwseqnum);
 VAR_3->totalbytes += FUNC_4(VAR_4->hdr.datalength);

 FUNC_6(VAR_3, VAR_3->ep_out_buf, sizeof(struct fwdata) +
       FUNC_4(VAR_4->hdr.datalength), 0);

 if (VAR_4->hdr.dnldcmd == FUNC_0(VAR_0)) {
  FUNC_3(&VAR_3->udev->dev, "There are data to follow\n");
  FUNC_3(&VAR_3->udev->dev,
   "seqnum = %d totalbytes = %d\n",
   VAR_3->fwseqnum, VAR_3->totalbytes);
 } else if (VAR_4->hdr.dnldcmd == FUNC_0(VAR_1)) {
  FUNC_3(&VAR_3->udev->dev,
   "Host has finished FW downloading\n");
  FUNC_3(&VAR_3->udev->dev, "Donwloading FW JUMP BLOCK\n");




  VAR_3->fwfinalblk = 1;
 }

 FUNC_3(&VAR_3->udev->dev, "Firmware download done; size %d\n",
       VAR_3->totalbytes);

 FUNC_2(VAR_2);
 return 0;
}
