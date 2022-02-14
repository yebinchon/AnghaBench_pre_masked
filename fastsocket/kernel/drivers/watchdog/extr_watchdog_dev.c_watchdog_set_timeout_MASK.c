
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct watchdog_device {unsigned int max_timeout; unsigned int min_timeout; int lock; TYPE_1__* ops; int status; TYPE_2__* info; } ;
struct TYPE_4__ {int options; } ;
struct TYPE_3__ {int (* set_timeout ) (struct watchdog_device*,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct watchdog_device*,unsigned int) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_5,
       unsigned int VAR_6)
{
 int VAR_7;

 if ((VAR_5->ops->set_timeout == ((void*)0)) ||
     !(VAR_5->info->options & VAR_3))
  return -VAR_2;

 if ((VAR_5->max_timeout != 0) &&
     (VAR_6 < VAR_5->min_timeout || VAR_6 > VAR_5->max_timeout))
  return -VAR_0;

 FUNC_0(&VAR_5->lock);

 if (FUNC_3(VAR_4, &VAR_5->status)) {
  VAR_7 = -VAR_1;
  goto out_timeout;
 }

 VAR_7 = VAR_5->ops->set_timeout(VAR_5, VAR_6);

out_timeout:
 FUNC_1(&VAR_5->lock);
 return VAR_7;
}
