
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int actual_length; int transfer_buffer; int pipe; int status; struct hci_dev* context; } ;
struct TYPE_2__ {int err_rx; } ;
struct hci_dev {int name; TYPE_1__ stat; int flags; struct bpa10x_data* driver_data; } ;
struct bpa10x_data {int rx_anchor; } ;


 int FUNC_0 (char*,int ,struct urb*,int ,int ) ;
 int FUNC_1 (char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct hci_dev*,int ,int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct urb*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct urb*,int ) ;
 int FUNC_7 (struct urb*) ;

__attribute__((used)) static void FUNC_8(struct urb *VAR_2)
{
 struct hci_dev *VAR_3 = VAR_2->context;
 struct bpa10x_data *VAR_4 = VAR_3->driver_data;
 int VAR_5;

 FUNC_0("%s urb %p status %d count %d", VAR_3->name,
     VAR_2, VAR_2->status, VAR_2->actual_length);

 if (!FUNC_3(VAR_1, &VAR_3->flags))
  return;

 if (VAR_2->status == 0) {
  if (FUNC_2(VAR_3, FUNC_5(VAR_2->pipe),
      VAR_2->transfer_buffer,
      VAR_2->actual_length) < 0) {
   FUNC_1("%s corrupted event packet", VAR_3->name);
   VAR_3->stat.err_rx++;
  }
 }

 FUNC_4(VAR_2, &VAR_4->rx_anchor);

 VAR_5 = FUNC_6(VAR_2, VAR_0);
 if (VAR_5 < 0) {
  FUNC_1("%s urb %p failed to resubmit (%d)",
      VAR_3->name, VAR_2, -VAR_5);
  FUNC_7(VAR_2);
 }
}
