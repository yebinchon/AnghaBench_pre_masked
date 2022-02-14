
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct uart_port*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct uart_port*,int) ;
 int FUNC_2 (int ,int ,int ,char*,struct uart_port*) ;
 int FUNC_3 (struct uart_port*,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct uart_port*,int ) ;

__attribute__((used)) static int FUNC_6(struct uart_port *VAR_10)
{
 int VAR_11;

 FUNC_4(VAR_6, VAR_2 | VAR_1);
 FUNC_5(VAR_10, 0);
 FUNC_3(VAR_10, 1);
 FUNC_1(VAR_10, 1);




 VAR_11 = FUNC_2(VAR_6, VAR_9, VAR_0, "UART TX", VAR_10);
 if (VAR_11)
  goto err_tx;

 VAR_11 = FUNC_2(VAR_5, VAR_8, VAR_0, "UART RX", VAR_10);
 if (VAR_11)
  goto err_rx;

 VAR_11 = FUNC_2(VAR_3, VAR_8, VAR_0, "UART LineStatus", VAR_10);
 if (VAR_11)
  goto err_ls;

 VAR_11 = FUNC_2(VAR_4, VAR_7, VAR_0, "UART ModemStatus", VAR_10);
 if (VAR_11)
  goto err_ms;

 return 0;

err_ms:
 FUNC_0(VAR_3, VAR_10);
err_ls:
 FUNC_0(VAR_5, VAR_10);
err_rx:
 FUNC_0(VAR_6, VAR_10);
err_tx:
 return VAR_11;
}
