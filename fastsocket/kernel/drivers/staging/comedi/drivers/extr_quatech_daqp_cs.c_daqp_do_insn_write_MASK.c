
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct local_info_t {scalar_t__ stop; } ;
struct comedi_subdevice {scalar_t__ private; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_2,
         struct comedi_subdevice *VAR_3,
         struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 struct local_info_t *VAR_6 = (struct local_info_t *)VAR_3->private;

 if (VAR_6->stop) {
  return -VAR_1;
 }

 FUNC_0(VAR_5[0] & 0xf, VAR_2->iobase + VAR_0);

 return 1;
}
