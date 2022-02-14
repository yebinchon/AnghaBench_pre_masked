
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct adapter {int intrregistered; TYPE_3__* netdev; } ;
struct TYPE_6__ {int name; int dev; int irq; } ;
struct TYPE_4__ {int flags; int lock; } ;
struct TYPE_5__ {TYPE_1__ driver_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (int ,int *,int ,int ,TYPE_3__*) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct adapter *VAR_4)
{
 if (!VAR_4->intrregistered) {
  int VAR_5;

  FUNC_3(&VAR_2.driver_lock.lock,
     VAR_2.driver_lock.flags);

  VAR_5 = FUNC_1(VAR_4->netdev->irq,
         &VAR_3,
         VAR_0,
         VAR_4->netdev->name, VAR_4->netdev);

  FUNC_2(&VAR_2.driver_lock.lock,
     VAR_2.driver_lock.flags);

  if (VAR_5) {
   FUNC_0(&VAR_4->netdev->dev,
    "request_irq (%s) FAILED [%x]\n",
    VAR_4->netdev->name, VAR_5);
   return VAR_5;
  }
  VAR_4->intrregistered = 1;
 }
 return VAR_1;
}
