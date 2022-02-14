
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct local_info_t {int interrupt_mode; scalar_t__ stop; } ;
struct comedi_subdevice {scalar_t__ private; } ;
struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_4, struct comedi_subdevice *VAR_5)
{
 struct local_info_t *VAR_6 = (struct local_info_t *)VAR_5->private;

 if (VAR_6->stop) {
  return -VAR_2;
 }

 FUNC_0(VAR_1, VAR_4->iobase + VAR_0);




 VAR_6->interrupt_mode = VAR_3;

 return 0;
}
