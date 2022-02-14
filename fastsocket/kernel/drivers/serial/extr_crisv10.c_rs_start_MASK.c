
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {TYPE_1__* termios; scalar_t__ driver_data; } ;
struct TYPE_4__ {scalar_t__ head; scalar_t__ tail; scalar_t__ buf; } ;
struct e100_serial {TYPE_2__ xmit; int uses_dma_out; int * ioport; int line; } ;
struct TYPE_3__ {int c_iflag; } ;


 int FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ) ;
 unsigned long FUNC_3 (int ,int ,int ) ;
 unsigned long FUNC_4 (int ,int ,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct tty_struct*) ;
 int VAR_4 ;
 int FUNC_6 (struct e100_serial*) ;
 int VAR_5 ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (unsigned long) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_9(struct tty_struct *VAR_8)
{
 struct e100_serial *VAR_9 = (struct e100_serial *)VAR_8->driver_data;
 if (VAR_9) {
  unsigned long VAR_10;
  unsigned long VAR_11;

  FUNC_8(VAR_10);
  FUNC_2(FUNC_1(VAR_9->line, "XOFF rs_start xmit %i\n",
    FUNC_0(VAR_9->xmit.head,
      VAR_9->xmit.tail,VAR_3)));
  VAR_11 = FUNC_3(VAR_2, VAR_7, FUNC_5(VAR_8));
  VAR_11 |= FUNC_4(VAR_2, VAR_6, VAR_5);
  if (VAR_8->termios->c_iflag & VAR_0 ) {
   VAR_11 |= FUNC_4(VAR_2, VAR_4, VAR_5);
  }

  *((unsigned long *)&VAR_9->ioport[VAR_1]) = VAR_11;
  if (!VAR_9->uses_dma_out &&
      VAR_9->xmit.head != VAR_9->xmit.tail && VAR_9->xmit.buf)
   FUNC_6(VAR_9);

  FUNC_7(VAR_10);
 }
}
