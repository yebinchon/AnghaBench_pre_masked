
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int read_subdev; scalar_t__ private; int minor; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct comedi_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_0)
{
 FUNC_0("comedi%d: comedi_test: remove\n", VAR_0->minor);

 if (VAR_0->private)
  FUNC_1(VAR_0, VAR_0->read_subdev);

 return 0;
}
