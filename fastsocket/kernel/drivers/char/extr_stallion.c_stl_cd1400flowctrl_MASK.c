
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {TYPE_1__* termios; } ;
struct TYPE_4__ {int rxrtsoff; int rxxoff; int rxrtson; int rxxon; } ;
struct stlport {int portnr; int brdnr; TYPE_2__ stats; int pagenr; int port; } ;
struct TYPE_3__ {int c_iflag; int c_cflag; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
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
 int FUNC_2 (char*,struct stlport*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct stlport*) ;
 int FUNC_6 (struct stlport*,int ) ;
 int FUNC_7 (struct stlport*,int ,int) ;
 int FUNC_8 (struct tty_struct*) ;
 struct tty_struct* FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct stlport *VAR_11, int VAR_12)
{
 struct tty_struct *VAR_13;
 unsigned long VAR_14;

 FUNC_2("stl_cd1400flowctrl(portp=%p,state=%x)\n", VAR_11, VAR_12);

 if (VAR_11 == ((void*)0))
  return;
 VAR_13 = FUNC_9(&VAR_11->port);
 if (VAR_13 == ((void*)0))
  return;

 FUNC_3(&VAR_10, VAR_14);
 FUNC_1(VAR_11->brdnr, VAR_11->pagenr);
 FUNC_7(VAR_11, VAR_0, (VAR_11->portnr & 0x03));

 if (VAR_12) {
  if (VAR_13->termios->c_iflag & VAR_6) {
   FUNC_5(VAR_11);
   FUNC_7(VAR_11, VAR_1, VAR_2);
   VAR_11->stats.rxxon++;
   FUNC_5(VAR_11);
  }






  if (VAR_13->termios->c_cflag & VAR_4) {
   FUNC_7(VAR_11, VAR_7,
    (FUNC_6(VAR_11, VAR_7) |
    VAR_5));
   FUNC_7(VAR_11, VAR_8, VAR_9);
   VAR_11->stats.rxrtson++;
  }
 } else {
  if (VAR_13->termios->c_iflag & VAR_6) {
   FUNC_5(VAR_11);
   FUNC_7(VAR_11, VAR_1, VAR_3);
   VAR_11->stats.rxxoff++;
   FUNC_5(VAR_11);
  }
  if (VAR_13->termios->c_cflag & VAR_4) {
   FUNC_7(VAR_11, VAR_7,
    (FUNC_6(VAR_11, VAR_7) & 0xf0));
   FUNC_7(VAR_11, VAR_8, 0);
   VAR_11->stats.rxrtsoff++;
  }
 }

 FUNC_0(VAR_11->brdnr);
 FUNC_4(&VAR_10, VAR_14);
 FUNC_8(VAR_13);
}
