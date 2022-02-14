
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {scalar_t__ irq_blocked; int irq_was_now_closed; int ai_mode; int neverending_ai; struct comedi_subdevice* last_int_sub; int usefifo; int dma; int ai_act_scan; int rtc_irq_timer; } ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct comedi_device*,int,int ,int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_8,
       struct comedi_subdevice *VAR_9)
{
 if (VAR_7->irq_blocked > 0) {
  FUNC_4("pcl818_ai_cancel()\n");
  VAR_7->irq_was_now_closed = 1;

  switch (VAR_7->ai_mode) {






  case 137:
  case 133:
   if (VAR_7->neverending_ai ||
       (!VAR_7->neverending_ai &&
        VAR_7->ai_act_scan > 0)) {

    goto end;
   }
   FUNC_1(VAR_7->dma);
  case 134:
  case 130:
  case 135:
  case 131:




   FUNC_3(FUNC_2(VAR_8->iobase + VAR_3) & 0x73, VAR_8->iobase + VAR_3);
   FUNC_7(1);
   FUNC_6(VAR_8, -1, 0, 0);
   FUNC_3(0, VAR_8->iobase + VAR_1);
   FUNC_2(VAR_8->iobase + VAR_1);
   FUNC_2(VAR_8->iobase + VAR_0);
   FUNC_3(0, VAR_8->iobase + VAR_2);
   FUNC_3(0, VAR_8->iobase + VAR_3);
   if (VAR_7->usefifo) {
    FUNC_3(0, VAR_8->iobase + VAR_6);
    FUNC_3(0, VAR_8->iobase + VAR_5);
    FUNC_3(0, VAR_8->iobase + VAR_4);
   }
   VAR_7->irq_blocked = 0;
   VAR_7->last_int_sub = VAR_9;
   VAR_7->neverending_ai = 0;
   VAR_7->ai_mode = 0;
   VAR_7->irq_was_now_closed = 0;
   break;
  }
 }

end:
 FUNC_4("pcl818_ai_cancel() end\n");
 return 0;
}
