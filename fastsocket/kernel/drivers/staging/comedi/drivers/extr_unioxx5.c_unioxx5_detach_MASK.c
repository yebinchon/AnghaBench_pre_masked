
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unioxx5_subd_priv {int usp_iobase; } ;
struct comedi_subdevice {struct unioxx5_subd_priv* private; } ;
struct comedi_device {int n_subdevices; struct comedi_subdevice* subdevices; } ;


 int VAR_0 ;
 int FUNC_0 (struct unioxx5_subd_priv*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1)
{
 int VAR_2;
 struct comedi_subdevice *VAR_3;
 struct unioxx5_subd_priv *VAR_4;

 for (VAR_2 = 0; VAR_2 < VAR_1->n_subdevices; VAR_2++) {
  VAR_3 = &VAR_1->subdevices[VAR_2];
  VAR_4 = VAR_3->private;
  FUNC_1(VAR_4->usp_iobase, VAR_0);
  FUNC_0(VAR_3->private);
 }

 return 0;
}
