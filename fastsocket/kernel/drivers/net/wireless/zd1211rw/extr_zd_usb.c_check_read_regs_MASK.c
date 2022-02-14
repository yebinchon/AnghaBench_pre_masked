
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct read_regs_int {int length; scalar_t__ buffer; } ;
struct zd_usb_interrupt {struct read_regs_int read_regs; } ;
struct zd_usb {struct zd_usb_interrupt intr; } ;
struct usb_req_read_regs {scalar_t__* addr; } ;
struct usb_int_regs {struct reg_data* regs; } ;
struct reg_data {scalar_t__ addr; } ;


 int FUNC_0 (int ,char*,int,int,...) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct zd_usb*) ;

__attribute__((used)) static bool FUNC_4(struct zd_usb *VAR_0, struct usb_req_read_regs *VAR_1,
       unsigned int VAR_2)
{
 int VAR_3;
 struct zd_usb_interrupt *VAR_4 = &VAR_0->intr;
 struct read_regs_int *VAR_5 = &VAR_4->read_regs;
 struct usb_int_regs *VAR_6 = (struct usb_int_regs *)VAR_5->buffer;




 if (VAR_5->length < FUNC_2(VAR_2)) {
  FUNC_0(FUNC_3(VAR_0),
    "error: actual length %d less than expected %d\n",
    VAR_5->length, FUNC_2(VAR_2));
  return 0;
 }

 if (VAR_5->length > sizeof(VAR_5->buffer)) {
  FUNC_0(FUNC_3(VAR_0),
    "error: actual length %d exceeds buffer size %zu\n",
    VAR_5->length, sizeof(VAR_5->buffer));
  return 0;
 }

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  struct reg_data *VAR_7 = &VAR_6->regs[VAR_3];
  if (VAR_7->addr != VAR_1->addr[VAR_3]) {
   FUNC_0(FUNC_3(VAR_0),
     "rd[%d] addr %#06hx expected %#06hx\n", VAR_3,
     FUNC_1(VAR_7->addr),
     FUNC_1(VAR_1->addr[VAR_3]));
   return 0;
  }
 }

 return 1;
}
