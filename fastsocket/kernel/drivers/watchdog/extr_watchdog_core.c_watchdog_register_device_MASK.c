
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct watchdog_device {scalar_t__ min_timeout; scalar_t__ max_timeout; int id; int dev; int parent; TYPE_2__ cdev; int lock; TYPE_1__* ops; int * info; } ;
struct TYPE_3__ {int * stop; int * start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int *,char*,int) ;
 int FUNC_3 (int *,int,int ,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int VAR_4 ;
 int FUNC_7 (struct watchdog_device*) ;
 int FUNC_8 (struct watchdog_device*) ;
 int VAR_5 ;

int FUNC_9(struct watchdog_device *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 if (VAR_6 == ((void*)0) || VAR_6->info == ((void*)0) || VAR_6->ops == ((void*)0))
  return -VAR_1;


 if (VAR_6->ops->start == ((void*)0) || VAR_6->ops->stop == ((void*)0))
  return -VAR_1;





 if (VAR_6->min_timeout > VAR_6->max_timeout) {
  FUNC_6("Invalid min and max timeout values, resetting to 0!\n");
  VAR_6->min_timeout = 0;
  VAR_6->max_timeout = 0;
 }







 FUNC_5(&VAR_6->lock);
 VAR_8 = FUNC_3(&VAR_5, 0, VAR_3, VAR_2);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_6->id = VAR_8;

 VAR_7 = FUNC_7(VAR_6);
 if (VAR_7) {
  FUNC_4(&VAR_5, VAR_8);
  if (!(VAR_8 == 0 && VAR_7 == -VAR_0))
   return VAR_7;


  VAR_8 = FUNC_3(&VAR_5, 1, VAR_3, VAR_2);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_6->id = VAR_8;

  VAR_7 = FUNC_7(VAR_6);
  if (VAR_7) {
   FUNC_4(&VAR_5, VAR_8);
   return VAR_7;
  }
 }

 VAR_9 = VAR_6->cdev.dev;
 VAR_6->dev = FUNC_2(VAR_4, VAR_6->parent, VAR_9,
     ((void*)0), "watchdog%d", VAR_6->id);
 if (FUNC_0(VAR_6->dev)) {
  FUNC_8(VAR_6);
  FUNC_4(&VAR_5, VAR_8);
  VAR_7 = FUNC_1(VAR_6->dev);
  return VAR_7;
 }

 return 0;
}
