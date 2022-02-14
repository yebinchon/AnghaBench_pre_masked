
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_8250_port {int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct uart_8250_port*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct uart_8250_port *VAR_7, int VAR_8)
{
 if (VAR_7->capabilities & VAR_1) {
  if (VAR_7->capabilities & VAR_0) {
   FUNC_0(VAR_7, VAR_6, 0xBF);
   FUNC_0(VAR_7, VAR_2, VAR_3);
   FUNC_0(VAR_7, VAR_6, 0);
  }
  FUNC_0(VAR_7, VAR_4, VAR_8 ? VAR_5 : 0);
  if (VAR_7->capabilities & VAR_0) {
   FUNC_0(VAR_7, VAR_6, 0xBF);
   FUNC_0(VAR_7, VAR_2, 0);
   FUNC_0(VAR_7, VAR_6, 0);
  }
 }
}
