
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct read_regs_int {scalar_t__ buffer; } ;
struct zd_usb_interrupt {int lock; int read_regs_int_overridden; struct read_regs_int read_regs; } ;
struct zd_usb {struct zd_usb_interrupt intr; } ;
struct usb_req_read_regs {int dummy; } ;
struct usb_int_regs {struct reg_data* regs; } ;
struct reg_data {int value; } ;


 int VAR_0 ;
 int FUNC_0 (struct zd_usb*,struct usb_req_read_regs*,unsigned int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct zd_usb*) ;

__attribute__((used)) static int FUNC_6(struct zd_usb *VAR_1, u16 *VAR_2,
         struct usb_req_read_regs *VAR_3, unsigned int VAR_4,
         bool *VAR_5)
{
 int VAR_6;
 int VAR_7;
 struct zd_usb_interrupt *VAR_8 = &VAR_1->intr;
 struct read_regs_int *VAR_9 = &VAR_8->read_regs;
 struct usb_int_regs *VAR_10 = (struct usb_int_regs *)VAR_9->buffer;

 FUNC_3(&VAR_8->lock);

 VAR_6 = -VAR_0;


 *VAR_5 = !!VAR_8->read_regs_int_overridden;
 if (*VAR_5)
  goto error_unlock;

 if (!FUNC_0(VAR_1, VAR_3, VAR_4)) {
  FUNC_1(FUNC_5(VAR_1), "error: invalid read regs\n");
  goto error_unlock;
 }

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  struct reg_data *VAR_11 = &VAR_10->regs[VAR_7];
  VAR_2[VAR_7] = FUNC_2(VAR_11->value);
 }

 VAR_6 = 0;
error_unlock:
 FUNC_4(&VAR_8->lock);
 return VAR_6;
}
