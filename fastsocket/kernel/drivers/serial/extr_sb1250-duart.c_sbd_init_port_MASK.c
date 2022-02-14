
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int line; } ;
struct sbd_port {int initialised; struct uart_port port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sbd_port*,int ,int) ;
 int FUNC_4 (struct sbd_port*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct sbd_port *VAR_9)
{
 struct uart_port *VAR_10 = &VAR_9->port;

 if (VAR_9->initialised)
  return;


 FUNC_3(VAR_9, VAR_1, VAR_8);
 FUNC_3(VAR_9, VAR_1, VAR_7);
 FUNC_3(VAR_9, VAR_3, VAR_6);
 FUNC_3(VAR_9, VAR_4, 0);
 FUNC_3(VAR_9, VAR_2,
       FUNC_1(0) | FUNC_2(15));
 FUNC_3(VAR_9, VAR_5, 0);
 FUNC_3(VAR_9, VAR_0, 0);
 FUNC_4(VAR_9, FUNC_0((VAR_10->line) % 2), 0);

 VAR_9->initialised = 1;
}
