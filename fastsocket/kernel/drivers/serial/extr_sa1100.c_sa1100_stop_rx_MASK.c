
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int dummy; } ;
struct sa1100_port {int dummy; } ;


 int FUNC_0 (struct sa1100_port*) ;
 int FUNC_1 (struct sa1100_port*,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_1)
{
 struct sa1100_port *VAR_2 = (struct sa1100_port *)VAR_1;
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 FUNC_1(VAR_2, VAR_3 & ~VAR_0);
}
