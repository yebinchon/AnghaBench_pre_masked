
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct line* driver_data; } ;
struct line {TYPE_1__* driver; int chan_list; scalar_t__ throttled; int task; } ;
struct TYPE_2__ {int read_irq; } ;


 int FUNC_0 (int *,int *,struct tty_struct*,int ) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct tty_struct *VAR_0)
{
 struct line *VAR_1 = VAR_0->driver_data;

 VAR_1->throttled = 0;
 FUNC_0(&VAR_1->chan_list, &VAR_1->task, VAR_0,
         VAR_1->driver->read_irq);






 if (!VAR_1->throttled)
  FUNC_1(&VAR_1->chan_list, VAR_1->driver->read_irq);
}
