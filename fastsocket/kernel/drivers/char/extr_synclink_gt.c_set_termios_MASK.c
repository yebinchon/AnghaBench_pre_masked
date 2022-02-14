
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {scalar_t__ hw_stopped; TYPE_2__* termios; int flags; TYPE_1__* driver; struct slgt_info* driver_data; } ;
struct slgt_info {int lock; int signals; } ;
struct ktermios {int c_cflag; } ;
struct TYPE_4__ {int c_cflag; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct slgt_info*) ;
 int FUNC_2 (struct slgt_info*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_7(struct tty_struct *VAR_5, struct ktermios *VAR_6)
{
 struct slgt_info *VAR_7 = VAR_5->driver_data;
 unsigned long VAR_8;

 FUNC_0(("%s set_termios\n", VAR_5->driver->name));

 FUNC_1(VAR_7);


 if (VAR_6->c_cflag & VAR_0 &&
     !(VAR_5->termios->c_cflag & VAR_0)) {
  VAR_7->signals &= ~(VAR_3 + VAR_2);
  FUNC_3(&VAR_7->lock,VAR_8);
  FUNC_2(VAR_7);
  FUNC_4(&VAR_7->lock,VAR_8);
 }


 if (!(VAR_6->c_cflag & VAR_0) &&
     VAR_5->termios->c_cflag & VAR_0) {
  VAR_7->signals |= VAR_2;
   if (!(VAR_5->termios->c_cflag & VAR_1) ||
       !FUNC_5(VAR_4, &VAR_5->flags)) {
   VAR_7->signals |= VAR_3;
   }
  FUNC_3(&VAR_7->lock,VAR_8);
   FUNC_2(VAR_7);
  FUNC_4(&VAR_7->lock,VAR_8);
 }


 if (VAR_6->c_cflag & VAR_1 &&
     !(VAR_5->termios->c_cflag & VAR_1)) {
  VAR_5->hw_stopped = 0;
  FUNC_6(VAR_5);
 }
}
