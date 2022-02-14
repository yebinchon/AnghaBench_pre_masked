
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {TYPE_3__* ops; int driver; } ;
struct TYPE_5__ {TYPE_1__* ser; } ;
struct cardstate {TYPE_2__ hw; } ;
struct TYPE_6__ {int (* tiocmset ) (struct tty_struct*,int *,unsigned int,unsigned int) ;} ;
struct TYPE_4__ {struct tty_struct* tty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_1 (struct tty_struct*,int *,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct cardstate *VAR_2, unsigned VAR_3, unsigned VAR_4)
{
 struct tty_struct *VAR_5 = VAR_2->hw.ser->tty;
 unsigned int VAR_6, VAR_7;

 if (!VAR_5 || !VAR_5->driver || !VAR_5->ops->tiocmset)
  return -VAR_1;
 VAR_6 = VAR_4 & ~VAR_3;
 VAR_7 = VAR_3 & ~VAR_4;
 if (!VAR_6 && !VAR_7)
  return 0;
 FUNC_0(VAR_0, "tiocmset set %x clear %x", VAR_6, VAR_7);
 return VAR_5->ops->tiocmset(VAR_5, ((void*)0), VAR_6, VAR_7);
}
