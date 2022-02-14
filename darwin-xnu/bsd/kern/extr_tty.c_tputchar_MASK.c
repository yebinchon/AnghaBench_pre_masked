
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int t_state; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct tty*) ;
 int FUNC_2 (struct tty*) ;
 int FUNC_3 (int,struct tty*) ;

int
FUNC_4(int VAR_1, struct tty *VAR_2)
{
 FUNC_1(VAR_2);

 if (!FUNC_0(VAR_2->t_state, VAR_0)) {
  return (-1);
 }
 if (VAR_1 == '\n')
  (void)FUNC_3('\r', VAR_2);
 (void)FUNC_3(VAR_1, VAR_2);
 FUNC_2(VAR_2);
 return (0);
}
