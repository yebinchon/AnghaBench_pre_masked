
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_state {int dummy; } ;
struct uart_port {int lock; struct uart_state* state; } ;
struct ioc4_port {int * ip_port; struct ioc4_control* ip_control; } ;
struct ioc4_control {int dummy; } ;


 int VAR_0 ;
 struct ioc4_port* FUNC_0 (struct uart_port*,int) ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct uart_port *VAR_1)
{
 int VAR_2;
 struct ioc4_port *VAR_3;
 struct ioc4_control *VAR_4;
 struct uart_state *VAR_5;
 unsigned long VAR_6;

 if (!VAR_1)
  return -VAR_0;
 VAR_3 = FUNC_0(VAR_1, 1);
 if (!VAR_3)
  return -VAR_0;
 VAR_5 = VAR_1->state;

 VAR_4 = VAR_3->ip_control;
 if (!VAR_4) {
  VAR_3->ip_port = ((void*)0);
  return -VAR_0;
 }


 FUNC_2(&VAR_1->lock, VAR_6);
 VAR_2 = FUNC_1(VAR_1);
 FUNC_3(&VAR_1->lock, VAR_6);
 return VAR_2;
}
