
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cl_class; } ;
struct TYPE_4__ {TYPE_1__ mem_cons; int mem_kbd; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void)
{
 if (VAR_3)
  return;
 ++VAR_3;


 if (VAR_1->mem_cons.cl_class == VAR_0)
  FUNC_0(&VAR_1->mem_kbd, &VAR_1->mem_cons, sizeof(VAR_1->mem_cons));


 FUNC_1(&VAR_2);
}
