
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct sx_port* driver_data; } ;
struct sx_port {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct sx_port*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_0, struct file *VAR_1)
{
 struct sx_port *VAR_2 = VAR_0->driver_data;
 return FUNC_0(VAR_2);
}
