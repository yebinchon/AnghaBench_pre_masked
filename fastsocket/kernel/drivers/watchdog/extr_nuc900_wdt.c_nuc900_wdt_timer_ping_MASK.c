
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* pdev; int timer; int next_heartbeat; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_3)
{
 if (FUNC_3(VAR_1, VAR_2->next_heartbeat)) {
  FUNC_2();
  FUNC_1(&VAR_2->timer, VAR_1 + VAR_0);
 } else
  FUNC_0(&VAR_2->pdev->dev, "Will reset the machine !\n");
}
