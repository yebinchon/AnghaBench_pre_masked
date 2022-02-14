
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct uart_8250_port {unsigned int lsr_saved_flags; unsigned int msr_saved_flags; TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_0 (struct uart_8250_port*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct uart_8250_port *VAR_9, int VAR_10)
{
 unsigned int VAR_11, VAR_12 = 10000;


 do {
  VAR_11 = FUNC_0(VAR_9, VAR_4);

  VAR_9->lsr_saved_flags |= VAR_11 & VAR_2;

  if (--VAR_12 == 0)
   break;
  FUNC_2(1);
 } while ((VAR_11 & VAR_10) != VAR_10);


 if (VAR_9->port.flags & VAR_8) {
  unsigned int VAR_13;
  for (VAR_13 = 1000000; VAR_13; VAR_13--) {
   unsigned int VAR_14 = FUNC_0(VAR_9, VAR_5);

   VAR_9->msr_saved_flags |= VAR_14 & VAR_3;

   if ((VAR_9->port.flags & VAR_0) &&
       (VAR_14 & VAR_6))
    break;
   else if ((VAR_9->port.flags & VAR_1) &&
     (VAR_14 & VAR_7))
    break;

   FUNC_2(1);
   FUNC_1();
  }
 }
}
