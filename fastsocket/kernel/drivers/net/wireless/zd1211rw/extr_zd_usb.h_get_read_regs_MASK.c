
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ buffer; } ;
struct zd_usb_interrupt {TYPE_1__ read_regs; } ;
struct usb_int_regs {int dummy; } ;



__attribute__((used)) static inline struct usb_int_regs *FUNC_0(struct zd_usb_interrupt *VAR_0)
{
 return (struct usb_int_regs *)VAR_0->read_regs.buffer;
}
