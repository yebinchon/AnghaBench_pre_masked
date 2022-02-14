
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_txx9_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct uart_txx9_port*,int ,int) ;

__attribute__((used)) static inline void
FUNC_1(struct uart_txx9_port *VAR_5, int VAR_6)
{
 VAR_6 >>= 1;
 if (VAR_6 < 256)
  FUNC_0(VAR_5, VAR_0, VAR_6 | VAR_1);
 else if (VAR_6 < (256 << 2))
  FUNC_0(VAR_5, VAR_0, (VAR_6 >> 2) | VAR_2);
 else if (VAR_6 < (256 << 4))
  FUNC_0(VAR_5, VAR_0, (VAR_6 >> 4) | VAR_3);
 else if (VAR_6 < (256 << 6))
  FUNC_0(VAR_5, VAR_0, (VAR_6 >> 6) | VAR_4);
 else
  FUNC_0(VAR_5, VAR_0, 0xff | VAR_4);
}
