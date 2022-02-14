
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {int lock; TYPE_1__* ops; int status; } ;
struct TYPE_2__ {unsigned int (* status ) (struct watchdog_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (struct watchdog_device*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_3,
       unsigned int *VAR_4)
{
 int VAR_5 = 0;

 *VAR_4 = 0;
 if (!VAR_3->ops->status)
  return -VAR_1;

 FUNC_0(&VAR_3->lock);

 if (FUNC_3(VAR_2, &VAR_3->status)) {
  VAR_5 = -VAR_0;
  goto out_status;
 }

 *VAR_4 = VAR_3->ops->status(VAR_3);

out_status:
 FUNC_1(&VAR_3->lock);
 return VAR_5;
}
