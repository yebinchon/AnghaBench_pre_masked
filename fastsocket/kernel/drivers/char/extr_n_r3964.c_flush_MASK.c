
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* ops; } ;
struct r3964_info {struct tty_struct* tty; } ;
struct TYPE_2__ {int (* flush_chars ) (struct tty_struct*) ;} ;


 int FUNC_0 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_1(struct r3964_info *VAR_0)
{
 struct tty_struct *VAR_1 = VAR_0->tty;

 if (VAR_1 == ((void*)0) || VAR_1->ops->flush_chars == ((void*)0))
  return;
 VAR_1->ops->flush_chars(VAR_1);
}
