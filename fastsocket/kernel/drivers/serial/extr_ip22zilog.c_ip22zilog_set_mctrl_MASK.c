
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zilog_channel {int dummy; } ;
struct uart_port {int dummy; } ;
struct uart_ip22zilog_port {unsigned char* curregs; } ;


 unsigned char VAR_0 ;
 size_t VAR_1 ;
 unsigned char VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct zilog_channel* FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct zilog_channel*,size_t,unsigned char) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_5, unsigned int VAR_6)
{
 struct uart_ip22zilog_port *VAR_7 = (struct uart_ip22zilog_port *) VAR_5;
 struct zilog_channel *VAR_8 = FUNC_0(VAR_5);
 unsigned char VAR_9, VAR_10;

 VAR_9 = VAR_10 = 0;

 if (VAR_6 & VAR_4)
  VAR_9 |= VAR_2;
 else
  VAR_10 |= VAR_2;
 if (VAR_6 & VAR_3)
  VAR_9 |= VAR_0;
 else
  VAR_10 |= VAR_0;


 VAR_7->curregs[VAR_1] |= VAR_9;
 VAR_7->curregs[VAR_1] &= ~VAR_10;
 FUNC_1(VAR_8, VAR_1, VAR_7->curregs[VAR_1]);
}
