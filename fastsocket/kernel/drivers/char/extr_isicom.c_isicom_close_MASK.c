
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct isi_port* driver_data; } ;
struct tty_port {int dummy; } ;
struct isi_port {struct tty_port port; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct tty_port*) ;
 int FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (struct isi_port*,int ,char*) ;
 int FUNC_3 (struct tty_port*,struct tty_struct*) ;
 scalar_t__ FUNC_4 (struct tty_port*,struct tty_struct*,struct file*) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_0, struct file *VAR_1)
{
 struct isi_port *VAR_2 = VAR_0->driver_data;
 struct tty_port *VAR_3 = &VAR_2->port;
 if (FUNC_2(VAR_2, VAR_0->name, "isicom_close"))
  return;

 if (FUNC_4(VAR_3, VAR_0, VAR_1) == 0)
  return;
 FUNC_0(VAR_3);
 FUNC_1(VAR_0);
 FUNC_3(VAR_3, VAR_0);
}
