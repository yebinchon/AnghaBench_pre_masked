
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ iobase; scalar_t__ b_DigitalOutputRegister; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (int,scalar_t__) ;
 scalar_t__ VAR_6 ;

int FUNC_1(struct comedi_device *VAR_7)
{
 VAR_5->b_DigitalOutputRegister = 0;
 VAR_6 = 0;
 FUNC_0(0x0, VAR_5->iobase + VAR_0);
 FUNC_0(0x0, VAR_5->iobase + VAR_1);
 FUNC_0(0x0, VAR_5->iobase + VAR_2 + VAR_3);
 FUNC_0(0x0, VAR_5->iobase + VAR_2 + VAR_4);
 return 0;
}
