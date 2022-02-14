
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int * transfer_buffer; int status; } ;
struct dvb_usb_device {int udev; struct dib0700_state* priv; } ;
struct dib0700_state {int fw_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int ) ;
 struct urb* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct urb*,int ,int ,int *,int ,int ,struct dvb_usb_device*) ;
 int FUNC_4 (struct urb*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct urb*,int ) ;

int FUNC_7(struct dvb_usb_device *VAR_6)
{
 struct dib0700_state *VAR_7 = VAR_6->priv;
 struct urb *VAR_8;
 int VAR_9;


 if (VAR_7->fw_version < 0x10200)
  return 0;


 VAR_8 = FUNC_2(0, VAR_3);
 if (VAR_8 == ((void*)0)) {
  FUNC_0("rc usb alloc urb failed\n");
  return -VAR_1;
 }

 VAR_8->transfer_buffer = FUNC_1(VAR_4, VAR_3);
 if (VAR_8->transfer_buffer == ((void*)0)) {
  FUNC_0("rc kzalloc failed\n");
  FUNC_4(VAR_8);
  return -VAR_1;
 }

 VAR_8->status = -VAR_0;
 FUNC_3(VAR_8, VAR_6->udev, FUNC_5(VAR_6->udev, 1),
     VAR_8->transfer_buffer, VAR_4,
     VAR_5, VAR_6);

 VAR_9 = FUNC_6(VAR_8, VAR_2);
 if (VAR_9)
  FUNC_0("rc submit urb failed\n");

 return VAR_9;
}
