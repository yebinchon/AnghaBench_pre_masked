
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selinfo {int si_flags; int si_waitq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,int ,int ) ;

void
FUNC_1(struct selinfo *VAR_7)
{

 if ((VAR_7->si_flags & VAR_2) == 0) {
  return;
 }

 if (VAR_7->si_flags & VAR_1) {
  VAR_6++;
  VAR_7->si_flags &= ~VAR_1;




 }

 if (VAR_7->si_flags & VAR_3) {
  FUNC_0(&VAR_7->si_waitq, VAR_0,
       VAR_4, VAR_5);
  VAR_7->si_flags &= ~VAR_3;
 }

}
