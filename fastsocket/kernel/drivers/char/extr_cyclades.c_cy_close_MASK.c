
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct cyclades_port* driver_data; } ;
struct file {int dummy; } ;
struct cyclades_port {int port; } ;


 scalar_t__ FUNC_0 (struct cyclades_port*,int ,char*) ;
 int FUNC_1 (int *,struct tty_struct*,struct file*) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_0, struct file *VAR_1)
{
 struct cyclades_port *VAR_2 = VAR_0->driver_data;
 if (!VAR_2 || FUNC_0(VAR_2, VAR_0->name, "cy_close"))
  return;
 FUNC_1(&VAR_2->port, VAR_0, VAR_1);
}
