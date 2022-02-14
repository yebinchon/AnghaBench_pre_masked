
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {TYPE_1__* termios; } ;
struct TYPE_4__ {int rxrtsoff; int rxxoff; int rxrtson; int rxxon; } ;
struct stlport {int brdnr; TYPE_2__ stats; int pagenr; int port; } ;
struct TYPE_3__ {int c_iflag; int c_cflag; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 int VAR_9 ;
 unsigned char VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (char*,struct stlport*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 unsigned char FUNC_5 (struct stlport*,int ) ;
 int FUNC_6 (struct stlport*,int ,unsigned char) ;
 int FUNC_7 (struct stlport*) ;
 int FUNC_8 (struct tty_struct*) ;
 struct tty_struct* FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct stlport *VAR_13, int VAR_14)
{
 struct tty_struct *VAR_15;
 unsigned long VAR_16;
 unsigned char VAR_17;

 FUNC_2("stl_sc26198flowctrl(portp=%p,state=%x)\n", VAR_13, VAR_14);

 if (VAR_13 == ((void*)0))
  return;
 VAR_15 = FUNC_9(&VAR_13->port);
 if (VAR_15 == ((void*)0))
  return;

 FUNC_3(&VAR_12, VAR_16);
 FUNC_1(VAR_13->brdnr, VAR_13->pagenr);

 if (VAR_14) {
  if (VAR_15->termios->c_iflag & VAR_5) {
   VAR_17 = FUNC_5(VAR_13, VAR_6);
   FUNC_6(VAR_13, VAR_6, (VAR_17 & ~VAR_8));
   FUNC_6(VAR_13, VAR_11, VAR_2);
   VAR_17 |= VAR_7;
   VAR_13->stats.rxxon++;
   FUNC_7(VAR_13);
   FUNC_6(VAR_13, VAR_6, VAR_17);
  }






  if (VAR_15->termios->c_cflag & VAR_0) {
   FUNC_6(VAR_13, VAR_9,
    (FUNC_5(VAR_13, VAR_9) | VAR_10));
   FUNC_6(VAR_13, VAR_3,
    (FUNC_5(VAR_13, VAR_3) | VAR_4));
   VAR_13->stats.rxrtson++;
  }
 } else {
  if (VAR_15->termios->c_iflag & VAR_5) {
   VAR_17 = FUNC_5(VAR_13, VAR_6);
   FUNC_6(VAR_13, VAR_6, (VAR_17 & ~VAR_8));
   FUNC_6(VAR_13, VAR_11, VAR_1);
   VAR_17 &= ~VAR_7;
   VAR_13->stats.rxxoff++;
   FUNC_7(VAR_13);
   FUNC_6(VAR_13, VAR_6, VAR_17);
  }
  if (VAR_15->termios->c_cflag & VAR_0) {
   FUNC_6(VAR_13, VAR_9,
    (FUNC_5(VAR_13, VAR_9) & ~VAR_10));
   FUNC_6(VAR_13, VAR_3,
    (FUNC_5(VAR_13, VAR_3) & ~VAR_4));
   VAR_13->stats.rxrtsoff++;
  }
 }

 FUNC_0(VAR_13->brdnr);
 FUNC_4(&VAR_12, VAR_16);
 FUNC_8(VAR_15);
}
