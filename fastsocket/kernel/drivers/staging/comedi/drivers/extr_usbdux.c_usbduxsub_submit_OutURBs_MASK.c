
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbduxsub {int numOfOutBuffers; TYPE_1__* interface; TYPE_2__** urbOut; int usbdev; int comedidev; } ;
struct TYPE_4__ {int transfer_flags; scalar_t__ status; int dev; int context; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_3(struct usbduxsub *VAR_3)
{
 int VAR_4, VAR_5;

 if (!VAR_3)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_3->numOfOutBuffers; VAR_4++) {
  FUNC_0(&VAR_3->interface->dev,
   "comedi_: submitting out-urb[%d]\n", VAR_4);

  VAR_3->urbOut[VAR_4]->context = VAR_3->comedidev;
  VAR_3->urbOut[VAR_4]->dev = VAR_3->usbdev;
  VAR_3->urbOut[VAR_4]->status = 0;
  VAR_3->urbOut[VAR_4]->transfer_flags = VAR_2;
  VAR_5 = FUNC_2(VAR_3->urbOut[VAR_4], VAR_1);
  if (VAR_5) {
   FUNC_1(&VAR_3->interface->dev,
    "comedi_: ao: usb_submit_urb(%d) error %d\n",
    VAR_4, VAR_5);
   return VAR_5;
  }
 }
 return 0;
}
