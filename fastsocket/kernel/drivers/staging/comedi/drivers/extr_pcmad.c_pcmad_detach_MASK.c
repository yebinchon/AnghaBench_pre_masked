
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; scalar_t__ irq; int minor; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,struct comedi_device*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1)
{
 FUNC_1("comedi%d: pcmad: remove\n", VAR_1->minor);

 if (VAR_1->irq) {
  FUNC_0(VAR_1->irq, VAR_1);
 }
 if (VAR_1->iobase)
  FUNC_2(VAR_1->iobase, VAR_0);

 return 0;
}
