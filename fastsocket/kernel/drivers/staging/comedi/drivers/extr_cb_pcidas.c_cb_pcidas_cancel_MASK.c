
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int spinlock; } ;
struct TYPE_2__ {int adc_fifo_bits; scalar_t__ control_status; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_6,
       struct comedi_subdevice *VAR_7)
{
 unsigned long VAR_8;

 FUNC_1(&VAR_6->spinlock, VAR_8);

 VAR_5->adc_fifo_bits &= ~VAR_2 & ~VAR_1;
 FUNC_0(VAR_5->adc_fifo_bits, VAR_5->control_status + VAR_3);
 FUNC_2(&VAR_6->spinlock, VAR_8);


 FUNC_0(0, VAR_5->control_status + VAR_4);

 FUNC_0(0, VAR_5->control_status + VAR_0);

 return 0;
}
