
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int t_state; int t_lflag; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct tty*) ;
 int FUNC_3 (int,struct tty*) ;

__attribute__((used)) static void
FUNC_4(int VAR_7, struct tty *VAR_8)
{
 FUNC_2(VAR_8);

 if (!FUNC_1(VAR_8->t_state, VAR_5))
  FUNC_0(VAR_8->t_lflag, VAR_4);
 if ((!FUNC_1(VAR_8->t_lflag, VAR_0) &&
      (VAR_7 != '\n' || !FUNC_1(VAR_8->t_lflag, VAR_2))) ||
     FUNC_1(VAR_8->t_lflag, VAR_3))
  return;
 if (FUNC_1(VAR_8->t_lflag, VAR_1) &&
     ((FUNC_1(VAR_7, VAR_6) <= 037 && VAR_7 != '\t' && VAR_7 != '\n') ||
     FUNC_1(VAR_7, VAR_6) == 0177)) {
  (void)FUNC_3('^', VAR_8);
  FUNC_0(VAR_7, ~VAR_6);
  if (VAR_7 == 0177)
   VAR_7 = '?';
  else
   VAR_7 += 'A' - 1;
 }
 (void)FUNC_3(VAR_7, VAR_8);
}
