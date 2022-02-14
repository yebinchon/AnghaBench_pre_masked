
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int actual_length; int transfer_buffer; int status; struct mceusb_dev* context; } ;
struct pt_regs {int dummy; } ;
struct mceusb_dev {int dev; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (struct mceusb_dev*,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct urb *VAR_0, struct pt_regs *VAR_1)
{
 struct mceusb_dev *VAR_2;
 int VAR_3;

 if (!VAR_0)
  return;

 VAR_2 = VAR_0->context;
 if (VAR_2) {
  VAR_3 = VAR_0->actual_length;

  FUNC_0(VAR_2->dev, "callback called (status=%d len=%d)\n",
   VAR_0->status, VAR_3);

  FUNC_1(VAR_2, VAR_0->transfer_buffer, 0, VAR_3, 1);
 }

}
