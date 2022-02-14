
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct comedi_cmd {scalar_t__ scan_begin_src; } ;
struct TYPE_4__ {int hwver; unsigned char int_en; scalar_t__ intr_cpuid; unsigned char ier; int daccon; int isr_spinlock; scalar_t__ iobase1; scalar_t__ intr_running; int ao_stop_spinlock; int state; } ;
struct TYPE_3__ {struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned char VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_2__* VAR_11 ;
 int FUNC_0 (unsigned char,scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct comedi_device*,int) ;
 int FUNC_3 (struct comedi_device*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct comedi_device *VAR_12,
      struct comedi_subdevice *VAR_13)
{
 unsigned long VAR_14;
 unsigned char VAR_15;
 int VAR_16;
 struct comedi_cmd *VAR_17;

 FUNC_4(&VAR_11->ao_stop_spinlock, VAR_14);
 VAR_16 = FUNC_6(VAR_0, &VAR_11->state);
 FUNC_5(&VAR_11->ao_stop_spinlock, VAR_14);
 if (!VAR_16) {
  return;
 }

 VAR_17 = &VAR_13->async->cmd;
 if (VAR_17->scan_begin_src == VAR_10) {

  FUNC_2(VAR_12, 1);
 }


 if (VAR_11->hwver < 2) {

  VAR_15 = VAR_8;
 } else {

  VAR_15 = VAR_4;
 }


 FUNC_4(&VAR_11->isr_spinlock, VAR_14);
 VAR_11->int_en &= ~VAR_15;
 while (VAR_11->intr_running && VAR_11->intr_cpuid != VAR_9) {
  FUNC_5(&VAR_11->isr_spinlock, VAR_14);
  FUNC_4(&VAR_11->isr_spinlock, VAR_14);
 }
 if (VAR_11->ier != VAR_11->int_en) {
  VAR_11->ier = VAR_11->int_en;
  FUNC_0(VAR_11->ier, VAR_11->iobase1 + VAR_7);
 }
 FUNC_5(&VAR_11->isr_spinlock, VAR_14);

 if (VAR_11->hwver >= 2) {


  VAR_11->daccon &= VAR_6;
  FUNC_1(VAR_11->daccon | VAR_2
       | VAR_3,
       VAR_12->iobase + VAR_5);
 }


 FUNC_3(VAR_12, VAR_1);
}
