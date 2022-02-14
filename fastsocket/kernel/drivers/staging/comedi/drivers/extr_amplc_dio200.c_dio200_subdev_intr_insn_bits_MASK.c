
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio200_subdev_intr {unsigned int valid_isns; int iobase; scalar_t__ has_int_sce; } ;
struct comedi_subdevice {struct dio200_subdev_intr* private; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {int dummy; } ;


 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct comedi_device *VAR_0,
        struct comedi_subdevice *VAR_1,
        struct comedi_insn *VAR_2, unsigned int *VAR_3)
{
 struct dio200_subdev_intr *VAR_4 = VAR_1->private;

 if (VAR_4->has_int_sce) {

  VAR_3[1] = FUNC_0(VAR_4->iobase) & VAR_4->valid_isns;
 } else {

  VAR_3[0] = 0;
 }

 return 2;
}
