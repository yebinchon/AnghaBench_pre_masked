
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_2__ {struct tty_struct* tty; } ;
struct async_struct {TYPE_1__ port; } ;


 int FUNC_0 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct async_struct *VAR_1 = (struct async_struct *) VAR_0;
 struct tty_struct *VAR_2;

 VAR_2 = VAR_1->port.tty;
 if (!VAR_2)
  return;

 FUNC_0(VAR_2);
}
