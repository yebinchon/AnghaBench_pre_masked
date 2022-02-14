
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ irq; scalar_t__ iobase; int minor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,struct comedi_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_2)
{


 FUNC_2("comedi%d: c6xdigio: remove\n", VAR_2->minor);

 if (VAR_2->iobase) {
  FUNC_3(VAR_2->iobase, VAR_0);
 }
 if (VAR_2->irq) {
  FUNC_0(VAR_2->irq, VAR_2);
 }
 FUNC_1(&VAR_1);

 return 0;
}
