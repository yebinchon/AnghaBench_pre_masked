
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_short ;
struct cyclades_port {int flags; TYPE_1__* tty; int open_wait; int last_active; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int stopped; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 unsigned char volatile VAR_12 ;
 unsigned char volatile VAR_13 ;
 int VAR_14 ;
 struct cyclades_port* VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_17, void *VAR_18)
{
 struct cyclades_port *VAR_19;
 volatile unsigned char *VAR_20 = (unsigned char *)VAR_3;
 int VAR_21;
 int VAR_22;
 int VAR_23;


 VAR_21 = (u_short) (VAR_20[VAR_8] >> 2);
 VAR_19 = &VAR_15[VAR_21];
 VAR_19->last_active = VAR_16;

 VAR_22 = VAR_20[VAR_10];
 VAR_23 = VAR_20[VAR_11];

 if (VAR_19->tty == 0) {
  ;
 } else {
  if ((VAR_22 & VAR_5)
      && (VAR_19->flags & VAR_0)) {
   if (VAR_23 & VAR_5) {

    FUNC_2(&VAR_19->open_wait);
   } else {

    FUNC_0(VAR_19->tty);
    FUNC_2(&VAR_19->open_wait);
    VAR_19->flags &= ~VAR_2;
   }
  }
  if ((VAR_22 & VAR_4)
      && (VAR_19->flags & VAR_1)) {
   if (VAR_19->tty->stopped) {
    if (VAR_23 & VAR_4) {

     VAR_19->tty->stopped = 0;
     VAR_20[VAR_7] |= VAR_12;
     FUNC_1(VAR_19->tty);
    }
   } else {
    if (!(VAR_23 & VAR_4)) {

     VAR_19->tty->stopped = 1;
     VAR_20[VAR_7] &=
         ~(VAR_12 | VAR_13);
    }
   }
  }
  if (VAR_23 & VAR_6) {
  }
 }
 VAR_20[VAR_9] = 0;
 return VAR_14;
}
