
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* termios; int name; struct slgt_info* driver_data; } ;
struct slgt_info {int lock; int signals; int device_name; } ;
struct TYPE_2__ {int c_cflag; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct slgt_info*,int ,char*) ;
 int FUNC_4 (struct tty_struct*,int ) ;
 int FUNC_5 (struct slgt_info*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct tty_struct * VAR_2)
{
 struct slgt_info *VAR_3 = VAR_2->driver_data;
 unsigned long VAR_4;

 if (FUNC_3(VAR_3, VAR_2->name, "throttle"))
  return;
 FUNC_0(("%s throttle\n", VAR_3->device_name));
 if (FUNC_1(VAR_2))
  FUNC_4(VAR_2, FUNC_2(VAR_2));
  if (VAR_2->termios->c_cflag & VAR_0) {
  FUNC_6(&VAR_3->lock,VAR_4);
  VAR_3->signals &= ~VAR_1;
   FUNC_5(VAR_3);
  FUNC_7(&VAR_3->lock,VAR_4);
 }
}
