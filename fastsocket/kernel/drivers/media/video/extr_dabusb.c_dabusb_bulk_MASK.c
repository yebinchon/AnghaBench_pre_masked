
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* pdabusb_t ;
typedef TYPE_2__* pbulk_transfer_t ;
struct TYPE_12__ {int dev; } ;
struct TYPE_11__ {int size; int data; int pipe; } ;
struct TYPE_10__ {TYPE_3__* usbdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_3__*,unsigned int,int ,int,int*,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (unsigned int) ;
 unsigned int FUNC_6 (TYPE_3__*,int) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int ,int) ;
 unsigned int FUNC_8 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_9 (pdabusb_t VAR_3, pbulk_transfer_t VAR_4)
{
 int VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 FUNC_0("dabusb_bulk");

 if (!VAR_4->pipe)
  VAR_6 = FUNC_6 (VAR_3->usbdev, 2);
 else
  VAR_6 = FUNC_8 (VAR_3->usbdev, 2);

 VAR_5=FUNC_3(VAR_3->usbdev, VAR_6, VAR_4->data, VAR_4->size, &VAR_7, 100);
 if(VAR_5<0) {
  FUNC_1(&VAR_3->usbdev->dev,
   "usb_bulk_msg failed(%d)\n", VAR_5);

  if (FUNC_7 (VAR_3->usbdev, VAR_2, 1) < 0) {
   FUNC_1(&VAR_3->usbdev->dev, "set_interface failed\n");
   return -VAR_0;
  }

 }

 if( VAR_5 == -VAR_1 ) {
  FUNC_2(&VAR_3->usbdev->dev, "CLEAR_FEATURE request to remove STALL condition.\n");
  if(FUNC_4(VAR_3->usbdev, FUNC_5(VAR_6)))
   FUNC_1(&VAR_3->usbdev->dev, "request failed\n");
 }

 VAR_4->size = VAR_7;
 return VAR_5;
}
