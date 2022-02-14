
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msgbuf {int dummy; } ;
typedef int caddr_t ;
struct TYPE_2__ {int sc_state; int sc_pgid; int sc_selp; struct msgbuf* sc_mbp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int,int ) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

void
FUNC_7(struct msgbuf *VAR_6)
{

 if (FUNC_3() == VAR_0) {
  return;
 }

 FUNC_0();
 if (!VAR_4) {
  FUNC_1();
  return;
 }
 if (((void*)0) == VAR_6)
  VAR_6 = VAR_5.sc_mbp;
 if (VAR_6 != VAR_5.sc_mbp)
  goto out;
 FUNC_5(&VAR_5.sc_selp);
 if (VAR_5.sc_state & VAR_1) {
  int VAR_7 = VAR_5.sc_pgid;
  FUNC_1();
  if (VAR_7 < 0)
   FUNC_2(-VAR_7, VAR_3);
  else
   FUNC_4(VAR_7, VAR_3);
  FUNC_0();
 }
 if (VAR_5.sc_state & VAR_2) {
  FUNC_6((caddr_t)VAR_6);
  VAR_5.sc_state &= ~VAR_2;
 }
out:
 FUNC_1();
}
