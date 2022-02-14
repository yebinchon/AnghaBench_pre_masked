
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int index; int count; } ;
struct tty_driver {struct tty_struct** ttys; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* install ) (struct tty_driver*,struct tty_struct*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct tty_driver*,struct tty_struct*) ;
 int FUNC_1 (struct tty_driver*) ;
 scalar_t__ FUNC_2 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_3(struct tty_driver *VAR_1,
      struct tty_struct *VAR_2)
{
 int VAR_3 = VAR_2->index;

 if (VAR_1->ops->install)
  return VAR_1->ops->install(VAR_1, VAR_2);

 if (FUNC_2(VAR_2) == 0) {
  FUNC_1(VAR_1);
  VAR_2->count++;
  VAR_1->ttys[VAR_3] = VAR_2;
  return 0;
 }
 return -VAR_0;
}
