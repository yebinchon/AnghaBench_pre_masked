
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_device {int dev; } ;
struct TYPE_2__ {scalar_t__ start; scalar_t__ end; } ;
struct mpc5200_wdt {TYPE_1__ mem; int regs; int miscdev; } ;


 struct mpc5200_wdt* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mpc5200_wdt*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mpc5200_wdt*) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct of_device *VAR_0)
{
 struct mpc5200_wdt *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_4(VAR_1);
 FUNC_3(&VAR_1->miscdev);
 FUNC_1(VAR_1->regs);
 FUNC_5(VAR_1->mem.start, VAR_1->mem.end - VAR_1->mem.start + 1);
 FUNC_2(VAR_1);

 return 0;
}
