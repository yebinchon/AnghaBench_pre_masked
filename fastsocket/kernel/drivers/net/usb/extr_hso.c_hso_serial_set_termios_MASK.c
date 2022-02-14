
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct ktermios* termios; } ;
struct ktermios {int c_cflag; } ;
struct hso_serial {int serial_lock; scalar_t__ open_count; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct tty_struct*,struct ktermios*) ;
 struct hso_serial* FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_0, struct ktermios *VAR_1)
{
 struct hso_serial *VAR_2 = FUNC_2(VAR_0);
 unsigned long VAR_3;

 if (VAR_1)
  FUNC_0("Termios called with: cflags new[%d] - old[%d]",
     VAR_0->termios->c_cflag, VAR_1->c_cflag);


 FUNC_3(&VAR_2->serial_lock, VAR_3);
 if (VAR_2->open_count)
  FUNC_1(VAR_0, VAR_1);
 else
  VAR_0->termios = VAR_1;
 FUNC_4(&VAR_2->serial_lock, VAR_3);


 return;
}
