
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ c_cc; } ;
struct TYPE_4__ {int si_note; } ;
struct tty {scalar_t__ t_lowat; int t_state; TYPE_1__ t_outq; TYPE_2__ t_wsel; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct tty*) ;
 int FUNC_4 (struct tty*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct tty*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ) ;

void
FUNC_8(struct tty *VAR_3)
{
 FUNC_5(VAR_3);

 if (VAR_3->t_outq.c_cc <= VAR_3->t_lowat) {
  FUNC_6(&VAR_3->t_wsel);
  FUNC_2(&VAR_3->t_wsel.si_note, 1);
 }
 if (FUNC_1(VAR_3->t_state, VAR_0 | VAR_1) ==
     VAR_1 && VAR_3->t_outq.c_cc == 0) {
  FUNC_0(VAR_3->t_state, VAR_1);
  FUNC_7(FUNC_3(VAR_3));
 }
 if (FUNC_1(VAR_3->t_state, VAR_2) &&
     VAR_3->t_outq.c_cc <= VAR_3->t_lowat) {
  FUNC_0(VAR_3->t_state, VAR_2);
  FUNC_7(FUNC_4(VAR_3));
 }
}
