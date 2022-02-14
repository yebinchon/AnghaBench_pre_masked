
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int t_outq; int t_state; int t_iflag; scalar_t__ t_rocol; scalar_t__ t_rocount; int t_lflag; int t_rawq; int t_canq; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct tty*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct tty*) ;
 int VAR_9 ;
 int FUNC_6 (struct tty*) ;
 int FUNC_7 (struct tty*) ;
 int FUNC_8 (struct tty*,int ,int ,char*,int) ;
 int FUNC_9 (struct tty*,int) ;
 int FUNC_10 (struct tty*) ;

void
FUNC_11(struct tty *VAR_10, int VAR_11)
{
 FUNC_5(VAR_10);




 if (VAR_11 & VAR_1) {
  FUNC_1(&VAR_10->t_outq);
  FUNC_0(VAR_10->t_state, VAR_7);
 }
        FUNC_9(VAR_10, VAR_11);
        if (VAR_11 & VAR_0) {
  FUNC_1(&VAR_10->t_canq);
  FUNC_1(&VAR_10->t_rawq);
  FUNC_0(VAR_10->t_lflag, VAR_3);
  VAR_10->t_rocount = 0;
  VAR_10->t_rocol = 0;
  FUNC_0(VAR_10->t_state, VAR_4);
  FUNC_6(VAR_10);
  if (FUNC_2(VAR_10->t_state, VAR_6)) {
   if (VAR_11 & VAR_1)
    FUNC_1(&VAR_10->t_outq);
   FUNC_10(VAR_10);
   FUNC_0(VAR_10->t_state, VAR_6);
  }
 }
 if (VAR_11 & VAR_1) {
  FUNC_1(&VAR_10->t_outq);
  FUNC_7(VAR_10);
 }
}
