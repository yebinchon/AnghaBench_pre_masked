
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_subdevice* async; } ;
struct comedi_device {int n_subdevices; int * close; int * open; int * write_subdev; int * read_subdev; scalar_t__ irq; scalar_t__ iobase; int * board_ptr; int * board_name; scalar_t__ driver; struct comedi_subdevice* private; struct comedi_subdevice* subdevices; } ;


 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,int ) ;
 int FUNC_1 (struct comedi_subdevice*) ;
 int FUNC_2 (struct comedi_device*,int *) ;
 int FUNC_3 (struct comedi_subdevice*) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_0)
{
 int VAR_1;
 struct comedi_subdevice *VAR_2;

 if (VAR_0->subdevices) {
  for (VAR_1 = 0; VAR_1 < VAR_0->n_subdevices; VAR_1++) {
   VAR_2 = VAR_0->subdevices + VAR_1;
   FUNC_1(VAR_2);
   if (VAR_2->async) {
    FUNC_0(VAR_0, VAR_2, 0);
    FUNC_3(VAR_2->async);
   }
  }
  FUNC_3(VAR_0->subdevices);
  VAR_0->subdevices = ((void*)0);
  VAR_0->n_subdevices = 0;
 }
 FUNC_3(VAR_0->private);
 VAR_0->private = ((void*)0);
 VAR_0->driver = 0;
 VAR_0->board_name = ((void*)0);
 VAR_0->board_ptr = ((void*)0);
 VAR_0->iobase = 0;
 VAR_0->irq = 0;
 VAR_0->read_subdev = ((void*)0);
 VAR_0->write_subdev = ((void*)0);
 VAR_0->open = ((void*)0);
 VAR_0->close = ((void*)0);
 FUNC_2(VAR_0, ((void*)0));
}
