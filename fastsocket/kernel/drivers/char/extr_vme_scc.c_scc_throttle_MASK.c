
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* termios; struct scc_port* driver_data; } ;
struct scc_port {int dummy; } ;
struct TYPE_2__ {int c_cflag; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct scc_port*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct tty_struct*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (struct tty_struct*,int ) ;

__attribute__((used)) static void FUNC_7 (struct tty_struct * VAR_3)
{
 struct scc_port *VAR_4 = VAR_3->driver_data;
 unsigned long VAR_5;
 FUNC_1(VAR_4);

 if (VAR_3->termios->c_cflag & VAR_0) {
  FUNC_5(VAR_5);
  FUNC_2(VAR_2, ~VAR_1, 0);
  FUNC_4(VAR_5);
 }
 if (FUNC_0(VAR_3))
  FUNC_6(VAR_3, FUNC_3(VAR_3));
}
