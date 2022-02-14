
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int spinlock; scalar_t__ iobase; } ;
struct TYPE_4__ {int control_state; int timer; scalar_t__ timer_running; scalar_t__ timer_mode; scalar_t__ dma_chan; } ;
struct TYPE_3__ {int size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 TYPE_2__* VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_7, struct comedi_subdevice *VAR_8)
{
 unsigned long VAR_9;

 FUNC_3(&VAR_7->spinlock, VAR_9);

 VAR_5->control_state &= ~VAR_2 & ~VAR_4 & ~VAR_3;
 FUNC_2(VAR_5->control_state, VAR_7->iobase + VAR_1);
 if (VAR_5->dma_chan)
  FUNC_1(VAR_5->dma_chan);


 if (VAR_5->timer_mode && VAR_5->timer_running) {
  VAR_5->timer_running = 0;
  FUNC_0(&VAR_5->timer);
 }


 if (VAR_6->size > 0x400) {
  FUNC_2(0, VAR_7->iobase + VAR_0);
 }

 FUNC_4(&VAR_7->spinlock, VAR_9);

 return 0;
}
