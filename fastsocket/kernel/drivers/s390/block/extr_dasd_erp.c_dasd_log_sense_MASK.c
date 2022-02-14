
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irb {int dummy; } ;
struct dasd_device {TYPE_1__* discipline; } ;
struct dasd_ccw_req {struct dasd_device* startdev; } ;
struct TYPE_2__ {int (* dump_sense ) (struct dasd_device*,struct dasd_ccw_req*,struct irb*) ;} ;


 int FUNC_0 (struct dasd_device*,struct dasd_ccw_req*,struct irb*) ;

void
FUNC_1(struct dasd_ccw_req *VAR_0, struct irb *VAR_1)
{
 struct dasd_device *VAR_2;

 VAR_2 = VAR_0->startdev;

 if (VAR_2->discipline && VAR_2->discipline->dump_sense)
  VAR_2->discipline->dump_sense(VAR_2, VAR_0, VAR_1);
}
