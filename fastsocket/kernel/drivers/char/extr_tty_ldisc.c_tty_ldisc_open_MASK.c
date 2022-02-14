
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int flags; } ;
struct tty_ldisc {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* open ) (struct tty_struct*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_1, struct tty_ldisc *VAR_2)
{
 FUNC_0(FUNC_2(VAR_0, &VAR_1->flags));
 if (VAR_2->ops->open)
  return VAR_2->ops->open(VAR_1);
 return 0;
}
