
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int flags; struct tty3270* driver_data; } ;
struct tty3270 {int kbd; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct file*,unsigned int,unsigned long) ;

__attribute__((used)) static int
FUNC_1(struct tty_struct *VAR_3, struct file *VAR_4,
       unsigned int VAR_5, unsigned long VAR_6)
{
 struct tty3270 *VAR_7;

 VAR_7 = VAR_3->driver_data;
 if (!VAR_7)
  return -VAR_1;
 if (VAR_3->flags & (1 << VAR_2))
  return -VAR_0;
 return FUNC_0(VAR_7->kbd, VAR_4, VAR_5, VAR_6);
}
