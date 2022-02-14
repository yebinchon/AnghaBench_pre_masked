
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {int lock; TYPE_1__* ops; int status; } ;
struct TYPE_2__ {int (* ioctl ) (struct watchdog_device*,unsigned int,unsigned long) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct watchdog_device*,unsigned int,unsigned long) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_3, unsigned int VAR_4,
       unsigned long VAR_5)
{
 int VAR_6;

 if (!VAR_3->ops->ioctl)
  return -VAR_1;

 FUNC_0(&VAR_3->lock);

 if (FUNC_3(VAR_2, &VAR_3->status)) {
  VAR_6 = -VAR_0;
  goto out_ioctl;
 }

 VAR_6 = VAR_3->ops->ioctl(VAR_3, VAR_4, VAR_5);

out_ioctl:
 FUNC_1(&VAR_3->lock);
 return VAR_6;
}
