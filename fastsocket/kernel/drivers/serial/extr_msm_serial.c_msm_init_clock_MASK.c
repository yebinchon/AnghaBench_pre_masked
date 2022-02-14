
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct msm_port {int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct msm_port* FUNC_0 (struct uart_port*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct uart_port*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_4)
{
 struct msm_port *VAR_5 = FUNC_0(VAR_4);

 FUNC_1(VAR_5->clk);

 FUNC_2(VAR_4, 0xC0, VAR_2);
 FUNC_2(VAR_4, 0xB2, VAR_3);
 FUNC_2(VAR_4, 0x7D, VAR_0);
 FUNC_2(VAR_4, 0x1C, VAR_1);
}
