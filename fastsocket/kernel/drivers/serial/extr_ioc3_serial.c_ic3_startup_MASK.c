
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;
struct ioc3_port {struct uart_port* ip_port; struct ioc3_card* ip_card; } ;
struct ioc3_card {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct ioc3_port* FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct uart_port *VAR_1)
{
 int VAR_2;
 struct ioc3_port *VAR_3;
 struct ioc3_card *VAR_4;
 unsigned long VAR_5;

 if (!VAR_1) {
  FUNC_0();
  return -VAR_0;
 }
 VAR_3 = FUNC_1(VAR_1);
 if (!VAR_3) {
  FUNC_0();
  return -VAR_0;
 }
 VAR_4 = VAR_3->ip_card;
 VAR_3->ip_port = VAR_1;

 if (!VAR_4) {
  FUNC_0();
  return -VAR_0;
 }


 FUNC_3(&VAR_1->lock, VAR_5);
 VAR_2 = FUNC_2(VAR_1);
 FUNC_4(&VAR_1->lock, VAR_5);
 return VAR_2;
}
