
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int completion; } ;
struct zd_usb_interrupt {int read_regs_int_overridden; int lock; TYPE_1__ read_regs; int read_regs_enabled; } ;
struct zd_usb {struct zd_usb_interrupt intr; } ;
struct urb {struct zd_usb* context; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline void FUNC_5(struct urb *VAR_0)
{
 struct zd_usb *VAR_1 = VAR_0->context;
 struct zd_usb_interrupt *VAR_2 = &VAR_1->intr;

 FUNC_3(&VAR_2->lock);
 if (FUNC_0(&VAR_2->read_regs_enabled)) {
  FUNC_1(&VAR_2->read_regs_enabled, 0);
  VAR_2->read_regs_int_overridden = 1;
  FUNC_2(&VAR_2->read_regs.completion);
 }
 FUNC_4(&VAR_2->lock);
}
