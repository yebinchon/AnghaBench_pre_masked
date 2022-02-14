
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int irq; scalar_t__ iobase; int attached; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int int816_mode; scalar_t__ irq_was_now_closed; int irq_blocked; int irq_free; } ;


 int FUNC_0 (char*) ;




 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int,void*) ;
 int FUNC_3 (int,void*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct comedi_device *VAR_6 = VAR_5;
 FUNC_0("<I>");

 if (!VAR_6->attached) {
  FUNC_1(VAR_6, "premature interrupt");
  return VAR_0;
 }

 switch (VAR_3->int816_mode) {
 case 131:
 case 129:
  return FUNC_2(VAR_4, VAR_5);
 case 130:
 case 128:
  return FUNC_3(VAR_4, VAR_5);
 }

 FUNC_4(0, VAR_6->iobase + VAR_2);
 if ((!VAR_6->irq) | (!VAR_3->irq_free) | (!VAR_3->irq_blocked) |
     (!VAR_3->int816_mode)) {
  if (VAR_3->irq_was_now_closed) {
   VAR_3->irq_was_now_closed = 0;

   return VAR_0;
  }
  FUNC_1(VAR_6, "bad IRQ!");
  return VAR_1;
 }
 FUNC_1(VAR_6, "IRQ from unknow source!");
 return VAR_1;
}
