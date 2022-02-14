
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u8 ;
typedef unsigned long u32 ;
typedef unsigned long u16 ;
struct zd_usb {scalar_t__ req_buf; } ;
struct usb_req_rfwrite {void** bit_values; void* bits; void* value; void* id; } ;
struct usb_device {int dummy; } ;
typedef int __le16 ;
struct TYPE_2__ {int mutex; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 void* FUNC_3 (unsigned long) ;
 int FUNC_4 (int ,char*,...) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct usb_device*,struct usb_req_rfwrite*,int,int*,int) ;
 int FUNC_8 (struct zd_usb*) ;
 int FUNC_9 (struct zd_usb*,unsigned long*,int ) ;
 TYPE_1__* FUNC_10 (struct zd_usb*) ;
 struct usb_device* FUNC_11 (struct zd_usb*) ;

int FUNC_12(struct zd_usb *VAR_10, u32 VAR_11, u8 VAR_12)
{
 int VAR_13;
 struct usb_device *VAR_14;
 struct usb_req_rfwrite *VAR_15 = ((void*)0);
 int VAR_16, VAR_17, VAR_18;
 u16 VAR_19;

 if (FUNC_5()) {
  FUNC_4(FUNC_8(VAR_10),
   "error: io in atomic context not supported\n");
  return -VAR_2;
 }
 if (VAR_12 < VAR_7) {
  FUNC_4(FUNC_8(VAR_10),
   "error: bits %d are smaller than"
   " USB_MIN_RFWRITE_BIT_COUNT %d\n",
   VAR_12, VAR_7);
  return -VAR_0;
 }
 if (VAR_12 > VAR_6) {
  FUNC_4(FUNC_8(VAR_10),
   "error: bits %d exceed USB_MAX_RFWRITE_BIT_COUNT %d\n",
   VAR_12, VAR_6);
  return -VAR_0;
 }
 FUNC_4(FUNC_8(VAR_10), "value %#09x bits %d\n", VAR_11, VAR_12);

 VAR_13 = FUNC_9(VAR_10, &VAR_19, VAR_9);
 if (VAR_13) {
  FUNC_4(FUNC_8(VAR_10),
   "error %d: Couldn't read ZD_CR203\n", VAR_13);
  return VAR_13;
 }
 VAR_19 &= ~(VAR_5|VAR_3|VAR_4);

 FUNC_2(FUNC_6(&FUNC_10(VAR_10)->mutex));
 FUNC_1(sizeof(struct usb_req_rfwrite) +
       VAR_6 * sizeof(__le16) >
       sizeof(VAR_10->req_buf));
 FUNC_0(sizeof(struct usb_req_rfwrite) + VAR_12 * sizeof(__le16) >
        sizeof(VAR_10->req_buf));

 VAR_17 = sizeof(struct usb_req_rfwrite) + VAR_12 * sizeof(__le16);
 VAR_15 = (void *)VAR_10->req_buf;

 VAR_15->id = FUNC_3(VAR_8);

 VAR_15->value = FUNC_3(2);
 VAR_15->bits = FUNC_3(VAR_12);

 for (VAR_16 = 0; VAR_16 < VAR_12; VAR_16++) {
  u16 VAR_20 = VAR_19;
  if (VAR_11 & (1 << (VAR_12-1-VAR_16)))
   VAR_20 |= VAR_4;
  VAR_15->bit_values[VAR_16] = FUNC_3(VAR_20);
 }

 VAR_14 = FUNC_11(VAR_10);
 VAR_13 = FUNC_7(VAR_14, VAR_15, VAR_17, &VAR_18, 50 );
 if (VAR_13) {
  FUNC_4(FUNC_8(VAR_10),
   "error in zd_ep_regs_out_msg(). Error number %d\n", VAR_13);
  goto out;
 }
 if (VAR_17 != VAR_18) {
  FUNC_4(FUNC_8(VAR_10), "error in zd_ep_regs_out_msg()"
   " req_len %d != actual_req_len %d\n",
   VAR_17, VAR_18);
  VAR_13 = -VAR_1;
  goto out;
 }


out:
 return VAR_13;
}
