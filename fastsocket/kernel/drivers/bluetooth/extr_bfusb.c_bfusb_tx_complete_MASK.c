
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int status; scalar_t__ context; } ;
struct sk_buff {scalar_t__ len; scalar_t__ dev; } ;
struct bfusb_data {int lock; int completed_q; int pending_q; TYPE_2__* hdev; int pending_tx; } ;
struct TYPE_3__ {int err_tx; int byte_tx; } ;
struct TYPE_4__ {TYPE_1__ stat; int flags; } ;


 int FUNC_0 (char*,struct bfusb_data*,struct urb*,struct sk_buff*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bfusb_data*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct urb *VAR_1)
{
 struct sk_buff *VAR_2 = (struct sk_buff *) VAR_1->context;
 struct bfusb_data *VAR_3 = (struct bfusb_data *) VAR_2->dev;

 FUNC_0("bfusb %p urb %p skb %p len %d", VAR_3, VAR_1, VAR_2, VAR_2->len);

 FUNC_1(&VAR_3->pending_tx);

 if (!FUNC_7(VAR_0, &VAR_3->hdev->flags))
  return;

 if (!VAR_1->status)
  VAR_3->hdev->stat.byte_tx += VAR_2->len;
 else
  VAR_3->hdev->stat.err_tx++;

 FUNC_3(&VAR_3->lock);

 FUNC_6(VAR_2, &VAR_3->pending_q);
 FUNC_5(&VAR_3->completed_q, VAR_2);

 FUNC_2(VAR_3);

 FUNC_4(&VAR_3->lock);
}
