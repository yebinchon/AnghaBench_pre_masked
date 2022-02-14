
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* f; int state; } ;
typedef TYPE_2__ fsm_instance ;
struct TYPE_4__ {int nr_states; char const** state_names; } ;


 int FUNC_0 (int *) ;

const char *
FUNC_1(fsm_instance *VAR_0)
{
 int VAR_1 = FUNC_0(&VAR_0->state);
 if (VAR_1 >= VAR_0->f->nr_states)
  return "Invalid";
 return VAR_0->f->state_names[VAR_1];
}
