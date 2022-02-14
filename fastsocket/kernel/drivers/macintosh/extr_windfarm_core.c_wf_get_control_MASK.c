
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wf_control {int ref; TYPE_1__* ops; } ;
struct TYPE_2__ {int owner; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct wf_control *VAR_1)
{
 if (!FUNC_1(VAR_1->ops->owner))
  return -VAR_0;
 FUNC_0(&VAR_1->ref);
 return 0;
}
