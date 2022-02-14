
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {int lock; int status; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* start ) (struct watchdog_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct watchdog_device*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_6(struct watchdog_device *VAR_3)
{
 int VAR_4 = 0;

 FUNC_0(&VAR_3->lock);

 if (FUNC_4(VAR_2, &VAR_3->status)) {
  VAR_4 = -VAR_0;
  goto out_start;
 }

 if (FUNC_5(VAR_3))
  goto out_start;

 VAR_4 = VAR_3->ops->start(VAR_3);
 if (VAR_4 == 0)
  FUNC_2(VAR_1, &VAR_3->status);

out_start:
 FUNC_1(&VAR_3->lock);
 return VAR_4;
}
