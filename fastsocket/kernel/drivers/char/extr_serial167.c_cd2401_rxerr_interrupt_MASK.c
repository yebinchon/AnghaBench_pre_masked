
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct tty_struct {int dummy; } ;
struct cyclades_port {scalar_t__ tty; unsigned char ignore_status_mask; unsigned char read_status_mask; int flags; int last_active; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 size_t VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 unsigned char VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 struct cyclades_port* VAR_19 ;
 int FUNC_0 (struct tty_struct*) ;
 int VAR_20 ;
 scalar_t__ FUNC_1 (struct tty_struct*,int) ;
 int FUNC_2 (struct tty_struct*,char,int ) ;
 int FUNC_3 (struct tty_struct*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_21, void *VAR_22)
{
 struct tty_struct *VAR_23;
 struct cyclades_port *VAR_24;
 volatile unsigned char *VAR_25 = (unsigned char *)VAR_1;
 unsigned char VAR_26, VAR_27;
 int VAR_28;
 char VAR_29;


 VAR_28 = (u_short) (VAR_25[VAR_4] >> 2);
 VAR_24 = &VAR_19[VAR_28];
 VAR_24->last_active = VAR_20;

 if ((VAR_26 = VAR_25[VAR_11]) & VAR_12) {

  VAR_25[VAR_9] = VAR_5;
  return VAR_13;
 }




 if ((VAR_27 = VAR_25[VAR_10]) != 0)
  VAR_29 = VAR_25[VAR_8];
 else
  VAR_29 = 0;


 if (VAR_24->tty == 0) {
  VAR_25[VAR_9] = VAR_27 ? 0 : VAR_5;
  return VAR_13;
 } else {
  VAR_23 = VAR_24->tty;
  if (VAR_26 & VAR_24->ignore_status_mask) {
   VAR_25[VAR_9] = VAR_27 ? 0 : VAR_5;
   return VAR_13;
  }
  if (FUNC_1(VAR_23, 1) != 0) {
   if (VAR_26 & VAR_24->read_status_mask) {
    if (VAR_26 & VAR_2) {
     FUNC_2(VAR_23, VAR_29,
            VAR_14);
     if (VAR_24->flags & VAR_0) {
      FUNC_0(VAR_23);
     }
    } else if (VAR_26 & VAR_3) {
     FUNC_2(VAR_23, VAR_29,
            VAR_15);
    } else if (VAR_26 & VAR_7) {
     FUNC_2(VAR_23, VAR_29,
            VAR_18);
    } else if (VAR_26 & VAR_6) {
     FUNC_2(VAR_23, 0,
            VAR_17);





     if (FUNC_1(VAR_23, 1) !=
         0) {
      FUNC_2(VAR_23, VAR_29,
             VAR_15);
     }




    } else {
     FUNC_2(VAR_23, 0,
            VAR_16);
    }
   } else {
    FUNC_2(VAR_23, VAR_29, VAR_16);
   }
  } else {


  }
 }
 FUNC_3(VAR_23);

 VAR_25[VAR_9] = VAR_27 ? 0 : VAR_5;
 return VAR_13;
}
