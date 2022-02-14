
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct comedi_subdevice* read_subdev; struct comedi_subdevice* write_subdev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {unsigned char int_en; unsigned char ier; int intr_running; int isr_spinlock; scalar_t__ iobase1; int intr_cpuid; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned char VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_1__* VAR_9 ;
 unsigned char FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned char,scalar_t__) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_10, void *VAR_11)
{
 unsigned char VAR_12, VAR_13;
 struct comedi_device *VAR_14 = (struct comedi_device *)VAR_11;
 struct comedi_subdevice *VAR_15;
 unsigned long VAR_16;


 VAR_12 = FUNC_1(VAR_9->iobase1 + VAR_6);

 if (VAR_12 == VAR_4) {
  return VAR_1;
 }

 FUNC_6(&VAR_9->isr_spinlock, VAR_16);
 VAR_13 = VAR_9->int_en & VAR_12;



 VAR_9->ier = VAR_9->int_en & ~VAR_12;
 FUNC_2(VAR_9->ier, VAR_9->iobase1 + VAR_5);
 VAR_9->intr_running = 1;
 VAR_9->intr_cpuid = VAR_8;
 FUNC_7(&VAR_9->isr_spinlock, VAR_16);
 if ((VAR_13 & VAR_7) != 0) {
  VAR_15 = VAR_14->write_subdev;
  FUNC_5(VAR_14, VAR_15);
  FUNC_0(VAR_14, VAR_15);
 }

 if ((VAR_13 & VAR_2) != 0) {
  VAR_15 = VAR_14->write_subdev;
  FUNC_4(VAR_14, VAR_15);
  FUNC_0(VAR_14, VAR_15);
 }

 if ((VAR_13 & VAR_3) != 0) {
  VAR_15 = VAR_14->read_subdev;
  FUNC_3(VAR_14, VAR_15);
  FUNC_0(VAR_14, VAR_15);
 }


 FUNC_6(&VAR_9->isr_spinlock, VAR_16);
 if (VAR_9->ier != VAR_9->int_en) {
  VAR_9->ier = VAR_9->int_en;
  FUNC_2(VAR_9->ier, VAR_9->iobase1 + VAR_5);
 }
 VAR_9->intr_running = 0;
 FUNC_7(&VAR_9->isr_spinlock, VAR_16);

 return VAR_0;
}
