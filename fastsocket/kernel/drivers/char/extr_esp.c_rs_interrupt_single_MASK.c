
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pio_threshold; } ;
struct TYPE_4__ {TYPE_3__* tty; } ;
struct esp_struct {int stat_flags; int IER; scalar_t__ xmit_cnt; int lock; int last_active; TYPE_2__ config; TYPE_1__ port; int break_wait; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {scalar_t__ stopped; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct esp_struct*) ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct esp_struct*,int) ;
 int FUNC_3 (struct esp_struct*,unsigned int) ;
 int FUNC_4 (struct esp_struct*,int) ;
 int FUNC_5 (struct esp_struct*,int ) ;
 int FUNC_6 (struct esp_struct*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct esp_struct*,int) ;
 int FUNC_10 (struct esp_struct*) ;
 int FUNC_11 (struct esp_struct*,int) ;
 int FUNC_12 (TYPE_3__*,int) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_14(int VAR_20, void *VAR_21)
{
 struct esp_struct *VAR_22;
 unsigned VAR_23;
 unsigned int VAR_24;




 VAR_22 = (struct esp_struct *)VAR_21;
 VAR_23 = 0;
 VAR_24 = FUNC_5(VAR_22, VAR_13);

 FUNC_7(&VAR_22->lock);

 if (!VAR_22->port.tty) {
  FUNC_8(&VAR_22->lock);
  return VAR_10;
 }

 if (VAR_24 & 0x04) {
  FUNC_6(VAR_22, VAR_11, VAR_0);
  VAR_23 = FUNC_5(VAR_22, VAR_14);
  FUNC_5(VAR_22, VAR_15);

  if (VAR_23 & 0x01)
   VAR_22->stat_flags |= VAR_7;

  if (VAR_23 & 0x20)
   FUNC_0(VAR_22);

  if (VAR_23 & 0x80)
   FUNC_13(&VAR_22->break_wait);
 }

 if ((VAR_24 & 0x88) ||
     (VAR_23 & 0x1c) ) {
  if (VAR_22->stat_flags & VAR_5)
   FUNC_3(VAR_22, VAR_23);
  else if (VAR_22->stat_flags & VAR_6)
   FUNC_10(VAR_22);
 }

 if (!(VAR_22->stat_flags & (VAR_5 | VAR_6)) &&
     ((VAR_24 & 0x01) || (VAR_22->stat_flags & VAR_7)) &&
     (VAR_22->IER & VAR_16)) {
  int VAR_25;

  FUNC_6(VAR_22, VAR_11, VAR_3);
  FUNC_6(VAR_22, VAR_11, VAR_1);
  VAR_25 = FUNC_5(VAR_22, VAR_14) << 8;
  VAR_25 |= FUNC_5(VAR_22, VAR_15);

  VAR_25 = FUNC_12(VAR_22->port.tty, VAR_25);

  if (VAR_25) {
   if (VAR_18 ||
       (VAR_22->stat_flags & VAR_8) ||
       (VAR_25 <= VAR_22->config.pio_threshold))
    FUNC_4(VAR_22, VAR_25);
   else
    FUNC_2(VAR_22, VAR_25);
  }
 }

 if (!(VAR_22->stat_flags & (VAR_5 | VAR_6)) &&
     (VAR_24 & 0x02) && (VAR_22->IER & VAR_17)) {
  if ((VAR_22->xmit_cnt <= 0) || VAR_22->port.tty->stopped) {
   VAR_22->IER &= ~VAR_17;
   FUNC_6(VAR_22, VAR_11, VAR_4);
   FUNC_6(VAR_22, VAR_12, VAR_22->IER);
  } else {
   int VAR_26;

   FUNC_6(VAR_22, VAR_11, VAR_3);
   FUNC_6(VAR_22, VAR_11, VAR_2);
   VAR_26 = FUNC_5(VAR_22, VAR_14) << 8;
   VAR_26 |= FUNC_5(VAR_22, VAR_15);

   if (VAR_26 > VAR_22->xmit_cnt)
    VAR_26 = VAR_22->xmit_cnt;

   if (VAR_26) {
    if (VAR_18 ||
        (VAR_22->stat_flags & VAR_8) ||
        (VAR_26 <= VAR_22->config.pio_threshold))
     FUNC_11(VAR_22, VAR_26);
    else
     FUNC_9(VAR_22, VAR_26);
   }
  }
 }

 VAR_22->last_active = VAR_19;




 FUNC_8(&VAR_22->lock);
 return VAR_9;
}
