
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {unsigned char* transfer_buffer; int actual_length; int dev; scalar_t__ status; scalar_t__ context; } ;
struct sk_buff {int len; scalar_t__ dev; } ;
struct bfusb_data {int lock; TYPE_2__* hdev; int udev; int pending_q; } ;
struct TYPE_3__ {int byte_rx; } ;
struct TYPE_4__ {int name; TYPE_1__ stat; int flags; } ;


 int FUNC_0 (char*,struct bfusb_data*,struct urb*,struct sk_buff*,int ) ;
 int FUNC_1 (char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct bfusb_data*,int,unsigned char*,int) ;
 int FUNC_3 (struct bfusb_data*,struct urb*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_11(struct urb *VAR_2)
{
 struct sk_buff *VAR_3 = (struct sk_buff *) VAR_2->context;
 struct bfusb_data *VAR_4 = (struct bfusb_data *) VAR_3->dev;
 unsigned char *VAR_5 = VAR_2->transfer_buffer;
 int VAR_6 = VAR_2->actual_length;
 int VAR_7, VAR_8, VAR_9;

 FUNC_0("bfusb %p urb %p skb %p len %d", VAR_4, VAR_2, VAR_3, VAR_3->len);

 FUNC_5(&VAR_4->lock);

 if (!FUNC_9(VAR_1, &VAR_4->hdev->flags))
  goto unlock;

 if (VAR_2->status || !VAR_6)
  goto resubmit;

 VAR_4->hdev->stat.byte_rx += VAR_6;

 FUNC_7(VAR_3, VAR_6);

 while (VAR_6) {
  VAR_8 = VAR_5[0] | (VAR_5[1] << 8);

  if (VAR_8 & 0x4000) {
   VAR_9 = 0;
   VAR_6 -= 2;
   VAR_5 += 2;
  } else {
   VAR_9 = (VAR_5[2] == 0) ? 256 : VAR_5[2];
   VAR_6 -= 3;
   VAR_5 += 3;
  }

  if (VAR_6 < VAR_9) {
   FUNC_1("%s block extends over URB buffer ranges",
     VAR_4->hdev->name);
  }

  if ((VAR_8 & 0xe1) == 0xc1)
   FUNC_2(VAR_4, VAR_8, VAR_5, VAR_9);

  VAR_6 -= VAR_9;
  VAR_5 += VAR_9;
 }

 FUNC_8(VAR_3, &VAR_4->pending_q);
 FUNC_4(VAR_3);

 FUNC_3(VAR_4, VAR_2);

 FUNC_6(&VAR_4->lock);

 return;

resubmit:
 VAR_2->dev = VAR_4->udev;

 VAR_7 = FUNC_10(VAR_2, VAR_0);
 if (VAR_7) {
  FUNC_1("%s bulk resubmit failed urb %p err %d",
     VAR_4->hdev->name, VAR_2, VAR_7);
 }

unlock:
 FUNC_6(&VAR_4->lock);
}
