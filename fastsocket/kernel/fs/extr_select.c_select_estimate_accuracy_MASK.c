
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct TYPE_3__ {unsigned long timer_slack_ns; } ;


 unsigned long FUNC_0 (struct timespec*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct timespec*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 struct timespec FUNC_3 (struct timespec,struct timespec) ;

long FUNC_4(struct timespec *VAR_1)
{
 unsigned long VAR_2;
 struct timespec VAR_3;





 if (FUNC_2(VAR_0))
  return 0;

 FUNC_1(&VAR_3);
 VAR_3 = FUNC_3(*VAR_1, VAR_3);
 VAR_2 = FUNC_0(&VAR_3);
 if (VAR_2 < VAR_0->timer_slack_ns)
  return VAR_0->timer_slack_ns;
 return VAR_2;
}
