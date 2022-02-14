
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct uart_port {int line; scalar_t__ membase; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u8 FUNC_1(struct uart_port *VAR_0, u8 VAR_1)
{
 return FUNC_0(VAR_0->membase + VAR_0->line * 0x20 + VAR_1);
}
