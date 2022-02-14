
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct uart_sunsab_port {int cached_mode; int cached_pvr; int cached_dafo; int cached_ebrg; TYPE_3__* regs; int irqflags; } ;
struct TYPE_5__ {int ccr2; int pvr; int mode; } ;
struct TYPE_4__ {int bgr; int dafo; } ;
struct TYPE_6__ {TYPE_2__ rw; TYPE_1__ w; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static void FUNC_4(struct uart_sunsab_port *VAR_1)
{
 if (FUNC_2(VAR_0, &VAR_1->irqflags)) {
  u8 VAR_2;

  FUNC_0(VAR_0, &VAR_1->irqflags);
  FUNC_3(VAR_1->cached_mode, &VAR_1->regs->rw.mode);
  FUNC_3(VAR_1->cached_pvr, &VAR_1->regs->rw.pvr);
  FUNC_3(VAR_1->cached_dafo, &VAR_1->regs->w.dafo);

  FUNC_3(VAR_1->cached_ebrg & 0xff, &VAR_1->regs->w.bgr);
  VAR_2 = FUNC_1(&VAR_1->regs->rw.ccr2);
  VAR_2 &= ~0xc0;
  VAR_2 |= (VAR_1->cached_ebrg >> 2) & 0xc0;
  FUNC_3(VAR_2, &VAR_1->regs->rw.ccr2);
 }
}
