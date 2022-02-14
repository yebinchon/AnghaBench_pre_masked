
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {scalar_t__ type; } ;
struct comedi_device {int n_subdevices; struct comedi_subdevice* subdevices; int minor; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;
 struct comedi_subdevice *VAR_6;

 FUNC_0("comedi%d: 8255: remove\n", VAR_3->minor);

 for (VAR_4 = 0; VAR_4 < VAR_3->n_subdevices; VAR_4++) {
  VAR_6 = VAR_3->subdevices + VAR_4;
  if (VAR_6->type != VAR_1) {
   VAR_5 = VAR_0;
   FUNC_1(VAR_5, VAR_2);
  }
  FUNC_2(VAR_3, VAR_6);
 }

 return 0;
}
