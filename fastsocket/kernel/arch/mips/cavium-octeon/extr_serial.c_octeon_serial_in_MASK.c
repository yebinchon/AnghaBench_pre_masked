
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct uart_port {scalar_t__ membase; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

unsigned int FUNC_1(struct uart_port *VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_0((uint64_t)(VAR_1->membase + (VAR_2 << 3)));
 if (VAR_2 == VAR_0 && (VAR_3 & 0xf) == 7) {

  FUNC_0((uint64_t)(VAR_1->membase + (39 << 3)));
  VAR_3 = FUNC_0((uint64_t)(VAR_1->membase + (VAR_2 << 3)));
 }
 return VAR_3;
}
