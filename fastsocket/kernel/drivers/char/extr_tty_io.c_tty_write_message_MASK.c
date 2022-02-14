
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* ops; int flags; int atomic_write_lock; } ;
struct TYPE_2__ {int (* write ) (struct tty_struct*,char*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct tty_struct*,char*,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct tty_struct*) ;
 int FUNC_6 () ;

void FUNC_7(struct tty_struct *VAR_1, char *VAR_2)
{
 FUNC_0();
 if (VAR_1) {
  FUNC_1(&VAR_1->atomic_write_lock);
  if (VAR_1->ops->write && !FUNC_4(VAR_0, &VAR_1->flags))
   VAR_1->ops->write(VAR_1, VAR_2, FUNC_2(VAR_2));
  FUNC_5(VAR_1);
 }
 FUNC_6();
 return;
}
