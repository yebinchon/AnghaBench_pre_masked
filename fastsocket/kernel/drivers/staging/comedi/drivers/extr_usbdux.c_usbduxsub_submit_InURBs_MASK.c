
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usbduxsub {int numOfInBuffers; TYPE_1__* interface; TYPE_2__** urbIn; TYPE_3__* comedidev; int usbdev; int ai_interval; } ;
struct TYPE_6__ {int minor; } ;
struct TYPE_5__ {int interval; int dev; TYPE_3__* context; int transfer_flags; scalar_t__ status; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ,int,TYPE_3__*,int ,int ) ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_3(struct usbduxsub *VAR_3)
{
 int VAR_4, VAR_5;

 if (!VAR_3)
  return -VAR_0;


 for (VAR_4 = 0; VAR_4 < VAR_3->numOfInBuffers; VAR_4++) {

  VAR_3->urbIn[VAR_4]->interval = VAR_3->ai_interval;
  VAR_3->urbIn[VAR_4]->context = VAR_3->comedidev;
  VAR_3->urbIn[VAR_4]->dev = VAR_3->usbdev;
  VAR_3->urbIn[VAR_4]->status = 0;
  VAR_3->urbIn[VAR_4]->transfer_flags = VAR_2;
  FUNC_0(&VAR_3->interface->dev,
   "comedi%d: submitting in-urb[%d]: %p,%p intv=%d\n",
   VAR_3->comedidev->minor, VAR_4,
   (VAR_3->urbIn[VAR_4]->context),
   (VAR_3->urbIn[VAR_4]->dev),
   (VAR_3->urbIn[VAR_4]->interval));
  VAR_5 = FUNC_2(VAR_3->urbIn[VAR_4], VAR_1);
  if (VAR_5) {
   FUNC_1(&VAR_3->interface->dev,
    "comedi_: ai: usb_submit_urb(%d) error %d\n",
    VAR_4, VAR_5);
   return VAR_5;
  }
 }
 return 0;
}
