
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int setup_packet; scalar_t__ transfer_buffer_length; int status; int actual_length; struct sk_buff* context; } ;
struct sk_buff {scalar_t__ dev; } ;
struct TYPE_2__ {int err_tx; int byte_tx; } ;
struct hci_dev {TYPE_1__ stat; int flags; int name; } ;


 int FUNC_0 (char*,int ,struct urb*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct urb *VAR_1)
{
 struct sk_buff *VAR_2 = VAR_1->context;
 struct hci_dev *VAR_3 = (struct hci_dev *) VAR_2->dev;

 FUNC_0("%s urb %p status %d count %d", VAR_3->name,
     VAR_1, VAR_1->status, VAR_1->actual_length);

 if (!FUNC_3(VAR_0, &VAR_3->flags))
  goto done;

 if (!VAR_1->status)
  VAR_3->stat.byte_tx += VAR_1->transfer_buffer_length;
 else
  VAR_3->stat.err_tx++;

done:
 FUNC_1(VAR_1->setup_packet);

 FUNC_2(VAR_2);
}
