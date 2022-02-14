
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int das6402_ignoreirq; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2,
        struct comedi_subdevice *VAR_3)
{





 VAR_1->das6402_ignoreirq = 1;



 VAR_1->das6402_ignoreirq = 1;
 FUNC_0(0x02, VAR_2->iobase + 10);
 FUNC_1(VAR_0, VAR_2->iobase + 2);
 FUNC_0(0, VAR_2->iobase + 9);

 FUNC_1(VAR_0, VAR_2->iobase + 2);

 return 0;
}
