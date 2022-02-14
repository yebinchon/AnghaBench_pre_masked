
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct zd_usb {struct urb* urb_async_waiting; int in_async; } ;
struct zd_ioreq16 {int value; scalar_t__ addr; } ;
struct usb_req_write_regs {struct reg_data* reg_writes; void* id; } ;
struct TYPE_4__ {int bInterval; } ;
struct usb_host_endpoint {TYPE_2__ desc; } ;
struct usb_device {int dummy; } ;
struct urb {int transfer_flags; } ;
struct reg_data {void* value; void* addr; } ;
struct TYPE_3__ {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 () ;
 int VAR_9 ;
 struct usb_req_write_regs* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 struct urb* FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct urb*,struct usb_device*,int ,struct usb_req_write_regs*,int,int ,struct zd_usb*) ;
 int FUNC_9 (struct urb*,struct usb_device*,int ,struct usb_req_write_regs*,int,int ,struct zd_usb*,int ) ;
 int FUNC_10 (struct urb*) ;
 struct usb_host_endpoint* FUNC_11 (struct usb_device*,int ) ;
 int FUNC_12 (struct usb_device*,int ) ;
 int FUNC_13 (struct usb_device*,int ) ;
 int FUNC_14 (struct zd_usb*,int) ;
 int FUNC_15 (struct zd_usb*) ;
 TYPE_1__* FUNC_16 (struct zd_usb*) ;
 struct usb_device* FUNC_17 (struct zd_usb*) ;

int FUNC_18(struct zd_usb *VAR_10, const struct zd_ioreq16 *VAR_11,
       unsigned int VAR_12)
{
 int VAR_13;
 struct usb_device *VAR_14;
 struct usb_req_write_regs *VAR_15 = ((void*)0);
 int VAR_16, VAR_17;
 struct urb *VAR_18;
 struct usb_host_endpoint *VAR_19;

 FUNC_0(FUNC_5(&FUNC_16(VAR_10)->mutex));
 FUNC_0(VAR_10->in_async);

 if (VAR_12 == 0)
  return 0;
 if (VAR_12 > VAR_7) {
  FUNC_2(FUNC_15(VAR_10),
   "error: count %u exceeds possible max %u\n",
   VAR_12, VAR_7);
  return -VAR_0;
 }
 if (FUNC_3()) {
  FUNC_2(FUNC_15(VAR_10),
   "error: io in atomic context not supported\n");
  return -VAR_4;
 }

 VAR_14 = FUNC_17(VAR_10);

 VAR_19 = FUNC_11(VAR_14, FUNC_13(VAR_14, VAR_3));
 if (!VAR_19)
  return -VAR_1;

 VAR_18 = FUNC_6(0, VAR_5);
 if (!VAR_18)
  return -VAR_2;

 VAR_17 = sizeof(struct usb_req_write_regs) +
    VAR_12 * sizeof(struct reg_data);
 VAR_15 = FUNC_4(VAR_17, VAR_5);
 if (!VAR_15) {
  VAR_13 = -VAR_2;
  goto error;
 }

 VAR_15->id = FUNC_1(VAR_8);
 for (VAR_16 = 0; VAR_16 < VAR_12; VAR_16++) {
  struct reg_data *VAR_20 = &VAR_15->reg_writes[VAR_16];
  VAR_20->addr = FUNC_1((u16)VAR_11[VAR_16].addr);
  VAR_20->value = FUNC_1(VAR_11[VAR_16].value);
 }




 if (FUNC_7(&VAR_19->desc))
  FUNC_9(VAR_18, VAR_14, FUNC_13(VAR_14, VAR_3),
     VAR_15, VAR_17, VAR_9, VAR_10,
     VAR_19->desc.bInterval);
 else
  FUNC_8(VAR_18, VAR_14, FUNC_12(VAR_14, VAR_3),
      VAR_15, VAR_17, VAR_9, VAR_10);

 VAR_18->transfer_flags |= VAR_6;


 VAR_13 = FUNC_14(VAR_10, 0);
 if (VAR_13) {
  FUNC_2(FUNC_15(VAR_10),
   "error in zd_submit_waiting_usb(). "
   "Error number %d\n", VAR_13);
  goto error;
 }




 VAR_10->urb_async_waiting = VAR_18;
 return 0;
error:
 FUNC_10(VAR_18);
 return VAR_13;
}
