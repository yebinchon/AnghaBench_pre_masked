
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int spinlock; } ;
struct TYPE_2__ {int adc_fifo_bits; int ao_control_bits; scalar_t__ control_status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_7,
          struct comedi_subdevice *VAR_8)
{
 unsigned long VAR_9;

 FUNC_1(&VAR_7->spinlock, VAR_9);

 VAR_6->adc_fifo_bits &= ~VAR_4 & ~VAR_3;
 FUNC_0(VAR_6->adc_fifo_bits, VAR_6->control_status + VAR_5);


 VAR_6->ao_control_bits &= ~VAR_0 & ~VAR_2;
 FUNC_0(VAR_6->ao_control_bits, VAR_6->control_status + VAR_1);
 FUNC_2(&VAR_7->spinlock, VAR_9);

 return 0;
}
