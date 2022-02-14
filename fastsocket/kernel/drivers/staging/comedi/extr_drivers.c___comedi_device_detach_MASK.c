
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {TYPE_1__* driver; scalar_t__ attached; } ;
struct TYPE_2__ {int (* detach ) (struct comedi_device*) ;} ;


 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct comedi_device*) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_0)
{
 VAR_0->attached = 0;
 if (VAR_0->driver) {
  VAR_0->driver->detach(VAR_0);
 } else {
  FUNC_1("BUG: dev->driver=NULL in comedi_device_detach()\n");
 }
 FUNC_0(VAR_0);
}
