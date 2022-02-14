
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct msm_port {int imr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct msm_port* FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_3)
{
 struct msm_port *VAR_4 = FUNC_0(VAR_3);

 VAR_4->imr &= ~(VAR_1 | VAR_2);
 FUNC_1(VAR_3, VAR_4->imr, VAR_0);
}
