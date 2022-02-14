
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct jmb38x_ms_host {scalar_t__ addr; TYPE_2__* chip; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct jmb38x_ms_host *VAR_8)
{
 int VAR_9;

 FUNC_4(VAR_4 | VAR_2
        | FUNC_3(VAR_8->addr + VAR_1),
        VAR_8->addr + VAR_1);
 FUNC_1();

 for (VAR_9 = 0; VAR_9 < 20; ++VAR_9) {
  if (!(VAR_4
        & FUNC_3(VAR_8->addr + VAR_1)))
   goto reset_next;

  FUNC_2(20);
 }
 FUNC_0(&VAR_8->chip->pdev->dev, "reset_req timeout\n");


reset_next:
 FUNC_4(VAR_3 | VAR_2
        | FUNC_3(VAR_8->addr + VAR_1),
        VAR_8->addr + VAR_1);
 FUNC_1();

 for (VAR_9 = 0; VAR_9 < 20; ++VAR_9) {
  if (!(VAR_3
        & FUNC_3(VAR_8->addr + VAR_1)))
   goto reset_ok;

  FUNC_2(20);
 }
 FUNC_0(&VAR_8->chip->pdev->dev, "reset timeout\n");
 return -VAR_0;

reset_ok:
 FUNC_1();
 FUNC_4(VAR_6, VAR_8->addr + VAR_5);
 FUNC_4(VAR_6, VAR_8->addr + VAR_7);
 return 0;
}
