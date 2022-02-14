
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio200_subdev_intr {int iobase; scalar_t__ has_int_sce; scalar_t__ enabled_isns; scalar_t__ active; } ;
struct comedi_subdevice {struct dio200_subdev_intr* private; } ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_0,
        struct comedi_subdevice *VAR_1)
{
 struct dio200_subdev_intr *VAR_2 = VAR_1->private;

 VAR_2->active = 0;
 VAR_2->enabled_isns = 0;
 if (VAR_2->has_int_sce) {
  FUNC_0(0, VAR_2->iobase);
 }
}
