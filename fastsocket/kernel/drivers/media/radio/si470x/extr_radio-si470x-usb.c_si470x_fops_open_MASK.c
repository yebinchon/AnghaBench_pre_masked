
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct si470x_device {int users; int int_in_running; TYPE_2__* intf; int int_in_urb; TYPE_1__* int_in_endpoint; int int_in_buffer; int usbdev; } ;
struct file {int dummy; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int bInterval; int wMaxPacketSize; int bEndpointAddress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (struct si470x_device*) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ,int ,int ,int ,int ,int ,struct si470x_device*,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 struct si470x_device* FUNC_11 (struct file*) ;

__attribute__((used)) static int FUNC_12(struct file *VAR_3)
{
 struct si470x_device *VAR_4 = FUNC_11(VAR_3);
 int VAR_5;

 FUNC_2();
 VAR_4->users++;

 VAR_5 = FUNC_6(VAR_4->intf);
 if (VAR_5 < 0) {
  VAR_4->users--;
  VAR_5 = -VAR_0;
  goto done;
 }

 if (VAR_4->users == 1) {

  VAR_5 = FUNC_4(VAR_4);
  if (VAR_5 < 0) {
   FUNC_7(VAR_4->intf);
   goto done;
  }


  FUNC_8(VAR_4->int_in_urb, VAR_4->usbdev,
   FUNC_9(VAR_4->usbdev,
   VAR_4->int_in_endpoint->bEndpointAddress),
   VAR_4->int_in_buffer,
   FUNC_1(VAR_4->int_in_endpoint->wMaxPacketSize),
   VAR_2,
   VAR_4,
   VAR_4->int_in_endpoint->bInterval);

  VAR_4->int_in_running = 1;
  FUNC_3();

  VAR_5 = FUNC_10(VAR_4->int_in_urb, VAR_1);
  if (VAR_5) {
   FUNC_0(&VAR_4->intf->dev,
     "submitting int urb failed (%d)\n", VAR_5);
   VAR_4->int_in_running = 0;
   FUNC_7(VAR_4->intf);
  }
 }

done:
 FUNC_5();
 return VAR_5;
}
