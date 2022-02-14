
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipath_devdata {TYPE_1__* verbs_dev; } ;
struct TYPE_4__ {int port_num; } ;
struct ib_event {int event; TYPE_2__ element; int * device; } ;
typedef enum ib_event_type { ____Placeholder_ib_event_type } ib_event_type ;
struct TYPE_3__ {int ibdev; } ;


 int FUNC_0 (struct ib_event*) ;

void FUNC_1(struct ipath_devdata *VAR_0, enum ib_event_type VAR_1)
{
 struct ib_event VAR_2;

 VAR_2.device = &VAR_0->verbs_dev->ibdev;
 VAR_2.element.port_num = 1;
 VAR_2.event = VAR_1;
 FUNC_0(&VAR_2);
}
