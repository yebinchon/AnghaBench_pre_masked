
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int raw; } ;


 int FUNC_0 (struct tty_struct*) ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 char FUNC_2 (struct tty_struct*) ;
 char FUNC_3 (struct tty_struct*) ;
 int VAR_0 ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (struct tty_struct*) ;
 int FUNC_6 (struct tty_struct*,char,int ) ;

__attribute__((used)) static void FUNC_7(struct tty_struct *VAR_1, char VAR_2)
{
 if (VAR_1 == ((void*)0))
  return;

 if (FUNC_1(VAR_1) && !FUNC_0(VAR_1) && !VAR_1->raw) {
  if (VAR_2 == FUNC_3(VAR_1)) {
   FUNC_5(VAR_1);
   return;
  }
  else if (VAR_2 == FUNC_2(VAR_1)) {
   FUNC_4(VAR_1);
   return;
  }
 }

 FUNC_6(VAR_1, VAR_2, VAR_0);
}
