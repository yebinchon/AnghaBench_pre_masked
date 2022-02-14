
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zcrypt_device {TYPE_2__* ap_dev; int list; TYPE_1__* ops; } ;
struct TYPE_6__ {int kobj; } ;
struct TYPE_5__ {TYPE_3__ device; } ;
struct TYPE_4__ {scalar_t__ rng; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct zcrypt_device*) ;
 int FUNC_6 () ;

void FUNC_7(struct zcrypt_device *VAR_3)
{
 if (VAR_3->ops->rng)
  FUNC_6();
 FUNC_2(&VAR_2);
 VAR_1--;
 FUNC_0(&VAR_3->list);
 FUNC_3(&VAR_2);
 FUNC_4(&VAR_3->ap_dev->device.kobj,
      &VAR_0);
 FUNC_1(&VAR_3->ap_dev->device);
 FUNC_5(VAR_3);
}
