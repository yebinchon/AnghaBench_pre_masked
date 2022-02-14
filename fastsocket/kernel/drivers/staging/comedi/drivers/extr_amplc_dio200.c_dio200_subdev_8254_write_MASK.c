
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio200_subdev_8254 {int iobase; } ;
struct comedi_subdevice {struct dio200_subdev_8254* private; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,unsigned int) ;

__attribute__((used)) static int
FUNC_2(struct comedi_device *VAR_0, struct comedi_subdevice *VAR_1,
    struct comedi_insn *VAR_2, unsigned int *VAR_3)
{
 struct dio200_subdev_8254 *VAR_4 = VAR_1->private;
 int VAR_5 = FUNC_0(VAR_2->chanspec);

 FUNC_1(VAR_4->iobase, 0, VAR_5, VAR_3[0]);

 return 1;
}
