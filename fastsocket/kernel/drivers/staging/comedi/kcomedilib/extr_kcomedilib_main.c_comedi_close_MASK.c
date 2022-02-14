
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {TYPE_1__* driver; } ;
struct TYPE_2__ {int module; } ;


 int FUNC_0 (int ) ;

int FUNC_1(void *VAR_0)
{
 struct comedi_device *VAR_1 = (struct comedi_device *)VAR_0;

 FUNC_0(VAR_1->driver->module);

 return 0;
}
