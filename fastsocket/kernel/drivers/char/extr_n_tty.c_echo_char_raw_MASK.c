
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int echo_lock; } ;


 unsigned char VAR_0 ;
 int FUNC_0 (unsigned char,struct tty_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(unsigned char VAR_1, struct tty_struct *VAR_2)
{
 FUNC_1(&VAR_2->echo_lock);

 if (VAR_1 == VAR_0) {
  FUNC_0(VAR_0, VAR_2);
  FUNC_0(VAR_0, VAR_2);
 } else {
  FUNC_0(VAR_1, VAR_2);
 }

 FUNC_2(&VAR_2->echo_lock);
}
