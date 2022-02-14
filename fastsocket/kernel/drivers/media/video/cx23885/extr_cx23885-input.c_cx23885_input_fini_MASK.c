
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cx23885_dev {TYPE_1__* kernel_ir; } ;
struct TYPE_2__ {struct TYPE_2__* name; struct TYPE_2__* phys; int rc; } ;


 int FUNC_0 (struct cx23885_dev*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct cx23885_dev *VAR_0)
{

 FUNC_0(VAR_0);

 if (VAR_0->kernel_ir == ((void*)0))
  return;
 FUNC_2(VAR_0->kernel_ir->rc);
 FUNC_1(VAR_0->kernel_ir->phys);
 FUNC_1(VAR_0->kernel_ir->name);
 FUNC_1(VAR_0->kernel_ir);
 VAR_0->kernel_ir = ((void*)0);
}
