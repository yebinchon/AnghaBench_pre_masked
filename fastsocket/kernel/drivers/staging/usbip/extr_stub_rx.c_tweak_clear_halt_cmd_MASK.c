
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct usb_ctrlrequest {int wIndex; } ;
struct urb {TYPE_1__* dev; scalar_t__ setup_packet; } ;
struct TYPE_4__ {int devnum; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (char*,int ,int,...) ;

__attribute__((used)) static int FUNC_5(struct urb *VAR_0)
{
 struct usb_ctrlrequest *VAR_1;
 int VAR_2;
 int VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_1 = (struct usb_ctrlrequest *) VAR_0->setup_packet;






 VAR_2 = FUNC_0(VAR_1->wIndex) & 0x000f;


 VAR_3 = FUNC_0(VAR_1->wIndex) & 0x0080;

 if (VAR_3)
  VAR_4 = FUNC_2(VAR_0->dev, VAR_2);
 else
  VAR_4 = FUNC_3(VAR_0->dev, VAR_2);

 VAR_5 = FUNC_1(VAR_0->dev, VAR_4);
 if (VAR_5 < 0)
  FUNC_4("clear_halt error: devnum %d endp %d, %d\n",
     VAR_0->dev->devnum, VAR_2, VAR_5);
 else
  FUNC_4("clear_halt done: devnum %d endp %d\n",
     VAR_0->dev->devnum, VAR_2);

 return VAR_5;
}
