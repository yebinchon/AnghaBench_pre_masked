
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int spinlock; } ;
struct TYPE_2__ {int adc_control1_bits; scalar_t__ main_iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct comedi_device*) ;
 TYPE_1__* FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_6)
{
 unsigned long VAR_7;

 FUNC_0(VAR_6);

 FUNC_2(&VAR_6->spinlock, VAR_7);
 FUNC_1(VAR_6)->adc_control1_bits &= ~VAR_5;
 FUNC_4(FUNC_1(VAR_6)->adc_control1_bits,
        FUNC_1(VAR_6)->main_iobase + VAR_1);
 FUNC_3(&VAR_6->spinlock, VAR_7);


 FUNC_4(VAR_2 | VAR_4 | VAR_3,
        FUNC_1(VAR_6)->main_iobase + VAR_0);
}
