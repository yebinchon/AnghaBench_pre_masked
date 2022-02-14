
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {int dev; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_4__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {scalar_t__ bEndpointAddress; } ;
struct usb_device_id {int dummy; } ;
struct i2c_client {int dummy; } ;
struct TYPE_6__ {int audio_codec; scalar_t__ audio_input; scalar_t__ video_input; } ;
struct hdpvr_device {size_t bulk_in_size; scalar_t__ workqueue; int i2c_adapter; int video_dev; int v4l2_dev; int io_mutex; scalar_t__ bulk_in_endpointAddr; int udev; TYPE_3__ options; int rec_buff_list; int free_buff_list; int wait_data; int wait_buffer; int usbc_buf; int usbc_mutex; int i2c_mutex; } ;
struct TYPE_5__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 size_t FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_9 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (struct hdpvr_device*,int ) ;
 TYPE_3__ VAR_10 ;
 int FUNC_6 (struct hdpvr_device*) ;
 scalar_t__ FUNC_7 (struct hdpvr_device*) ;
 int FUNC_8 (struct hdpvr_device*) ;
 struct i2c_client* FUNC_9 (struct hdpvr_device*) ;
 struct i2c_client* FUNC_10 (struct hdpvr_device*) ;
 scalar_t__ FUNC_11 (struct hdpvr_device*,int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct usb_interface*) ;
 int FUNC_15 (int,int ) ;
 struct hdpvr_device* FUNC_16 (int,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (struct usb_endpoint_descriptor*) ;
 int FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (int *,int *) ;
 int FUNC_23 (int *,char*) ;
 int FUNC_24 (int *,char*,int ) ;
 int FUNC_25 (int ) ;
 int * VAR_11 ;

__attribute__((used)) static int FUNC_26(struct usb_interface *VAR_12,
         const struct usb_device_id *VAR_13)
{
 struct hdpvr_device *VAR_14;
 struct usb_host_interface *VAR_15;
 struct usb_endpoint_descriptor *VAR_16;
 struct i2c_client *VAR_17;
 size_t VAR_18;
 int VAR_19;
 int VAR_20 = -VAR_0;


 VAR_14 = FUNC_16(sizeof(*VAR_14), VAR_1);
 if (!VAR_14) {
  FUNC_4("Out of memory");
  goto error;
 }

 VAR_14->workqueue = 0;


 if (FUNC_22(&VAR_12->dev, &VAR_14->v4l2_dev)) {
  FUNC_4("v4l2_device_register failed");
  goto error;
 }

 FUNC_17(&VAR_14->io_mutex);
 FUNC_17(&VAR_14->i2c_mutex);
 FUNC_17(&VAR_14->usbc_mutex);
 VAR_14->usbc_buf = FUNC_15(64, VAR_1);
 if (!VAR_14->usbc_buf) {
  FUNC_23(&VAR_14->v4l2_dev, "Out of memory\n");
  goto error;
 }

 FUNC_13(&VAR_14->wait_buffer);
 FUNC_13(&VAR_14->wait_data);

 VAR_14->workqueue = FUNC_2("hdpvr_buffer");
 if (!VAR_14->workqueue)
  goto error;


 FUNC_0(&VAR_14->free_buff_list);
 FUNC_0(&VAR_14->rec_buff_list);

 VAR_14->options = VAR_10;

 if (VAR_8 < VAR_4)
  VAR_14->options.video_input = VAR_8;

 if (VAR_7 < VAR_2) {
  VAR_14->options.audio_input = VAR_7;
  if (VAR_7 == VAR_3)
   VAR_14->options.audio_codec =
    VAR_6;
 }

 VAR_14->udev = FUNC_21(FUNC_14(VAR_12));



 VAR_15 = VAR_12->cur_altsetting;
 for (VAR_19 = 0; VAR_19 < VAR_15->desc.bNumEndpoints; ++VAR_19) {
  VAR_16 = &VAR_15->endpoint[VAR_19].desc;

  if (!VAR_14->bulk_in_endpointAddr &&
      FUNC_20(VAR_16)) {


   VAR_18 = 8192;
   VAR_14->bulk_in_size = VAR_18;
   VAR_14->bulk_in_endpointAddr = VAR_16->bEndpointAddress;
  }

 }
 if (!VAR_14->bulk_in_endpointAddr) {
  FUNC_23(&VAR_14->v4l2_dev, "Could not find bulk-in endpoint\n");
  goto error;
 }


 if (FUNC_7(VAR_14)) {
  FUNC_23(&VAR_14->v4l2_dev, "device init failed\n");
  goto error;
 }

 FUNC_18(&VAR_14->io_mutex);
 if (FUNC_5(VAR_14, VAR_5)) {
  FUNC_19(&VAR_14->io_mutex);
  FUNC_23(&VAR_14->v4l2_dev,
    "allocating transfer buffers failed\n");
  goto error;
 }
 FUNC_19(&VAR_14->io_mutex);

 if (FUNC_11(VAR_14, &VAR_12->dev,
        VAR_11[FUNC_1(&VAR_9)])) {
  FUNC_23(&VAR_14->v4l2_dev, "registering videodev failed\n");
  goto error;
 }
 FUNC_24(&VAR_14->v4l2_dev, "device now attached to %s\n",
    FUNC_25(VAR_14->video_dev));
 return 0;

reg_fail:



error:
 if (VAR_14) {

  if (VAR_14->workqueue)
   FUNC_3(VAR_14->workqueue);

  FUNC_6(VAR_14);
 }
 return VAR_20;
}
