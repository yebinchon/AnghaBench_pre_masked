
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct comedi_cmd {scalar_t__ convert_src; scalar_t__ scan_begin_src; } ;
struct TYPE_4__ {scalar_t__ intr_cpuid; int adccon; int isr_spinlock; scalar_t__ iobase1; int ier; int int_en; scalar_t__ intr_running; int ai_stop_spinlock; int state; } ;
struct TYPE_3__ {struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_2__* VAR_12 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct comedi_device*,int) ;
 int FUNC_3 (struct comedi_device*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct comedi_device *VAR_13,
      struct comedi_subdevice *VAR_14)
{
 unsigned long VAR_15;
 struct comedi_cmd *VAR_16;
 int VAR_17;

 FUNC_4(&VAR_12->ai_stop_spinlock, VAR_15);
 VAR_17 = FUNC_6(VAR_0, &VAR_12->state);
 FUNC_5(&VAR_12->ai_stop_spinlock, VAR_15);
 if (!VAR_17) {
  return;
 }

 VAR_16 = &VAR_14->async->cmd;
 if (VAR_16->convert_src == VAR_11) {

  FUNC_2(VAR_13, 2);
 }
 if (VAR_16->scan_begin_src != VAR_10) {

  FUNC_2(VAR_13, 0);
 }

 FUNC_4(&VAR_12->isr_spinlock, VAR_15);


 VAR_12->int_en &= ~VAR_7;
 while (VAR_12->intr_running && VAR_12->intr_cpuid != VAR_9) {
  FUNC_5(&VAR_12->isr_spinlock, VAR_15);
  FUNC_4(&VAR_12->isr_spinlock, VAR_15);
 }
 if (VAR_12->ier != VAR_12->int_en) {
  VAR_12->ier = VAR_12->int_en;
  FUNC_0(VAR_12->ier, VAR_12->iobase1 + VAR_8);
 }
 FUNC_5(&VAR_12->isr_spinlock, VAR_15);



 VAR_12->adccon = (VAR_12->adccon & (VAR_5
           | VAR_4)) |
     VAR_6;
 FUNC_1(VAR_12->adccon | VAR_3,
      VAR_13->iobase + VAR_2);


 FUNC_3(VAR_13, VAR_1);
}
