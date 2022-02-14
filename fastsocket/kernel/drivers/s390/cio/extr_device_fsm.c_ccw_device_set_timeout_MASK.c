
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ccw_device {TYPE_1__* private; } ;
struct TYPE_7__ {unsigned long data; scalar_t__ expires; int function; } ;
struct TYPE_6__ {TYPE_2__ timer; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

void
FUNC_4(struct ccw_device *VAR_2, int VAR_3)
{
 if (VAR_3 == 0) {
  FUNC_1(&VAR_2->private->timer);
  return;
 }
 if (FUNC_3(&VAR_2->private->timer)) {
  if (FUNC_2(&VAR_2->private->timer, VAR_1 + VAR_3))
   return;
 }
 VAR_2->private->timer.function = VAR_0;
 VAR_2->private->timer.data = (unsigned long) VAR_2;
 VAR_2->private->timer.expires = VAR_1 + VAR_3;
 FUNC_0(&VAR_2->private->timer);
}
