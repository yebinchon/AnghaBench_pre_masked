
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccw_device {TYPE_1__* private; } ;
typedef enum dev_event { ____Placeholder_dev_event } dev_event ;
struct TYPE_2__ {int wait_q; int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct ccw_device*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct ccw_device *VAR_1, enum dev_event VAR_2)
{
 FUNC_0(VAR_1, 0);
 VAR_1->private->state = VAR_0;
 FUNC_1(&VAR_1->private->wait_q);
}
