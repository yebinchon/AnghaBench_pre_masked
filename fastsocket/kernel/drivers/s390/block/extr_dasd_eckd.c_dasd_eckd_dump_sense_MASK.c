
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irb {int scsw; } ;
struct dasd_device {int dummy; } ;
struct dasd_ccw_req {int dummy; } ;


 int FUNC_0 (struct dasd_device*,struct dasd_ccw_req*,struct irb*) ;
 int FUNC_1 (struct dasd_device*,struct dasd_ccw_req*,struct irb*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct dasd_device *VAR_0,
     struct dasd_ccw_req *VAR_1, struct irb *VAR_2)
{
 if (FUNC_2(&VAR_2->scsw))
  FUNC_1(VAR_0, VAR_1, VAR_2);
 else
  FUNC_0(VAR_0, VAR_1, VAR_2);
}
