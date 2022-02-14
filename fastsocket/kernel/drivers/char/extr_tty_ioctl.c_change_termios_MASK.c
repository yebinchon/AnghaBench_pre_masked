
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {int ctrl_status; int termios_mutex; struct ktermios* termios; TYPE_2__* ops; TYPE_1__* link; int ctrl_lock; int termios_locked; } ;
struct tty_ldisc {TYPE_3__* ops; } ;
struct ktermios {int c_iflag; char* c_cc; } ;
struct TYPE_6__ {int (* set_termios ) (struct tty_struct*,struct ktermios*) ;} ;
struct TYPE_5__ {int (* set_termios ) (struct tty_struct*,struct ktermios*) ;} ;
struct TYPE_4__ {int read_wait; scalar_t__ packet; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 char FUNC_1 (struct tty_struct*) ;
 char FUNC_2 (struct tty_struct*) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct tty_struct*,struct ktermios*) ;
 int FUNC_8 (struct tty_struct*,struct ktermios*) ;
 int FUNC_9 (struct tty_ldisc*) ;
 struct tty_ldisc* FUNC_10 (struct tty_struct*) ;
 int FUNC_11 (struct ktermios*,struct ktermios*) ;
 int FUNC_12 (struct ktermios*,struct ktermios*,int ) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct tty_struct *VAR_5, struct ktermios *VAR_6)
{
 struct ktermios VAR_7;
 struct tty_ldisc *VAR_8;
 unsigned long VAR_9;
 FUNC_3(&VAR_5->termios_mutex);
 VAR_7 = *VAR_5->termios;
 *VAR_5->termios = *VAR_6;
 FUNC_12(VAR_5->termios, &VAR_7, VAR_5->termios_locked);


 if (VAR_5->link && VAR_5->link->packet) {
  int VAR_10 = ((VAR_7.c_iflag & VAR_0) &&
    (VAR_7.c_cc[VAR_4] == '\023') &&
    (VAR_7.c_cc[VAR_3] == '\021'));
  int VAR_11 = (FUNC_0(VAR_5) &&
    FUNC_2(VAR_5) == '\023' &&
    FUNC_1(VAR_5) == '\021');
  if (VAR_10 != VAR_11) {
   FUNC_5(&VAR_5->ctrl_lock, VAR_9);
   VAR_5->ctrl_status &= ~(VAR_1 | VAR_2);
   if (VAR_11)
    VAR_5->ctrl_status |= VAR_1;
   else
    VAR_5->ctrl_status |= VAR_2;
   FUNC_6(&VAR_5->ctrl_lock, VAR_9);
   FUNC_13(&VAR_5->link->read_wait);
  }
 }

 if (VAR_5->ops->set_termios)
  (*VAR_5->ops->set_termios)(VAR_5, &VAR_7);
 else
  FUNC_11(VAR_5->termios, &VAR_7);

 VAR_8 = FUNC_10(VAR_5);
 if (VAR_8 != ((void*)0)) {
  if (VAR_8->ops->set_termios)
   (VAR_8->ops->set_termios)(VAR_5, &VAR_7);
  FUNC_9(VAR_8);
 }
 FUNC_4(&VAR_5->termios_mutex);
}
