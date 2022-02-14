
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_usb_interrupt {int lock; int read_regs_enabled; } ;
struct zd_usb {struct zd_usb_interrupt intr; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct zd_usb *VAR_0)
{
 struct zd_usb_interrupt *VAR_1 = &VAR_0->intr;

 FUNC_1(&VAR_1->lock);
 FUNC_0(&VAR_1->read_regs_enabled, 0);
 FUNC_2(&VAR_1->lock);
}
