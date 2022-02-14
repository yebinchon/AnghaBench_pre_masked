
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t type; int flags; int iobase; int lock; int mctrl; int irq; int line; } ;
struct uart_sunsu_port {size_t su_type; int ier; TYPE_2__ port; scalar_t__ acr; } ;
struct uart_port {int dummy; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct uart_sunsu_port*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int,unsigned int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int ,int ,int ,struct uart_sunsu_port*) ;
 int FUNC_5 (struct uart_sunsu_port*,int ,int ) ;
 int FUNC_6 (struct uart_sunsu_port*,int ) ;
 int FUNC_7 (struct uart_sunsu_port*,int ,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int * VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_10 (TYPE_2__*,int ) ;
 TYPE_1__* VAR_27 ;

__attribute__((used)) static int FUNC_11(struct uart_port *VAR_28)
{
 struct uart_sunsu_port *VAR_29 = (struct uart_sunsu_port *) VAR_28;
 unsigned long VAR_30;
 int VAR_31;

 if (VAR_29->port.type == VAR_2) {

  VAR_29->acr = 0;
  FUNC_7(VAR_29, VAR_17, 0xBF);
  FUNC_7(VAR_29, VAR_7, VAR_8);
  FUNC_7(VAR_29, VAR_13, 0);
  FUNC_7(VAR_29, VAR_17, 0);
  FUNC_5(VAR_29, VAR_6, 0);
  FUNC_7(VAR_29, VAR_17, 0xBF);
  FUNC_7(VAR_29, VAR_7, VAR_8);
  FUNC_7(VAR_29, VAR_17, 0);
 }
 if (VAR_27[VAR_29->port.type].flags & VAR_5) {
  FUNC_7(VAR_29, VAR_9, VAR_12);
  FUNC_7(VAR_29, VAR_9, VAR_12 |
    VAR_10 | VAR_11);
  FUNC_7(VAR_29, VAR_9, 0);
 }




 (void) FUNC_6(VAR_29, VAR_19);
 (void) FUNC_6(VAR_29, VAR_21);
 (void) FUNC_6(VAR_29, VAR_16);
 (void) FUNC_6(VAR_29, VAR_20);






 if (!(VAR_29->port.flags & VAR_22) &&
     (FUNC_6(VAR_29, VAR_19) == 0xff)) {
  FUNC_3("ttyS%d: LSR safety check engaged!\n", VAR_29->port.line);
  return -VAR_0;
 }

 if (VAR_29->su_type != VAR_3) {
  VAR_31 = FUNC_4(VAR_29->port.irq, VAR_25,
         VAR_1, VAR_24[VAR_29->su_type], VAR_29);
 } else {
  VAR_31 = FUNC_4(VAR_29->port.irq, VAR_26,
         VAR_1, VAR_24[VAR_29->su_type], VAR_29);
 }
 if (VAR_31) {
  FUNC_3("su: Cannot register IRQ %d\n", VAR_29->port.irq);
  return VAR_31;
 }




 FUNC_7(VAR_29, VAR_17, VAR_18);

 FUNC_8(&VAR_29->port.lock, VAR_30);

 VAR_29->port.mctrl |= VAR_4;

 FUNC_10(&VAR_29->port, VAR_29->port.mctrl);
 FUNC_9(&VAR_29->port.lock, VAR_30);






 VAR_29->ier = VAR_15 | VAR_14;
 FUNC_7(VAR_29, VAR_13, VAR_29->ier);

 if (VAR_29->port.flags & VAR_23) {
  unsigned int VAR_32;



  VAR_32 = (VAR_29->port.iobase & 0xfe0) | 0x01f;
  FUNC_2(0x80, VAR_32);
  (void) FUNC_1(VAR_32);
 }




 (void) FUNC_6(VAR_29, VAR_19);
 (void) FUNC_6(VAR_29, VAR_21);
 (void) FUNC_6(VAR_29, VAR_16);
 (void) FUNC_6(VAR_29, VAR_20);

 return 0;
}
