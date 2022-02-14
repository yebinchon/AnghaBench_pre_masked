
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wf_sensor {int ref; TYPE_1__* ops; } ;
struct module {int dummy; } ;
struct TYPE_2__ {struct module* owner; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct module*) ;
 int VAR_0 ;

void FUNC_2(struct wf_sensor *VAR_1)
{
 struct module *VAR_2 = VAR_1->ops->owner;
 FUNC_0(&VAR_1->ref, VAR_0);
 FUNC_1(VAR_2);
}
