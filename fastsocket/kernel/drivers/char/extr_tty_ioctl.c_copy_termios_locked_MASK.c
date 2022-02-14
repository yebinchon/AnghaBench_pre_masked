
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int termios_mutex; int termios_locked; } ;
struct ktermios {int dummy; } ;


 int FUNC_0 (struct ktermios*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_0, struct ktermios *VAR_1)
{
 FUNC_1(&VAR_0->termios_mutex);
 FUNC_0(VAR_1, VAR_0->termios_locked, sizeof(struct ktermios));
 FUNC_2(&VAR_0->termios_mutex);
}
