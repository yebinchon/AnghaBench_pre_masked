
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_3__ {struct tty_struct* tty; } ;
struct TYPE_4__ {TYPE_1__ port; } ;
struct a2232_port {TYPE_2__ gs; } ;






 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*,int,int) ;

__attribute__((used)) static inline void FUNC_2(struct a2232_port *VAR_0, int VAR_1, int VAR_2)
{




 struct tty_struct *VAR_3 = VAR_0->gs.port.tty;
 FUNC_1(VAR_3, VAR_1, VAR_2);
 FUNC_0(VAR_3);
}
