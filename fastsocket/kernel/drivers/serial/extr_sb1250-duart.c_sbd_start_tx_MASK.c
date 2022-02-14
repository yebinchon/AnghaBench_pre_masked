
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int line; } ;
struct sbd_port {scalar_t__ tx_stopped; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct sbd_port*,int ) ;
 struct sbd_port* FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct sbd_port*,int ,int ) ;
 int FUNC_4 (struct sbd_port*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_3)
{
 struct sbd_port *VAR_4 = FUNC_2(VAR_3);
 unsigned int VAR_5;


 VAR_5 = FUNC_1(VAR_4, FUNC_0((VAR_3->line) % 2));
 VAR_5 |= VAR_0;
 FUNC_4(VAR_4, FUNC_0((VAR_3->line) % 2), VAR_5);


 FUNC_3(VAR_4, VAR_2, VAR_1);
 VAR_4->tx_stopped = 0;
}
