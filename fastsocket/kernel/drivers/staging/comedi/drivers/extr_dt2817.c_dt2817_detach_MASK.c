
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; int minor; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1)
{
 FUNC_0("comedi%d: dt2817: remove\n", VAR_1->minor);

 if (VAR_1->iobase)
  FUNC_1(VAR_1->iobase, VAR_0);

 return 0;
}
