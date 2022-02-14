
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct tty_port {int dummy; } ;
struct file {int dummy; } ;
struct channel {scalar_t__ event; struct tty_port port; } ;


 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct channel*,struct tty_struct*) ;
 int FUNC_2 (struct tty_port*,struct tty_struct*) ;
 scalar_t__ FUNC_3 (struct tty_port*,struct tty_struct*,struct file*) ;
 int FUNC_4 (struct tty_port*,int *) ;
 struct channel* FUNC_5 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_6(struct tty_struct *VAR_0, struct file *VAR_1)
{
 struct channel *VAR_2;
 struct tty_port *VAR_3;




 VAR_2 = FUNC_5(VAR_0);
 if (VAR_2 == ((void*)0))
  return;
 VAR_3 = &VAR_2->port;

 if (FUNC_3(VAR_3, VAR_0, VAR_1) == 0)
  return;

 FUNC_0(VAR_0);
 FUNC_1(VAR_2, VAR_0);

 FUNC_2(VAR_3, VAR_0);
 VAR_2->event = 0;
 FUNC_4(VAR_3, ((void*)0));
}
