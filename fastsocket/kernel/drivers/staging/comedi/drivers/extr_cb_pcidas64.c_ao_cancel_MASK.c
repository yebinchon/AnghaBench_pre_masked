
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ main_iobase; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct comedi_device*,int ) ;
 TYPE_1__* FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1, struct comedi_subdevice *VAR_2)
{
 FUNC_2(0x0, FUNC_1(VAR_1)->main_iobase + VAR_0);
 FUNC_0(VAR_1, 0);
 return 0;
}
