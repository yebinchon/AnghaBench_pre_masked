
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_2__ {int flags; int open_wait; } ;
struct stlport {unsigned int sigs; TYPE_1__ port; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct stlport*) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*) ;
 struct tty_struct* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct stlport *VAR_2)
{
 unsigned int VAR_3 = VAR_2->sigs;
 struct tty_struct *VAR_4 = FUNC_3(&VAR_2->port);

 if (!VAR_4)
  return;

 VAR_2->sigs = FUNC_0(VAR_2);

 if ((VAR_2->sigs & VAR_1) && ((VAR_3 & VAR_1) == 0))
  FUNC_4(&VAR_2->port.open_wait);

 if ((VAR_3 & VAR_1) && ((VAR_2->sigs & VAR_1) == 0))
  if (VAR_2->port.flags & VAR_0)
   FUNC_1(VAR_4);
 FUNC_2(VAR_4);
}
