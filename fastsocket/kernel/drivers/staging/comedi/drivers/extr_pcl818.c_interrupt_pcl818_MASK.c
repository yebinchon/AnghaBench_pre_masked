
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int irq; scalar_t__ iobase; struct comedi_subdevice* subdevices; int attached; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ ai_act_scan; int ai_mode; scalar_t__ irq_blocked; int irq_free; scalar_t__ neverending_ai; scalar_t__ irq_was_now_closed; } ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int,void*) ;
 int FUNC_2 (int,void*) ;
 int FUNC_3 (int,void*) ;
 int FUNC_4 (int,void*) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct comedi_device*,struct comedi_subdevice*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_4, void *VAR_5)
{
 struct comedi_device *VAR_6 = VAR_5;

 if (!VAR_6->attached) {
  FUNC_0(VAR_6, "premature interrupt");
  return VAR_0;
 }


 if (VAR_3->irq_blocked && VAR_3->irq_was_now_closed) {
  if ((VAR_3->neverending_ai || (!VAR_3->neverending_ai &&
       VAR_3->ai_act_scan > 0)) &&
      (VAR_3->ai_mode == 135 ||
       VAR_3->ai_mode == 132)) {





   struct comedi_subdevice *VAR_7 = VAR_6->subdevices + 0;
   VAR_3->ai_act_scan = 0;
   VAR_3->neverending_ai = 0;
   FUNC_6(VAR_6, VAR_7);
  }

  FUNC_5(0, VAR_6->iobase + VAR_2);

  return VAR_0;
 }

 switch (VAR_3->ai_mode) {
 case 135:
 case 132:
  return FUNC_1(VAR_4, VAR_5);
 case 133:
 case 130:
  return FUNC_3(VAR_4, VAR_5);
 case 134:
 case 131:
  return FUNC_2(VAR_4, VAR_5);





 default:
  break;
 }

 FUNC_5(0, VAR_6->iobase + VAR_2);

 if ((!VAR_6->irq) || (!VAR_3->irq_free) || (!VAR_3->irq_blocked)
     || (!VAR_3->ai_mode)) {
  FUNC_0(VAR_6, "bad IRQ!");
  return VAR_1;
 }

 FUNC_0(VAR_6, "IRQ from unknow source!");
 return VAR_1;
}
