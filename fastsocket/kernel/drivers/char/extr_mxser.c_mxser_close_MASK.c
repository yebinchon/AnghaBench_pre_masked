
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ index; struct mxser_port* driver_data; } ;
struct tty_port {int dummy; } ;
struct mxser_port {struct tty_port port; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct tty_struct*,struct tty_port*) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_port*,struct tty_struct*) ;
 scalar_t__ FUNC_3 (struct tty_port*,struct tty_struct*,struct file*) ;
 int FUNC_4 (struct tty_port*,int *) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_1, struct file *VAR_2)
{
 struct mxser_port *VAR_3 = VAR_1->driver_data;
 struct tty_port *VAR_4 = &VAR_3->port;

 if (VAR_1->index == VAR_0)
  return;
 if (FUNC_3(VAR_4, VAR_1, VAR_2) == 0)
  return;
 FUNC_0(VAR_1, VAR_4);
 FUNC_1(VAR_1);


 FUNC_2(VAR_4, VAR_1);
 FUNC_4(VAR_4, ((void*)0));
}
