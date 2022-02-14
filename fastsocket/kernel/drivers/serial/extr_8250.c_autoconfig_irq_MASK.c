
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int iobase; int irq; } ;
struct uart_8250_port {TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned char FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned char,unsigned int) ;
 int FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 () ;
 unsigned char FUNC_4 (struct uart_8250_port*,int ) ;
 int FUNC_5 (struct uart_8250_port*,int ,unsigned char) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct uart_8250_port *VAR_12)
{
 unsigned char VAR_13, VAR_14;
 unsigned char VAR_15 = 0;
 unsigned int VAR_16 = 0;
 unsigned long VAR_17;
 int VAR_18;

 if (VAR_12->port.flags & VAR_11) {
  VAR_16 = (VAR_12->port.iobase & 0xfe0) | 0x1f;
  VAR_15 = FUNC_0(VAR_16);
  FUNC_1(0x80, VAR_16);
  (void) FUNC_0(VAR_16);
 }


 FUNC_2(FUNC_3());
 VAR_13 = FUNC_4(VAR_12, VAR_3);
 VAR_14 = FUNC_4(VAR_12, VAR_0);
 FUNC_5(VAR_12, VAR_3, VAR_5 | VAR_6);

 VAR_17 = FUNC_3();
 FUNC_5(VAR_12, VAR_3, 0);
 FUNC_6(10);
 if (VAR_12->port.flags & VAR_11) {
  FUNC_5(VAR_12, VAR_3,
       VAR_4 | VAR_7);
 } else {
  FUNC_5(VAR_12, VAR_3,
       VAR_4 | VAR_7 | VAR_6);
 }
 FUNC_5(VAR_12, VAR_0, 0x0f);
 (void)FUNC_4(VAR_12, VAR_2);
 (void)FUNC_4(VAR_12, VAR_9);
 (void)FUNC_4(VAR_12, VAR_1);
 (void)FUNC_4(VAR_12, VAR_8);
 FUNC_5(VAR_12, VAR_10, 0xFF);
 FUNC_6(20);
 VAR_18 = FUNC_2(VAR_17);

 FUNC_5(VAR_12, VAR_3, VAR_13);
 FUNC_5(VAR_12, VAR_0, VAR_14);

 if (VAR_12->port.flags & VAR_11)
  FUNC_1(VAR_15, VAR_16);

 VAR_12->port.irq = (VAR_18 > 0) ? VAR_18 : 0;
}
