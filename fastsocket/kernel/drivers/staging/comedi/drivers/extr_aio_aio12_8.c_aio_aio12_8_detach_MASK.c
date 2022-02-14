
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; int * subdevices; } ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct comedi_device*,int *) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_0)
{
 FUNC_1(VAR_0, &VAR_0->subdevices[2]);
 if (VAR_0->iobase)
  FUNC_0(VAR_0->iobase, 24);
 return 0;
}
