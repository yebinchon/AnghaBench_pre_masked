
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int inttrig; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;

__attribute__((used)) static int
FUNC_1(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3,
   unsigned int VAR_4)
{
 if (VAR_4 != 0)
  return -VAR_0;

 VAR_3->async->inttrig = VAR_1;
 FUNC_0(VAR_2, VAR_3);

 return 1;
}
