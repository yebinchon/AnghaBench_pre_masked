
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; } ;
struct max3100_port {scalar_t__ poll_time; int timer; TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct max3100_port*) ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_1)
{
 struct max3100_port *VAR_2 = (struct max3100_port *)VAR_1;

 if (VAR_2->port.state) {
  FUNC_0(VAR_2);
  FUNC_1(&VAR_2->timer, VAR_0 + VAR_2->poll_time);
 }
}
