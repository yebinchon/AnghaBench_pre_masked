
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {TYPE_1__* driver; } ;
struct TYPE_2__ {char const* driver_name; } ;



const char *FUNC_0(void *VAR_0)
{
 struct comedi_device *VAR_1 = (struct comedi_device *)VAR_0;

 return VAR_1->driver->driver_name;
}
