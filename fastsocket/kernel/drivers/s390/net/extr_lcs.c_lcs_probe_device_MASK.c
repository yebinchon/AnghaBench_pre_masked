
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lcs_card {scalar_t__ thread_running_mask; scalar_t__ thread_allowed_mask; scalar_t__ thread_start_mask; int kernel_thread_starter; struct ccwgroup_device* gdev; } ;
struct TYPE_6__ {int kobj; } ;
struct ccwgroup_device {TYPE_1__** cdev; TYPE_2__ dev; } ;
struct TYPE_5__ {void* handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int,int ,char*) ;
 int FUNC_2 (int,int ,char*,int) ;
 int FUNC_3 (TYPE_2__*,struct lcs_card*) ;
 int FUNC_4 (TYPE_2__*) ;
 struct lcs_card* FUNC_5 () ;
 int VAR_2 ;
 int FUNC_6 (struct lcs_card*) ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static int
FUNC_9(struct ccwgroup_device *VAR_6)
{
 struct lcs_card *VAR_7;
 int VAR_8;

 if (!FUNC_4(&VAR_6->dev))
  return -VAR_0;

 FUNC_1(2, VAR_5, "add_dev");
        VAR_7 = FUNC_5();
        if (!VAR_7) {
  FUNC_2(2, VAR_5, "  rc%d", -VAR_1);
  FUNC_7(&VAR_6->dev);
                return -VAR_1;
        }
 VAR_8 = FUNC_8(&VAR_6->dev.kobj, &VAR_2);
 if (VAR_8) {
  FUNC_6(VAR_7);
  FUNC_7(&VAR_6->dev);
  return VAR_8;
        }
 FUNC_3(&VAR_6->dev, VAR_7);
 VAR_6->cdev[0]->handler = VAR_3;
 VAR_6->cdev[1]->handler = VAR_3;
 VAR_7->gdev = VAR_6;
 FUNC_0(&VAR_7->kernel_thread_starter, VAR_4);
 VAR_7->thread_start_mask = 0;
 VAR_7->thread_allowed_mask = 0;
 VAR_7->thread_running_mask = 0;
        return 0;
}
