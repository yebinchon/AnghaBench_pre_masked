
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {scalar_t__ orig_p0; } ;
struct ipipe_percpu_domain_data {int irqpend_himask; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct pt_regs*) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 TYPE_1__* VAR_6 ;
 struct ipipe_percpu_domain_data* FUNC_3 () ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;

int FUNC_6(struct pt_regs *VAR_7)
{
 struct ipipe_percpu_domain_data *VAR_8;
 unsigned long VAR_9;
 int VAR_10;
 if (VAR_7->orig_p0 < VAR_2) {
  void (*VAR_11)(void) = (void (*)(void))VAR_4;
  VAR_11();
  if ((VAR_6->flags & VAR_3) == 0)
   return 0;
 }
 if (!FUNC_1(VAR_0))
  return 0;

 VAR_10 = FUNC_0(VAR_0, VAR_7);

 FUNC_5(VAR_9);

 if (!VAR_5) {
  FUNC_4(VAR_9);
  return 1;
 }

 VAR_8 = FUNC_3();
 if ((VAR_8->irqpend_himask & VAR_1) != 0)
  FUNC_2(VAR_1);

 FUNC_4(VAR_9);

 return -VAR_10;
}
