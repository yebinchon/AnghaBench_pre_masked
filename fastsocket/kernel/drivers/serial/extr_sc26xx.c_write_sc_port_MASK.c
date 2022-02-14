
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct uart_port {int line; scalar_t__ membase; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct uart_port *VAR_0, u8 VAR_1, u8 VAR_2)
{
 FUNC_0(VAR_2, VAR_0->membase + VAR_0->line * 0x20 + VAR_1);
}
