
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct tty {int t_state; TYPE_1__ t_rsel; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int FUNC_2 (struct tty*) ;
 int VAR_1 ;
 int FUNC_3 (struct tty*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct tty*) ;
 int FUNC_6 (struct tty*,int ,int) ;
 int FUNC_7 (struct tty*) ;
 int FUNC_8 (int ) ;

void
FUNC_9(struct tty *VAR_2)
{
 FUNC_3(VAR_2);

 FUNC_4(&VAR_2->t_rsel);
 FUNC_1(&VAR_2->t_rsel.si_note, 1);
 if (FUNC_0(VAR_2->t_state, VAR_1)) {
  FUNC_7(VAR_2);
  FUNC_6(VAR_2, VAR_0, 1);
  FUNC_5(VAR_2);
 }
 FUNC_8(FUNC_2(VAR_2));
}
