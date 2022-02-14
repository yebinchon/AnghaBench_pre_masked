
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int (* cancel ) (struct comedi_device*,struct comedi_subdevice*) ;} ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1, struct comedi_subdevice *VAR_2)
{
 int VAR_3 = 0;

 if ((FUNC_0(VAR_2) & VAR_0) && VAR_2->cancel)
  VAR_3 = VAR_2->cancel(VAR_1, VAR_2);

 FUNC_1(VAR_1, VAR_2);

 return VAR_3;
}
