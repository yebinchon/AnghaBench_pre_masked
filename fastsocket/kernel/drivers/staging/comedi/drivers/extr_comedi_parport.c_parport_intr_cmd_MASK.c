
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int c_data; int enable_irq; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_2,
       struct comedi_subdevice *VAR_3)
{
 VAR_1->c_data |= 0x10;
 FUNC_0(VAR_1->c_data, VAR_2->iobase + VAR_0);

 VAR_1->enable_irq = 1;

 return 0;
}
