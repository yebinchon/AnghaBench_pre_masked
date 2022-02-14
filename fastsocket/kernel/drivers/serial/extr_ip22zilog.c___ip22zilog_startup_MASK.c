
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zilog_channel {int control; } ;
struct uart_ip22zilog_port {int* curregs; int prev_status; int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct zilog_channel* FUNC_0 (int *) ;
 int FUNC_1 (struct uart_ip22zilog_port*) ;
 int FUNC_2 (struct zilog_channel*,int*) ;
 int FUNC_3 (struct uart_ip22zilog_port*,struct zilog_channel*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct zilog_channel*,size_t,int) ;

__attribute__((used)) static void FUNC_6(struct uart_ip22zilog_port *VAR_9)
{
 struct zilog_channel *VAR_10;

 VAR_10 = FUNC_0(&VAR_9->port);

 FUNC_1(VAR_9);

 FUNC_2(VAR_10, VAR_9->curregs);

 FUNC_5(VAR_10, VAR_5, VAR_9->curregs[VAR_5]);
 VAR_9->prev_status = FUNC_4(&VAR_10->control);


 VAR_9->curregs[VAR_3] |= VAR_6;
 VAR_9->curregs[VAR_4] |= VAR_7;

 VAR_9->curregs[VAR_2] |= VAR_0 | VAR_1 | VAR_8;
 FUNC_3(VAR_9, VAR_10);
}
