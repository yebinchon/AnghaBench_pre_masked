
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; scalar_t__ state; } ;
struct imx_port {int timer; TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct imx_port*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_2)
{
 struct imx_port *VAR_3 = (struct imx_port *)VAR_2;
 unsigned long VAR_4;

 if (VAR_3->port.state) {
  FUNC_2(&VAR_3->port.lock, VAR_4);
  FUNC_0(VAR_3);
  FUNC_3(&VAR_3->port.lock, VAR_4);

  FUNC_1(&VAR_3->timer, VAR_1 + VAR_0);
 }
}
