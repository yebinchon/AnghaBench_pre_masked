
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int lock; } ;
struct uart_pmac_port {TYPE_1__ port; int * node; struct uart_pmac_port* mate; } ;
struct tty_struct {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,...) ;
 struct uart_pmac_port* FUNC_1 (struct uart_pmac_port*) ;
 struct tty_struct* FUNC_2 (struct uart_pmac_port*) ;
 int FUNC_3 (struct uart_pmac_port*) ;
 int FUNC_4 (struct uart_pmac_port*) ;
 int FUNC_5 (struct uart_pmac_port*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct tty_struct*) ;
 int FUNC_9 (struct uart_pmac_port*,int ,int ) ;
 int FUNC_10 (struct uart_pmac_port*) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_11, void *VAR_12)
{
 struct uart_pmac_port *VAR_13 = VAR_12;
 struct uart_pmac_port *VAR_14;
 struct uart_pmac_port *VAR_15;
 int VAR_16 = VAR_7;
 struct tty_struct *VAR_17;
 u8 VAR_18;

 VAR_14 = FUNC_1(VAR_13);
 VAR_15 = VAR_14->mate;

        FUNC_6(&VAR_14->port.lock);
 VAR_18 = FUNC_5(VAR_14, VAR_9);





 VAR_17 = ((void*)0);
        if (VAR_18 & (VAR_0 | VAR_2 | VAR_1)) {
  FUNC_9(VAR_14, VAR_8, VAR_10);
  FUNC_10(VAR_14);
         if (VAR_18 & VAR_0)
          FUNC_3(VAR_14);
  if (VAR_18 & VAR_1)
   VAR_17 = FUNC_2(VAR_14);
         if (VAR_18 & VAR_2)
          FUNC_4(VAR_14);
         VAR_16 = VAR_6;
        }
        FUNC_7(&VAR_14->port.lock);
 if (VAR_17 != ((void*)0))
  FUNC_8(VAR_17);

 if (VAR_15->node == ((void*)0))
  goto out;

        FUNC_6(&VAR_15->port.lock);
 VAR_17 = ((void*)0);
 if (VAR_18 & (VAR_3 | VAR_5 | VAR_4)) {
  FUNC_9(VAR_15, VAR_8, VAR_10);
  FUNC_10(VAR_15);
         if (VAR_18 & VAR_3)
          FUNC_3(VAR_15);
                if (VAR_18 & VAR_4)
          VAR_17 = FUNC_2(VAR_15);
         if (VAR_18 & VAR_5)
          FUNC_4(VAR_15);
         VAR_16 = VAR_6;
        }
        FUNC_7(&VAR_15->port.lock);
 if (VAR_17 != ((void*)0))
  FUNC_8(VAR_17);

 out:



 return VAR_16;
}
