
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_3__ {int bulk_mode; } ;
struct TYPE_4__ {TYPE_1__ rc_core; } ;
struct dvb_usb_device {TYPE_2__ props; struct dib0700_state* priv; } ;
struct dib0700_state {int fw_version; void* nb_packet_buffer_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,void*,void*,void*,void*) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (struct dvb_usb_device*,void**,void**,void**,void**) ;
 int FUNC_2 (struct dvb_usb_device*) ;
 scalar_t__ FUNC_3 (struct usb_interface*,int *,int ,struct dvb_usb_device**,int ) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_6,
  const struct usb_device_id *VAR_7)
{
 int VAR_8;
 struct dvb_usb_device *VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  if (FUNC_3(VAR_6, &VAR_4[VAR_8], VAR_1,
      &VAR_9, VAR_2) == 0) {
   struct dib0700_state *VAR_10 = VAR_9->priv;
   u32 VAR_11, VAR_12, VAR_13, VAR_14;

   FUNC_1(VAR_9, &VAR_11, &VAR_12,
    &VAR_13, &VAR_14);

   FUNC_0("Firmware version: %x, %d, 0x%x, %d\n",
    VAR_11, VAR_12, VAR_13, VAR_14);

   VAR_10->fw_version = VAR_13;
   VAR_10->nb_packet_buffer_size = (u32)VAR_5;


   if (VAR_10->fw_version >= 0x10200)
    VAR_9->props.rc_core.bulk_mode = 1;
   else
    VAR_9->props.rc_core.bulk_mode = 0;

   FUNC_2(VAR_9);

   return 0;
  }

 return -VAR_0;
}
