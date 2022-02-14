
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_pmac_port {int port_type; int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct uart_pmac_port*) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct uart_pmac_port *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;

 if (VAR_3) {
  VAR_5 = FUNC_1(
   VAR_1, VAR_2->node, VAR_2->port_type, 1);
  FUNC_2("port power on result: %d\n", VAR_5);
  if (FUNC_0(VAR_2)) {
   VAR_5 = FUNC_1(
    VAR_0, VAR_2->node, 0, 1);
   VAR_4 = 2500;
   FUNC_2("modem power result: %d\n", VAR_5);
  }
 } else {



  if (FUNC_0(VAR_2)) {
   VAR_5 = FUNC_1(
    VAR_0, VAR_2->node, 0, 0);
   FUNC_2("port power off result: %d\n", VAR_5);
  }
  FUNC_1(VAR_1, VAR_2->node, VAR_2->port_type, 0);
 }
 return VAR_4;
}
