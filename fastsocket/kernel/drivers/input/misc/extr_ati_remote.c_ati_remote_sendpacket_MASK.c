
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct ati_remote {int send_flags; TYPE_2__* out_urb; int wait; TYPE_1__* interface; int udev; } ;
struct TYPE_5__ {int status; int dev; scalar_t__ transfer_buffer_length; scalar_t__ transfer_buffer; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 char FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (scalar_t__,unsigned char*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int ,int,int ) ;

__attribute__((used)) static int FUNC_7(struct ati_remote *VAR_5, u16 VAR_6, unsigned char *VAR_7)
{
 int VAR_8 = 0;


 FUNC_3(VAR_5->out_urb->transfer_buffer + 1, VAR_7, FUNC_1(VAR_6));
 ((char *) VAR_5->out_urb->transfer_buffer)[0] = FUNC_0(VAR_6);

 VAR_5->out_urb->transfer_buffer_length = FUNC_1(VAR_6) + 1;
 VAR_5->out_urb->dev = VAR_5->udev;
 VAR_5->send_flags = VAR_4;

 VAR_8 = FUNC_5(VAR_5->out_urb, VAR_1);
 if (VAR_8) {
  FUNC_2(&VAR_5->interface->dev,
    "sendpacket: usb_submit_urb failed: %d\n", VAR_8);
  return VAR_8;
 }

 FUNC_6(VAR_5->wait,
  ((VAR_5->out_urb->status != -VAR_0) ||
   (VAR_5->send_flags & VAR_3)),
  VAR_2);
 FUNC_4(VAR_5->out_urb);

 return VAR_8;
}
