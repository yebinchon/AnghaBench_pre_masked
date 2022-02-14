
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int echo_lock; } ;


 unsigned char VAR_0 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (unsigned char,struct tty_struct*) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(unsigned char VAR_1, struct tty_struct *VAR_2)
{
 FUNC_3(&VAR_2->echo_lock);

 if (VAR_1 == VAR_0) {
  FUNC_1(VAR_0, VAR_2);
  FUNC_1(VAR_0, VAR_2);
 } else {
  if (FUNC_0(VAR_2) && FUNC_2(VAR_1) && VAR_1 != '\t')
   FUNC_1(VAR_0, VAR_2);
  FUNC_1(VAR_1, VAR_2);
 }

 FUNC_4(&VAR_2->echo_lock);
}
