
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpc5200_wdt {int count; int io_lock; TYPE_1__* regs; } ;
struct TYPE_2__ {int mode; int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct mpc5200_wdt *VAR_3)
{
 FUNC_1(&VAR_3->io_lock);

 FUNC_0(&VAR_3->regs->mode, 0);

 FUNC_0(&VAR_3->regs->count, 0x0 | VAR_3->count);

 FUNC_0(&VAR_3->regs->mode, VAR_0 | VAR_2 |
      VAR_1);
 FUNC_2(&VAR_3->io_lock);

 return 0;
}
