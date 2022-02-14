
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct async_struct {int event; struct tty_struct* tty; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_1)
{
 struct async_struct *VAR_2 = (struct async_struct *) VAR_1;
 struct tty_struct *VAR_3;

 VAR_3 = VAR_2->tty;
 if (!VAR_3)
  return;

 if (FUNC_0(VAR_0, &VAR_2->event))
  FUNC_1(VAR_3);
}
