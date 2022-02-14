
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct device {int dummy; } ;
struct usb_interface {int num_altsetting; struct device dev; TYPE_2__* cur_altsetting; } ;
struct usb_device_id {int dummy; } ;
struct i1480 {int buf_size; char* pre_fw_name; char* mac_fw_name; char* mac_fw_name_deprecate; char* phy_fw_name; struct i1480_usb* cmd_buf; int cmd; int wait_init_done; int * rc_setup; int read; int write; struct device* dev; struct i1480_usb* evt_buf; } ;
struct i1480_usb {int usb_dev; struct i1480 i1480; } ;
struct TYPE_8__ {int idProduct; } ;
struct TYPE_9__ {TYPE_3__ descriptor; } ;
struct TYPE_6__ {int bInterfaceNumber; } ;
struct TYPE_7__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct i1480*) ;
 int VAR_3 ;
 int FUNC_4 (struct i1480_usb*,struct usb_interface*) ;
 int FUNC_5 (struct i1480_usb*) ;
 int FUNC_6 (struct i1480_usb*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__* FUNC_7 (struct usb_interface*) ;
 int FUNC_8 (struct i1480_usb*) ;
 struct i1480_usb* FUNC_9 (int,int ) ;
 struct i1480_usb* FUNC_10 (int,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_4__*,int ,int) ;

__attribute__((used)) static
int FUNC_13(struct usb_interface *VAR_7, const struct usb_device_id *VAR_8)
{
 struct i1480_usb *VAR_9;
 struct i1480 *VAR_10;
 struct device *VAR_11 = &VAR_7->dev;
 int VAR_12;

 VAR_12 = -VAR_0;
 if (VAR_7->cur_altsetting->desc.bInterfaceNumber != 0) {
  FUNC_0(VAR_11, "not attaching to iface %d\n",
   VAR_7->cur_altsetting->desc.bInterfaceNumber);
  goto error;
 }
 if (VAR_7->num_altsetting > 1
     && FUNC_7(VAR_7)->descriptor.idProduct == 0xbabe) {

  VAR_12 = FUNC_12(FUNC_7(VAR_7), 0, 1);
  if (VAR_12 < 0)
   FUNC_2(VAR_11,
     "can't set altsetting 1 on iface 0: %d\n",
     VAR_12);
 }

 VAR_12 = -VAR_1;
 VAR_9 = FUNC_10(sizeof(*VAR_9), VAR_2);
 if (VAR_9 == ((void*)0)) {
  FUNC_1(VAR_11, "Unable to allocate instance\n");
  goto error;
 }
 FUNC_6(VAR_9);

 VAR_10 = &VAR_9->i1480;
 VAR_10->buf_size = 512;
 VAR_10->cmd_buf = FUNC_9(2 * VAR_10->buf_size, VAR_2);
 if (VAR_10->cmd_buf == ((void*)0)) {
  FUNC_1(VAR_11, "Cannot allocate transfer buffers\n");
  VAR_12 = -VAR_1;
  goto error_buf_alloc;
 }
 VAR_10->evt_buf = VAR_10->cmd_buf + VAR_10->buf_size;

 VAR_12 = FUNC_4(VAR_9, VAR_7);
 if (VAR_12 < 0) {
  FUNC_1(VAR_11, "Cannot create instance: %d\n", VAR_12);
  goto error_create;
 }


 VAR_10->pre_fw_name = "i1480-pre-phy-0.0.bin";
 VAR_10->mac_fw_name = "i1480-usb-0.0.bin";
 VAR_10->mac_fw_name_deprecate = "ptc-0.0.bin";
 VAR_10->phy_fw_name = "i1480-phy-0.0.bin";
 VAR_10->dev = &VAR_7->dev;
 VAR_10->write = VAR_6;
 VAR_10->read = VAR_4;
 VAR_10->rc_setup = ((void*)0);
 VAR_10->wait_init_done = VAR_5;
 VAR_10->cmd = VAR_3;

 VAR_12 = FUNC_3(&VAR_9->i1480);
 if (VAR_12 >= 0) {
  FUNC_11(VAR_9->usb_dev);
  VAR_12 = -VAR_0;
 }
 FUNC_5(VAR_9);
error_create:
 FUNC_8(VAR_10->cmd_buf);
error_buf_alloc:
 FUNC_8(VAR_9);
error:
 return VAR_12;
}
