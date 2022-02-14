
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {TYPE_3__* termios; scalar_t__ driver_data; } ;
struct TYPE_5__ {int tty; } ;
struct TYPE_4__ {int tail; int head; } ;
struct e100_serial {int * ioport; TYPE_2__ port; TYPE_1__ xmit; int line; } ;
struct TYPE_6__ {int c_iflag; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ) ;
 unsigned long FUNC_3 (int ,int ,int ) ;
 unsigned long FUNC_4 (int ,int ,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_8(struct tty_struct *VAR_9)
{
 struct e100_serial *VAR_10 = (struct e100_serial *)VAR_9->driver_data;
 if (VAR_10) {
  unsigned long VAR_11;
  unsigned long VAR_12;

  FUNC_7(VAR_11);
  FUNC_2(FUNC_1(VAR_10->line, "XOFF rs_stop xmit %i\n",
    FUNC_0(VAR_10->xmit.head,
      VAR_10->xmit.tail,VAR_3)));

  VAR_12 = FUNC_3(VAR_2, VAR_8,
    FUNC_5(VAR_10->port.tty));
  VAR_12 |= FUNC_4(VAR_2, VAR_7, VAR_6);
  if (VAR_9->termios->c_iflag & VAR_0 ) {
   VAR_12 |= FUNC_4(VAR_2, VAR_4, VAR_5);
  }

  *((unsigned long *)&VAR_10->ioport[VAR_1]) = VAR_12;
  FUNC_6(VAR_11);
 }
}
