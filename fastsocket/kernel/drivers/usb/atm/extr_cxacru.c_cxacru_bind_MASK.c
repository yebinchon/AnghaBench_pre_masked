
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbatm_data {int flags; struct cxacru_data* driver_data; } ;
struct usb_interface {int dummy; } ;
struct usb_device_id {scalar_t__ driver_info; } ;
struct usb_device {int dummy; } ;
struct cxacru_modem_type {int dummy; } ;
struct cxacru_data {int line_status; int adsl_status; void* rcv_urb; void* snd_urb; int * rcv_buf; int * snd_buf; int poll_work; int cm_serialize; int snd_done; int rcv_done; int adsl_state_serialize; int poll_state; int poll_state_serialize; struct cxacru_modem_type* modem_type; struct usbatm_data* usbatm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct cxacru_data*) ;
 int VAR_7 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (unsigned long) ;
 struct usb_device* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct cxacru_data*) ;
 struct cxacru_data* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 void* FUNC_9 (int ,int ) ;
 int FUNC_10 (void*,struct usb_device*,int ,int *,int ,int ,int *,int) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (struct usb_device*,int ) ;
 int FUNC_13 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_14(struct usbatm_data *VAR_8,
         struct usb_interface *VAR_9, const struct usb_device_id *VAR_10)
{
 struct cxacru_data *VAR_11;
 struct usb_device *VAR_12 = FUNC_5(VAR_9);
 int VAR_13;


 VAR_11 = FUNC_7(sizeof(*VAR_11), VAR_3);
 if (!VAR_11) {
  FUNC_3("cxacru_bind: no memory for instance data");
  return -VAR_2;
 }

 VAR_11->usbatm = VAR_8;
 VAR_11->modem_type = (struct cxacru_modem_type *) VAR_10->driver_info;

 FUNC_8(&VAR_11->poll_state_serialize);
 VAR_11->poll_state = VAR_1;
 VAR_11->line_status = -1;
 VAR_11->adsl_status = -1;

 FUNC_8(&VAR_11->adsl_state_serialize);

 VAR_11->rcv_buf = (u8 *) FUNC_1(VAR_3);
 if (!VAR_11->rcv_buf) {
  FUNC_3("cxacru_bind: no memory for rcv_buf");
  VAR_13 = -VAR_2;
  goto fail;
 }
 VAR_11->snd_buf = (u8 *) FUNC_1(VAR_3);
 if (!VAR_11->snd_buf) {
  FUNC_3("cxacru_bind: no memory for snd_buf");
  VAR_13 = -VAR_2;
  goto fail;
 }
 VAR_11->rcv_urb = FUNC_9(0, VAR_3);
 if (!VAR_11->rcv_urb) {
  FUNC_3("cxacru_bind: no memory for rcv_urb");
  VAR_13 = -VAR_2;
  goto fail;
 }
 VAR_11->snd_urb = FUNC_9(0, VAR_3);
 if (!VAR_11->snd_urb) {
  FUNC_3("cxacru_bind: no memory for snd_urb");
  VAR_13 = -VAR_2;
  goto fail;
 }

 FUNC_10(VAR_11->rcv_urb,
   VAR_12, FUNC_12(VAR_12, VAR_0),
   VAR_11->rcv_buf, VAR_4,
   VAR_6, &VAR_11->rcv_done, 1);

 FUNC_10(VAR_11->snd_urb,
   VAR_12, FUNC_13(VAR_12, VAR_0),
   VAR_11->snd_buf, VAR_4,
   VAR_6, &VAR_11->snd_done, 4);

 FUNC_8(&VAR_11->cm_serialize);

 FUNC_0(&VAR_11->poll_work, VAR_7);

 VAR_8->driver_data = VAR_11;

 VAR_8->flags = (FUNC_2(VAR_11) ? 0 : VAR_5);

 return 0;

 fail:
 FUNC_4((unsigned long) VAR_11->snd_buf);
 FUNC_4((unsigned long) VAR_11->rcv_buf);
 FUNC_11(VAR_11->snd_urb);
 FUNC_11(VAR_11->rcv_urb);
 FUNC_6(VAR_11);

 return VAR_13;
}
