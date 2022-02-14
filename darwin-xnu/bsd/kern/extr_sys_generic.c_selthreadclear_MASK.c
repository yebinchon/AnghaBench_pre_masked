
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waitq {int dummy; } ;
struct selinfo {int si_flags; struct waitq si_waitq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct selinfo*) ;
 int FUNC_1 (struct waitq*) ;

void
FUNC_2(struct selinfo *VAR_4)
{
 struct waitq *VAR_5;

 if ((VAR_4->si_flags & VAR_2) == 0) {
  return;
 }
 if (VAR_4->si_flags & VAR_3) {
   FUNC_0(VAR_4);
   VAR_4->si_flags &= ~(VAR_3 | VAR_1);
 }
 VAR_4->si_flags |= VAR_0;
 VAR_4->si_flags &= ~VAR_2;

 VAR_5 = &VAR_4->si_waitq;
 FUNC_1(VAR_5);
}
