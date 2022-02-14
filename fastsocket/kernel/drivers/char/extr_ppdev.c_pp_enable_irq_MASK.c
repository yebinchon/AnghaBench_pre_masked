
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pp_struct {TYPE_1__* pdev; } ;
struct parport {TYPE_2__* ops; } ;
struct TYPE_4__ {int (* enable_irq ) (struct parport*) ;} ;
struct TYPE_3__ {struct parport* port; } ;


 int FUNC_0 (struct parport*) ;

__attribute__((used)) static inline void FUNC_1 (struct pp_struct *VAR_0)
{
 struct parport *VAR_1 = VAR_0->pdev->port;
 VAR_1->ops->enable_irq (VAR_1);
}
