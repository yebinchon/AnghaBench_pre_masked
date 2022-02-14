
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {scalar_t__ driver_data; } ;
struct TYPE_2__ {scalar_t__ head; scalar_t__ tail; } ;
struct e100_serial {unsigned long last_tx_active; unsigned long last_tx_active_usec; int* ostatusadr; int char_time_usec; TYPE_1__ xmit; } ;


 unsigned long FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct tty_struct *VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 struct e100_serial *VAR_7 = (struct e100_serial *)VAR_4->driver_data;
 unsigned long VAR_8 = VAR_3;
 unsigned long VAR_9 = FUNC_0();
 long VAR_10 =
  (VAR_8 - VAR_7->last_tx_active) * (1000000/VAR_0) +
  VAR_9 - VAR_7->last_tx_active_usec;





 FUNC_1();
 VAR_6 = VAR_3;
 while (VAR_7->xmit.head != VAR_7->xmit.tail ||
        (*VAR_7->ostatusadr & 0x007f) ||
        (VAR_10 < 2*VAR_7->char_time_usec)) {
  FUNC_2(1);
  if (FUNC_4(VAR_2))
   break;
  if (VAR_5 && FUNC_5(VAR_3, VAR_6 + VAR_5))
   break;
  VAR_8 = VAR_3;
  VAR_9 = FUNC_0();
  VAR_10 =
   (VAR_8 - VAR_7->last_tx_active) * (1000000/VAR_0) +
   VAR_9 - VAR_7->last_tx_active_usec;
 }
 FUNC_3(VAR_1);
 FUNC_6();
}
