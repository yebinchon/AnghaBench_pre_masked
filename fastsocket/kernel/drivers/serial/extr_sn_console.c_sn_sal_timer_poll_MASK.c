
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int irq; } ;
struct sn_cons_port {scalar_t__ sc_interrupt_timeout; int sc_timer; TYPE_1__ sc_port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct sn_cons_port*,unsigned long) ;
 int FUNC_2 (struct sn_cons_port*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_3)
{
 struct sn_cons_port *VAR_4 = (struct sn_cons_port *)VAR_3;
 unsigned long VAR_5;

 if (!VAR_4)
  return;

 if (!VAR_4->sc_port.irq) {
  FUNC_3(&VAR_4->sc_port.lock, VAR_5);
  if (VAR_2)
   FUNC_1(VAR_4, VAR_5);
  FUNC_2(VAR_4, VAR_0);
  FUNC_4(&VAR_4->sc_port.lock, VAR_5);
  FUNC_0(&VAR_4->sc_timer,
     VAR_1 + VAR_4->sc_interrupt_timeout);
 }
}
