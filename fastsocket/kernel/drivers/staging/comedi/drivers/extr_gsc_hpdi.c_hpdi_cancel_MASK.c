
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ hpdi_iobase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct comedi_device*,int ) ;
 int FUNC_1 (struct comedi_device*,int ,int ) ;
 TYPE_1__* FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3)
{
 FUNC_1(VAR_2, 0, VAR_0);

 FUNC_3(0, FUNC_2(VAR_2)->hpdi_iobase + VAR_1);

 FUNC_0(VAR_2, 0);

 return 0;
}
