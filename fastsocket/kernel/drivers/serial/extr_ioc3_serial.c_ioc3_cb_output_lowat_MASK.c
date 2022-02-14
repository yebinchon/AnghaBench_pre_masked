
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ioc3_port {TYPE_1__* ip_port; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct ioc3_port *VAR_0)
{
 unsigned long VAR_1;


 if (VAR_0->ip_port) {
  FUNC_0(&VAR_0->ip_port->lock, VAR_1);
  FUNC_2(VAR_0->ip_port);
  FUNC_1(&VAR_0->ip_port->lock, VAR_1);
 }
}
