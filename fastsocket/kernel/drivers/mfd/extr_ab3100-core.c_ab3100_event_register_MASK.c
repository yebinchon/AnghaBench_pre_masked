
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct ab3100 {int event_subscribers; } ;


 int FUNC_0 (int *,struct notifier_block*) ;

int FUNC_1(struct ab3100 *VAR_0,
     struct notifier_block *VAR_1)
{
 return FUNC_0(&VAR_0->event_subscribers,
            VAR_1);
}
