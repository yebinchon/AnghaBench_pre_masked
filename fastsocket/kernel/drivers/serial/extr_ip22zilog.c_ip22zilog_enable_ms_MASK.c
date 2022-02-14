
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zilog_channel {int dummy; } ;
struct uart_port {int dummy; } ;
struct uart_ip22zilog_port {unsigned char* curregs; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 size_t VAR_2 ;
 unsigned char VAR_3 ;
 struct zilog_channel* FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct zilog_channel*,size_t,unsigned char) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_4)
{
 struct uart_ip22zilog_port *VAR_5 = (struct uart_ip22zilog_port *) VAR_4;
 struct zilog_channel *VAR_6 = FUNC_0(VAR_4);
 unsigned char VAR_7;

 VAR_7 = VAR_5->curregs[VAR_2] | (VAR_1 | VAR_3 | VAR_0);
 if (VAR_7 != VAR_5->curregs[VAR_2]) {
  VAR_5->curregs[VAR_2] = VAR_7;


  FUNC_1(VAR_6, VAR_2, VAR_5->curregs[VAR_2]);
 }
}
