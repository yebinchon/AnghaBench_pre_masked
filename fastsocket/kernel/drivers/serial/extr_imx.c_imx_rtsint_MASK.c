
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int lock; TYPE_2__* state; scalar_t__ membase; } ;
struct imx_port {TYPE_3__ port; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int delta_msr_wait; } ;
struct TYPE_5__ {TYPE_1__ port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_4, void *VAR_5)
{
 struct imx_port *VAR_6 = VAR_5;
 unsigned int VAR_7 = FUNC_0(VAR_6->port.membase + VAR_1) & VAR_3;
 unsigned long VAR_8;

 FUNC_1(&VAR_6->port.lock, VAR_8);

 FUNC_5(VAR_2, VAR_6->port.membase + VAR_1);
 FUNC_3(&VAR_6->port, !!VAR_7);
 FUNC_4(&VAR_6->port.state->port.delta_msr_wait);

 FUNC_2(&VAR_6->port.lock, VAR_8);
 return VAR_0;
}
