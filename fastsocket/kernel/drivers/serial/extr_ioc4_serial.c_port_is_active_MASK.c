
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct ioc4_port {int ip_flags; struct uart_port* ip_port; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct ioc4_port *VAR_1,
  struct uart_port *VAR_2)
{
 if (VAR_1) {
  if ((VAR_1->ip_flags & VAR_0)
     && (VAR_1->ip_port == VAR_2))
   return 1;
 }
 return 0;
}
