
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio200_subdev_intr {int dummy; } ;
struct comedi_subdevice {struct dio200_subdev_intr* private; } ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (struct dio200_subdev_intr*) ;

__attribute__((used)) static void
FUNC_1(struct comedi_device *VAR_0,
      struct comedi_subdevice *VAR_1)
{
 struct dio200_subdev_intr *VAR_2 = VAR_1->private;

 if (VAR_2) {
  FUNC_0(VAR_2);
 }
}
