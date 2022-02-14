
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int dummy; } ;
struct pnx8xxx_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pnx8xxx_port*,int ) ;
 int FUNC_1 (struct pnx8xxx_port*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_3)
{
 struct pnx8xxx_port *VAR_4 = (struct pnx8xxx_port *)VAR_3;
 u32 VAR_5;


 FUNC_1(VAR_4, VAR_0, VAR_2);


 VAR_5 = FUNC_0(VAR_4, VAR_1);
 FUNC_1(VAR_4, VAR_1, VAR_5 | VAR_2);
}
