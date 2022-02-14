
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct usb_interface {TYPE_4__* cur_altsetting; int dev; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int devnum; } ;
struct net_device {int name; int * netdev_ops; } ;
struct TYPE_8__ {int bits; } ;
struct TYPE_7__ {int bits; } ;
struct TYPE_11__ {TYPE_2__ min_turn_time; TYPE_1__ baud_rate; } ;
struct mcs_cb {int receive_mode; int sir_tweak; int transceiver_type; int work; TYPE_5__ qos; int lock; struct net_device* netdev; struct usb_device* usbdev; } ;
struct TYPE_9__ {int bNumEndpoints; } ;
struct TYPE_10__ {TYPE_3__ desc; int endpoint; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct net_device*,int *) ;
 struct net_device* FUNC_4 (int) ;
 int FUNC_5 (struct net_device*) ;
 struct usb_device* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (struct mcs_cb*,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 struct mcs_cb* FUNC_10 (struct net_device*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (struct net_device*) ;
 int VAR_15 ;
 int FUNC_12 (int *) ;
 int VAR_16 ;
 int FUNC_13 (struct usb_device*) ;
 int FUNC_14 (struct usb_interface*,struct mcs_cb*) ;

__attribute__((used)) static int FUNC_15(struct usb_interface *VAR_17,
       const struct usb_device_id *VAR_18)
{
 struct usb_device *VAR_19 = FUNC_6(VAR_17);
 struct net_device *VAR_20 = ((void*)0);
 struct mcs_cb *VAR_21;
 int VAR_22 = -VAR_1;

 VAR_20 = FUNC_4(sizeof(*VAR_21));
 if (!VAR_20)
  goto error1;

 FUNC_1(1, "MCS7780 USB-IrDA bridge found at %d.\n", VAR_19->devnum);

 FUNC_3(VAR_20, &VAR_17->dev);

 VAR_22 = FUNC_13(VAR_19);
 if (VAR_22 != 0) {
  FUNC_2("mcs7780: usb reset configuration failed\n");
  goto error2;
 }

 VAR_21 = FUNC_10(VAR_20);
 VAR_21->usbdev = VAR_19;
 VAR_21->netdev = VAR_20;
 FUNC_12(&VAR_21->lock);


 FUNC_7(&VAR_21->qos);


 VAR_21->qos.baud_rate.bits &=
     VAR_5 | VAR_10 | VAR_4 | VAR_6 | VAR_8 | VAR_2
  | VAR_9 | VAR_3 | (VAR_7 << 8);


 VAR_21->qos.min_turn_time.bits &= VAR_13;
 FUNC_8(&VAR_21->qos);


 FUNC_0(&VAR_21->work, VAR_12);

 VAR_20->netdev_ops = &VAR_11;

 if (!VAR_17->cur_altsetting)
  goto error2;

 VAR_22 = FUNC_9(VAR_21, VAR_17->cur_altsetting->endpoint,
     VAR_17->cur_altsetting->desc.bNumEndpoints);
 if (!VAR_22) {
  VAR_22 = -VAR_0;
  goto error2;
 }

 VAR_22 = FUNC_11(VAR_20);
 if (VAR_22 != 0)
  goto error2;

 FUNC_1(1, "IrDA: Registered MosChip MCS7780 device as %s\n",
     VAR_20->name);

 VAR_21->transceiver_type = VAR_16;
 VAR_21->sir_tweak = VAR_15;
 VAR_21->receive_mode = VAR_14;

 FUNC_14(VAR_17, VAR_21);
 return 0;

 error2:
  FUNC_5(VAR_20);

 error1:
  return VAR_22;
}
