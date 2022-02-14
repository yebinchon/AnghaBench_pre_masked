
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_sunsab_port {int cached_mode; int irqflags; int pvr_dtr_bit; int cached_pvr; } ;
struct uart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct uart_sunsab_port*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_6, unsigned int VAR_7)
{
 struct uart_sunsab_port *VAR_8 = (struct uart_sunsab_port *) VAR_6;

 if (VAR_7 & VAR_5) {
  VAR_8->cached_mode &= ~VAR_0;
  VAR_8->cached_mode |= VAR_1;
 } else {
  VAR_8->cached_mode |= (VAR_0 |
        VAR_1);
 }
 if (VAR_7 & VAR_4) {
  VAR_8->cached_pvr &= ~(VAR_8->pvr_dtr_bit);
 } else {
  VAR_8->cached_pvr |= VAR_8->pvr_dtr_bit;
 }

 FUNC_0(VAR_2, &VAR_8->irqflags);
 if (FUNC_2(VAR_3, &VAR_8->irqflags))
  FUNC_1(VAR_8);
}
