
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {TYPE_1__* driver; int minor; } ;
struct TYPE_2__ {int driver_name; } ;


 int FUNC_0 (char*,int ,int ,char const*) ;

void FUNC_1(const struct comedi_device *VAR_0, const char *VAR_1)
{
 FUNC_0("comedi%d: %s: %s\n", VAR_0->minor, VAR_0->driver->driver_name, VAR_1);
}
