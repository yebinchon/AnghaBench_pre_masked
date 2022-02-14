
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zilog_channel {int dummy; } ;
struct uart_port {int lock; } ;
struct uart_ip22zilog_port {unsigned char* curregs; } ;


 size_t VAR_0 ;
 unsigned char VAR_1 ;
 struct zilog_channel* FUNC_0 (struct uart_port*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct zilog_channel*,size_t,unsigned char) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_2, int VAR_3)
{
 struct uart_ip22zilog_port *VAR_4 = (struct uart_ip22zilog_port *) VAR_2;
 struct zilog_channel *VAR_5 = FUNC_0(VAR_2);
 unsigned char VAR_6, VAR_7, VAR_8;
 unsigned long VAR_9;

 VAR_6 = VAR_7 = 0;

 if (VAR_3)
  VAR_6 |= VAR_1;
 else
  VAR_7 |= VAR_1;

 FUNC_1(&VAR_2->lock, VAR_9);

 VAR_8 = (VAR_4->curregs[VAR_0] | VAR_6) & ~VAR_7;
 if (VAR_8 != VAR_4->curregs[VAR_0]) {
  VAR_4->curregs[VAR_0] = VAR_8;


  FUNC_3(VAR_5, VAR_0, VAR_4->curregs[VAR_0]);
 }

 FUNC_2(&VAR_2->lock, VAR_9);
}
