
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct cyclades_port {int x_char; int x_break; scalar_t__ xmit_cnt; int* xmit_buf; size_t xmit_tail; TYPE_1__* tty; int last_active; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ hw_stopped; scalar_t__ stopped; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 unsigned char VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 unsigned char volatile VAR_7 ;
 unsigned char volatile VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 struct cyclades_port* VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_17, void *VAR_18)
{
 struct cyclades_port *VAR_19;
 volatile unsigned char *VAR_20 = (unsigned char *)VAR_0;
 int VAR_21;
 int VAR_22, VAR_23;
 int VAR_24;


 VAR_21 = (u_short) (VAR_20[VAR_2] >> 2);







 if ((VAR_21 < 0) || (VAR_12 <= VAR_21)) {
  VAR_20[VAR_1] &= ~(VAR_7 | VAR_8);
  VAR_20[VAR_5] = VAR_3;
  return VAR_11;
 }
 VAR_19 = &VAR_15[VAR_21];
 VAR_19->last_active = VAR_16;
 if (VAR_19->tty == 0) {
  VAR_20[VAR_1] &= ~(VAR_7 | VAR_8);
  VAR_20[VAR_5] = VAR_3;
  return VAR_11;
 }


 VAR_23 = VAR_22 = VAR_20[VAR_6];

 if (VAR_19->x_char) {
  VAR_24 = VAR_19->x_char;
  VAR_20[VAR_4] = VAR_24;
  VAR_22--;
  VAR_19->x_char = 0;
 }

 if (VAR_19->x_break) {
  VAR_20[VAR_4] = 0;
  VAR_20[VAR_4] = 0x81;
  VAR_20[VAR_4] = 0;
  VAR_20[VAR_4] = 0x82;
  VAR_20[VAR_4] = VAR_19->x_break * 200 / VAR_10;
  VAR_20[VAR_4] = 0;
  VAR_20[VAR_4] = 0x83;
  VAR_22 -= 7;
  VAR_19->x_break = 0;
 }

 while (VAR_22 > 0) {
  if (!VAR_19->xmit_cnt) {
   VAR_20[VAR_1] &= ~(VAR_7 | VAR_8);
   break;
  }
  if (VAR_19->xmit_buf == 0) {
   VAR_20[VAR_1] &= ~(VAR_7 | VAR_8);
   break;
  }
  if (VAR_19->tty->stopped || VAR_19->tty->hw_stopped) {
   VAR_20[VAR_1] &= ~(VAR_7 | VAR_8);
   break;
  }
  VAR_24 = VAR_19->xmit_buf[VAR_19->xmit_tail];
  if (VAR_24) {
   VAR_19->xmit_cnt--;
   VAR_19->xmit_tail = (VAR_19->xmit_tail + 1)
       & (VAR_13 - 1);
   VAR_20[VAR_4] = VAR_24;
   VAR_22--;
  } else {
   if (VAR_22 > 1) {
    VAR_19->xmit_cnt--;
    VAR_19->xmit_tail = (VAR_19->xmit_tail + 1)
        & (VAR_13 - 1);
    VAR_20[VAR_4] = VAR_24;
    VAR_20[VAR_4] = 0;
    VAR_22--;
    VAR_22--;
   } else {
    break;
   }
  }
 }

 if (VAR_19->xmit_cnt < VAR_14)
  FUNC_1(VAR_19->tty);

 VAR_20[VAR_5] = (VAR_22 != VAR_23) ? 0 : VAR_3;
 return VAR_11;
}
