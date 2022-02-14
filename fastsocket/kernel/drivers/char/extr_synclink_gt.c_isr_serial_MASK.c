
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int exithunt; int rxidle; int brk; } ;
struct TYPE_5__ {int flags; scalar_t__ tty; } ;
struct TYPE_4__ {scalar_t__ mode; } ;
struct slgt_info {int irq_occurred; unsigned short ignore_status_mask; int read_status_mask; int event_wait_q; TYPE_3__ icount; scalar_t__ rx_pio; TYPE_2__ port; scalar_t__ tx_count; TYPE_1__ params; int device_name; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 unsigned short VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 unsigned short VAR_13 ;
 unsigned short VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct slgt_info*,unsigned short) ;
 int FUNC_2 (struct slgt_info*,unsigned short) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct slgt_info*,unsigned short) ;
 int FUNC_5 (struct slgt_info*) ;
 int FUNC_6 (struct slgt_info*,unsigned short) ;
 unsigned short FUNC_7 (struct slgt_info*,int ) ;
 int FUNC_8 (struct slgt_info*,unsigned short) ;
 int FUNC_9 (struct slgt_info*) ;
 int FUNC_10 (scalar_t__,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct slgt_info*,int ,unsigned short) ;

__attribute__((used)) static void FUNC_13(struct slgt_info *VAR_17)
{
 unsigned short VAR_18 = FUNC_7(VAR_17, VAR_15);

 FUNC_0(("%s isr_serial status=%04X\n", VAR_17->device_name, VAR_18));

 FUNC_12(VAR_17, VAR_15, VAR_18);

 VAR_17->irq_occurred = 1;

 if (VAR_17->params.mode == VAR_12) {
  if (VAR_18 & VAR_9) {
   if (VAR_17->tx_count)
    FUNC_6(VAR_17, VAR_18);
  }
  if (VAR_17->rx_pio && (VAR_18 & VAR_6))
   FUNC_5(VAR_17);
  if ((VAR_18 & VAR_5) && (VAR_18 & VAR_13)) {
   VAR_17->icount.brk++;

   if (VAR_17->port.tty) {
    if (!(VAR_18 & VAR_17->ignore_status_mask)) {
     if (VAR_17->read_status_mask & VAR_11) {
      FUNC_10(VAR_17->port.tty, 0, VAR_16);
      if (VAR_17->port.flags & VAR_0)
       FUNC_3(VAR_17->port.tty);
     }
    }
   }
  }
 } else {
  if (VAR_18 & (VAR_9 + VAR_10))
   FUNC_6(VAR_17, VAR_18);
  if (VAR_17->rx_pio && (VAR_18 & VAR_6))
   FUNC_5(VAR_17);
  if (VAR_18 & VAR_7) {
   if (VAR_18 & VAR_14)
    VAR_17->icount.rxidle++;
   else
    VAR_17->icount.exithunt++;
   FUNC_11(&VAR_17->event_wait_q);
  }

  if (VAR_18 & VAR_8)
   FUNC_9(VAR_17);
 }

 if (VAR_18 & VAR_3)
  FUNC_4(VAR_17, VAR_18);
 if (VAR_18 & VAR_1)
  FUNC_1(VAR_17, VAR_18);
 if (VAR_18 & VAR_2)
  FUNC_2(VAR_17, VAR_18);
 if (VAR_18 & VAR_4)
  FUNC_8(VAR_17, VAR_18);
}
