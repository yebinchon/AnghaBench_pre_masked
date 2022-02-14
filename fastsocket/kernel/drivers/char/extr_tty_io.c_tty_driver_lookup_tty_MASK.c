
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct tty_driver {struct tty_struct** ttys; TYPE_1__* ops; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct tty_struct* (* lookup ) (struct tty_driver*,struct inode*,int) ;} ;


 struct tty_struct* FUNC_0 (struct tty_driver*,struct inode*,int) ;

__attribute__((used)) static struct tty_struct *FUNC_1(struct tty_driver *VAR_0,
  struct inode *VAR_1, int VAR_2)
{
 struct tty_struct *VAR_3;

 if (VAR_0->ops->lookup)
  return VAR_0->ops->lookup(VAR_0, VAR_1, VAR_2);

 VAR_3 = VAR_0->ttys[VAR_2];
 return VAR_3;
}
