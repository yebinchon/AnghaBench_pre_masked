
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int us_OutputRegister; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;

int FUNC_1(struct comedi_device *VAR_3)
{
 VAR_2->us_OutputRegister &= ~VAR_0;
 FUNC_0(VAR_2->us_OutputRegister, VAR_3->iobase + VAR_1);
 return 0;
}
