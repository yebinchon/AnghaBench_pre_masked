
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_sunsu_port {int ier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_sunsu_port*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct uart_sunsu_port *VAR_2)
{
 if (VAR_2->ier & VAR_1) {
  VAR_2->ier &= ~VAR_1;
  FUNC_0(VAR_2, VAR_0, VAR_2->ier);
 }
}
