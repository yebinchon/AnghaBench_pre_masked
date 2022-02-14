
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct st5481_in {int num_packets; int packet_size; int rcvbuf; int ep; int urb; int bufsize; TYPE_1__* adapter; } ;
struct TYPE_2__ {struct usb_device* usb_dev; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct usb_device*,int ,int,int,int,int ,struct st5481_in*) ;
 int VAR_2 ;
 int FUNC_4 (struct usb_device*,int ) ;

int FUNC_5(struct st5481_in *VAR_3)
{
 struct usb_device *VAR_4 = VAR_3->adapter->usb_dev;
 int VAR_5;

 FUNC_0(4,"");

 VAR_3->rcvbuf = FUNC_2(VAR_3->bufsize, VAR_1);
 VAR_5 = -VAR_0;
 if (!VAR_3->rcvbuf)
  goto err;

 VAR_5 = FUNC_3(VAR_3->urb, VAR_4,
     FUNC_4(VAR_4, VAR_3->ep),
     VAR_3->num_packets, VAR_3->packet_size,
     VAR_3->num_packets * VAR_3->packet_size,
     VAR_2, VAR_3);
 if (VAR_5)
  goto err_free;
 return 0;

 err_free:
 FUNC_1(VAR_3->rcvbuf);
 err:
 return VAR_5;
}
