
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct uart_cpm_port {scalar_t__* gpios; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_8)
{
 struct uart_cpm_port *VAR_9 = (struct uart_cpm_port *)VAR_8;
 unsigned int VAR_10 = VAR_5 | VAR_6 | VAR_4;

 if (VAR_9->gpios[VAR_0] >= 0) {
  if (FUNC_0(VAR_9->gpios[VAR_0]))
   VAR_10 &= ~VAR_5;
 }

 if (VAR_9->gpios[VAR_2] >= 0) {
  if (FUNC_0(VAR_9->gpios[VAR_2]))
   VAR_10 &= ~VAR_6;
 }

 if (VAR_9->gpios[VAR_1] >= 0) {
  if (FUNC_0(VAR_9->gpios[VAR_1]))
   VAR_10 &= ~VAR_4;
 }

 if (VAR_9->gpios[VAR_3] >= 0) {
  if (!FUNC_0(VAR_9->gpios[VAR_3]))
   VAR_10 |= VAR_7;
 }

 return VAR_10;
}
