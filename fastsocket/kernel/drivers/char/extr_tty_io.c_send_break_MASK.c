
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {TYPE_1__* ops; TYPE_2__* driver; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int (* break_ctl ) (struct tty_struct*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct tty_struct*,unsigned int) ;
 int FUNC_3 (struct tty_struct*,int) ;
 int FUNC_4 (struct tty_struct*,int) ;
 scalar_t__ FUNC_5 (struct tty_struct*,int ) ;
 int FUNC_6 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_7(struct tty_struct *VAR_3, unsigned int VAR_4)
{
 int VAR_5;

 if (VAR_3->ops->break_ctl == ((void*)0))
  return 0;

 if (VAR_3->driver->flags & VAR_1)
  VAR_5 = VAR_3->ops->break_ctl(VAR_3, VAR_4);
 else {

  if (FUNC_5(VAR_3, 0) < 0)
   return -VAR_0;
  VAR_5 = VAR_3->ops->break_ctl(VAR_3, -1);
  if (VAR_5)
   goto out;
  if (!FUNC_1(VAR_2))
   FUNC_0(VAR_4);
  VAR_5 = VAR_3->ops->break_ctl(VAR_3, 0);
out:
  FUNC_6(VAR_3);
  if (FUNC_1(VAR_2))
   VAR_5 = -VAR_0;
 }
 return VAR_5;
}
