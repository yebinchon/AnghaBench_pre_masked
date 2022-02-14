
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {scalar_t__ intr_cpuid; int daccon; int ao_spinlock; scalar_t__ intr_running; scalar_t__ iobase1; scalar_t__ intsce; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_11,
      struct comedi_subdevice *VAR_12)
{
 unsigned long VAR_13;

 if (!FUNC_5(VAR_0, &VAR_10->state)) {
  return;
 }

 FUNC_3(&VAR_10->ao_spinlock, VAR_13);

 VAR_10->intsce = 0;
 FUNC_1(0, VAR_10->iobase1 + VAR_8);
 while (VAR_10->intr_running && VAR_10->intr_cpuid != VAR_9) {
  FUNC_4(&VAR_10->ao_spinlock, VAR_13);
  FUNC_3(&VAR_10->ao_spinlock, VAR_13);
 }
 FUNC_4(&VAR_10->ao_spinlock, VAR_13);

 FUNC_2(0, VAR_11->iobase + VAR_1);
 VAR_10->daccon = FUNC_0(VAR_10->daccon,
      VAR_7 |
      VAR_3,
      VAR_6 |
      VAR_4);
 FUNC_2(VAR_10->daccon | VAR_5,
      VAR_11->iobase + VAR_2);
}
