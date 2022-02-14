
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {int inactive_list; scalar_t__ quiesce; scalar_t__ inactive_blocked; } ;
struct mddev {struct r5conf* private; } ;


 scalar_t__ FUNC_0 (int *) ;

int FUNC_1(struct mddev *VAR_0, int VAR_1)
{
 struct r5conf *VAR_2 = VAR_0->private;





 if (VAR_2->inactive_blocked)
  return 1;
 if (VAR_2->quiesce)
  return 1;
 if (FUNC_0(&VAR_2->inactive_list))
  return 1;

 return 0;
}
