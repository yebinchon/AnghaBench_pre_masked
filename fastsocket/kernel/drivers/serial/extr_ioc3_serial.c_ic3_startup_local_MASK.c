
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int line; } ;
struct ioc3_port {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 struct ioc3_port* FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct ioc3_port*,int ) ;
 int FUNC_4 (struct ioc3_port*) ;

__attribute__((used)) static inline int FUNC_5(struct uart_port *VAR_2)
{
 struct ioc3_port *VAR_3;

 if (!VAR_2) {
  FUNC_1();
  return -1;
 }

 VAR_3 = FUNC_2(VAR_2);
 if (!VAR_3) {
  FUNC_1();
  return -1;
 }

 FUNC_4(VAR_3);


 FUNC_3(VAR_3, FUNC_0(VAR_2->line) ? VAR_0 :
       VAR_1);
 return 0;
}
