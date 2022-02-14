
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_uart_port {unsigned int mctrl; } ;


 int FUNC_0 (struct sdio_uart_port*,unsigned int) ;

__attribute__((used)) static inline void FUNC_1(struct sdio_uart_port *VAR_0,
       unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = VAR_0->mctrl;
 VAR_0->mctrl = (VAR_3 & ~VAR_2) | VAR_1;
 if (VAR_3 != VAR_0->mctrl)
  FUNC_0(VAR_0, VAR_0->mctrl);
}
