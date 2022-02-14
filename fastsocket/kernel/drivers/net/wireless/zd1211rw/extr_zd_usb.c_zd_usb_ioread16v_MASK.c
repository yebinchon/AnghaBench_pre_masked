
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ zd_addr_t ;
typedef int u16 ;
struct TYPE_4__ {int completion; } ;
struct TYPE_5__ {TYPE_1__ read_regs; } ;
struct zd_usb {TYPE_2__ intr; scalar_t__ req_buf; } ;
struct usb_req_read_regs {void** addr; void* id; } ;
struct usb_device {int dummy; } ;
typedef int __le16 ;
struct TYPE_6__ {int mutex; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct zd_usb*) ;
 int FUNC_6 (struct zd_usb*,int *,struct usb_req_read_regs*,unsigned int,int*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct zd_usb*,struct usb_req_read_regs*,unsigned int) ;
 int FUNC_11 (struct zd_usb*) ;
 unsigned long FUNC_12 (int *,int ) ;
 int FUNC_13 (struct usb_device*,struct usb_req_read_regs*,int,int*,int) ;
 int FUNC_14 (struct zd_usb*) ;
 TYPE_3__* FUNC_15 (struct zd_usb*) ;
 struct usb_device* FUNC_16 (struct zd_usb*) ;

int FUNC_17(struct zd_usb *VAR_6, u16 *VAR_7,
              const zd_addr_t *VAR_8, unsigned int VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14 = 0;
 struct usb_device *VAR_15;
 struct usb_req_read_regs *VAR_16 = ((void*)0);
 unsigned long VAR_17;
 bool VAR_18 = 0;

 if (VAR_9 < 1) {
  FUNC_4(FUNC_14(VAR_6), "error: count is zero\n");
  return -VAR_0;
 }
 if (VAR_9 > VAR_4) {
  FUNC_4(FUNC_14(VAR_6),
    "error: count %u exceeds possible max %u\n",
    VAR_9, VAR_4);
  return -VAR_0;
 }
 if (FUNC_7()) {
  FUNC_4(FUNC_14(VAR_6),
    "error: io in atomic context not supported\n");
  return -VAR_3;
 }
 if (!FUNC_11(VAR_6)) {
  FUNC_4(FUNC_14(VAR_6),
     "error: usb interrupt not enabled\n");
  return -VAR_3;
 }

 FUNC_2(FUNC_9(&FUNC_15(VAR_6)->mutex));
 FUNC_1(sizeof(struct usb_req_read_regs) + VAR_4 *
       sizeof(__le16) > sizeof(VAR_6->req_buf));
 FUNC_0(sizeof(struct usb_req_read_regs) + VAR_9 * sizeof(__le16) >
        sizeof(VAR_6->req_buf));

 VAR_12 = sizeof(struct usb_req_read_regs) + VAR_9 * sizeof(__le16);
 VAR_16 = (void *)VAR_6->req_buf;

 VAR_16->id = FUNC_3(VAR_5);
 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++)
  VAR_16->addr[VAR_11] = FUNC_3((u16)VAR_8[VAR_11]);

retry_read:
 VAR_14++;
 VAR_15 = FUNC_16(VAR_6);
 FUNC_10(VAR_6, VAR_16, VAR_9);
 VAR_10 = FUNC_13(VAR_15, VAR_16, VAR_12, &VAR_13, 50 );
 if (VAR_10) {
  FUNC_4(FUNC_14(VAR_6),
   "error in zd_ep_regs_out_msg(). Error number %d\n", VAR_10);
  goto error;
 }
 if (VAR_12 != VAR_13) {
  FUNC_4(FUNC_14(VAR_6), "error in zd_ep_regs_out_msg()\n"
   " req_len %d != actual_req_len %d\n",
   VAR_12, VAR_13);
  VAR_10 = -VAR_1;
  goto error;
 }

 VAR_17 = FUNC_12(&VAR_6->intr.read_regs.completion,
           FUNC_8(50));
 if (!VAR_17) {
  FUNC_5(VAR_6);
  FUNC_4(FUNC_14(VAR_6), "read timed out\n");
  VAR_10 = -VAR_2;
  goto error;
 }

 VAR_10 = FUNC_6(VAR_6, VAR_7, VAR_16, VAR_9, &VAR_18);
 if (VAR_18 && VAR_14 < 20) {
  FUNC_4(FUNC_14(VAR_6), "read retry, tries so far: %d\n",
    VAR_14);
  goto retry_read;
 }
error:
 return VAR_10;
}
