
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int num_adapters; scalar_t__ generic_bulk_ctrl_endpoint; int * adapter; } ;
struct dvb_usb_device {TYPE_1__ props; TYPE_2__* udev; int state; int num_adapters_initialized; struct dvb_usb_adapter* adapter; } ;
struct dvb_usb_adapter_properties {int dummy; } ;
struct TYPE_8__ {int caps; int pid_filter_count; scalar_t__ size_of_priv; } ;
struct dvb_usb_adapter {int id; int pid_filtering; int max_feed_count; int * priv; TYPE_5__ props; struct dvb_usb_device* dev; } ;
struct TYPE_7__ {scalar_t__ speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct dvb_usb_adapter*,short*) ;
 int FUNC_1 (struct dvb_usb_adapter*) ;
 int FUNC_2 (struct dvb_usb_adapter*) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,...) ;
 int * FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (TYPE_5__*,int *,int) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*,scalar_t__) ;
 int FUNC_9 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct dvb_usb_device *VAR_8, short *VAR_9)
{
 struct dvb_usb_adapter *VAR_10;
 int VAR_11, VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_8->props.num_adapters; VAR_12++) {
  VAR_10 = &VAR_8->adapter[VAR_12];
  VAR_10->dev = VAR_8;
  VAR_10->id = VAR_12;

  FUNC_6(&VAR_10->props, &VAR_8->props.adapter[VAR_12], sizeof(struct dvb_usb_adapter_properties));


  if (VAR_8->udev->speed == VAR_6 && !(VAR_10->props.caps & VAR_0)) {
   FUNC_3("This USB2.0 device cannot be run on a USB1.1 port. (it lacks a hardware PID filter)");
   return -VAR_3;
  }

  if ((VAR_8->udev->speed == VAR_6 && VAR_10->props.caps & VAR_0) ||
   (VAR_10->props.caps & VAR_1)) {
   FUNC_4("will use the device's hardware PID filter (table count: %d).", VAR_10->props.pid_filter_count);
   VAR_10->pid_filtering = 1;
   VAR_10->max_feed_count = VAR_10->props.pid_filter_count;
  } else {
   FUNC_4("will pass the complete MPEG2 transport stream to the software demuxer.");
   VAR_10->pid_filtering = 0;
   VAR_10->max_feed_count = 255;
  }

  if (!VAR_10->pid_filtering &&
   VAR_7 &&
   VAR_10->props.caps & VAR_0) {
   FUNC_4("pid filter enabled by module option.");
   VAR_10->pid_filtering = 1;
   VAR_10->max_feed_count = VAR_10->props.pid_filter_count;
  }

  if (VAR_10->props.size_of_priv > 0) {
   VAR_10->priv = FUNC_5(VAR_10->props.size_of_priv, VAR_5);
   if (VAR_10->priv == ((void*)0)) {
    FUNC_3("no memory for priv for adapter %d.", VAR_12);
    return -VAR_4;
   }
  }

  if ((VAR_11 = FUNC_2(VAR_10)) ||
   (VAR_11 = FUNC_0(VAR_10, VAR_9)) ||
   (VAR_11 = FUNC_1(VAR_10))) {
   return VAR_11;
  }

  VAR_8->num_adapters_initialized++;
  VAR_8->state |= VAR_2;
 }





 if (VAR_8->props.generic_bulk_ctrl_endpoint != 0) {
  FUNC_7(VAR_8->udev, FUNC_9(VAR_8->udev, VAR_8->props.generic_bulk_ctrl_endpoint));
  FUNC_7(VAR_8->udev, FUNC_8(VAR_8->udev, VAR_8->props.generic_bulk_ctrl_endpoint));
 }

 return 0;
}
