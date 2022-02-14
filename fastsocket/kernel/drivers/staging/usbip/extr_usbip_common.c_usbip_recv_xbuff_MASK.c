
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbip_device {scalar_t__ side; int tcp_socket; } ;
struct urb {int transfer_buffer_length; int actual_length; TYPE_1__* dev; scalar_t__ transfer_buffer; int pipe; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct usbip_device*,int ) ;
 int FUNC_4 (int ,int ,char*,int,int ) ;

int FUNC_5(struct usbip_device *VAR_4, struct urb *VAR_5)
{
 int VAR_6;
 int VAR_7;

 if (VAR_4->side == VAR_2) {


  if (FUNC_1(VAR_5->pipe))
   return 0;

  VAR_7 = VAR_5->transfer_buffer_length;
 } else {


  if (FUNC_2(VAR_5->pipe))
   return 0;

  VAR_7 = VAR_5->actual_length;
 }


 if (!(VAR_7 > 0))
  return 0;

 VAR_6 = FUNC_4(0, VAR_4->tcp_socket, (char *)VAR_5->transfer_buffer,
    VAR_7, 0);
 if (VAR_6 != VAR_7) {
  FUNC_0(&VAR_5->dev->dev, "recv xbuf, %d\n", VAR_6);
  if (VAR_4->side == VAR_2) {
   FUNC_3(VAR_4, VAR_1);
  } else {
   FUNC_3(VAR_4, VAR_3);
   return -VAR_0;
  }
 }

 return VAR_6;
}
