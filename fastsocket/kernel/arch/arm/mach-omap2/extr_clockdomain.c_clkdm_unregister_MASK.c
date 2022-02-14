
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ptr; } ;
struct clockdomain {int name; int node; TYPE_1__ pwrdm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,struct clockdomain*) ;

int FUNC_5(struct clockdomain *VAR_2)
{
 if (!VAR_2)
  return -VAR_0;

 FUNC_4(VAR_2->pwrdm.ptr, VAR_2);

 FUNC_1(&VAR_1);
 FUNC_0(&VAR_2->node);
 FUNC_2(&VAR_1);

 FUNC_3("clockdomain: unregistered %s\n", VAR_2->name);

 return 0;
}
