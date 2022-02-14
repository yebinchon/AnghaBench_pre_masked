
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cx88_core {int pci_irqmask; struct cx88_IR* ir; } ;
struct TYPE_3__ {int function; } ;
struct cx88_IR {int polling; scalar_t__ sampling; TYPE_1__ timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int VAR_7 ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(void *VAR_8)
{
 struct cx88_core *VAR_9 = VAR_8;
 struct cx88_IR *VAR_10;

 if (!VAR_9 || !VAR_9->ir)
  return -VAR_1;

 VAR_10 = VAR_9->ir;

 if (VAR_10->polling) {
  FUNC_1(&VAR_10->timer, VAR_0, VAR_2);
  VAR_10->timer.function = VAR_6;
  FUNC_2(&VAR_10->timer,
         FUNC_3(0, VAR_10->polling * 1000000),
         VAR_2);
 }
 if (VAR_10->sampling) {
  VAR_9->pci_irqmask |= VAR_5;
  FUNC_0(VAR_4, 0x33F286 * VAR_7);
  FUNC_0(VAR_3, 0x5);
 }
 return 0;
}
