
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qe_udc {scalar_t__ usb_state; int ep0_dir; int ep0_state; TYPE_2__* eps; TYPE_1__* usb_regs; } ;
struct TYPE_4__ {scalar_t__ init; } ;
struct TYPE_3__ {int usb_usadr; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct qe_udc*,unsigned char) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct qe_udc*) ;

__attribute__((used)) static int FUNC_5(struct qe_udc *VAR_4)
{
 unsigned char VAR_5;

 if (VAR_4->usb_state == VAR_2)
  return 0;

 FUNC_2();
 FUNC_0(&VAR_4->usb_regs->usb_usadr, 0);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_4->eps[VAR_5].init)
   FUNC_1(VAR_4, VAR_5);
 }

 FUNC_4(VAR_4);
 VAR_4->usb_state = VAR_2;
 VAR_4->ep0_state = VAR_3;
 VAR_4->ep0_dir = VAR_0;
 FUNC_3();
 return 0;
}
