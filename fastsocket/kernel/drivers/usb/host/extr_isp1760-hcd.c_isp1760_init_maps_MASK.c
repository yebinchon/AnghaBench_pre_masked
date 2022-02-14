
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct usb_hcd *VAR_3)
{

 FUNC_0(0x80000000, VAR_3->regs + VAR_0);
 FUNC_0(0x80000000, VAR_3->regs + VAR_1);
 FUNC_0(0x00000001, VAR_3->regs + VAR_2);
}
