
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int t_winsize; int t_state; int t_cflag; int t_dev; } ;
typedef int dev_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct tty*) ;
 int FUNC_3 (int *,int) ;

int
FUNC_4(dev_t VAR_3, struct tty *VAR_4)
{
 FUNC_2(VAR_4);

 VAR_4->t_dev = VAR_3;

 if (!FUNC_0(VAR_4->t_state, VAR_2)) {
  FUNC_1(VAR_4->t_state, VAR_2);
  if (FUNC_0(VAR_4->t_cflag, VAR_0)) {
   FUNC_1(VAR_4->t_state, VAR_1); }
  FUNC_3(&VAR_4->t_winsize, sizeof(VAR_4->t_winsize));
 }

 return (0);
}
