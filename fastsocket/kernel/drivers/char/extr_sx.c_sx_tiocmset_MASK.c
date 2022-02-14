
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct sx_port* driver_data; } ;
struct sx_port {int dummy; } ;
struct file {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct sx_port*) ;
 int FUNC_1 (struct sx_port*,int,int) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_2, struct file *VAR_3,
  unsigned int VAR_4, unsigned int VAR_5)
{
 struct sx_port *VAR_6 = VAR_2->driver_data;
 int VAR_7 = -1, VAR_8 = -1;

 if (VAR_4 & VAR_1)
  VAR_7 = 1;
 if (VAR_4 & VAR_0)
  VAR_8 = 1;
 if (VAR_5 & VAR_1)
  VAR_7 = 0;
 if (VAR_5 & VAR_0)
  VAR_8 = 0;

 FUNC_1(VAR_6, VAR_8, VAR_7);
 FUNC_0(VAR_6);
 return 0;
}
