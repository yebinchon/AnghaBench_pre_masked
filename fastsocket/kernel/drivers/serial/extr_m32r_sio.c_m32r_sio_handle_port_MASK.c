
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_sio_port {int dummy; } ;


 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (struct uart_sio_port*,unsigned int*) ;
 int FUNC_2 (struct uart_sio_port*) ;

__attribute__((used)) static inline void FUNC_3(struct uart_sio_port *VAR_0,
 unsigned int VAR_1)
{
 FUNC_0("status = %x...", VAR_1);

 if (VAR_1 & 0x04)
  FUNC_1(VAR_0, &VAR_1);
 if (VAR_1 & 0x01)
  FUNC_2(VAR_0);
}
