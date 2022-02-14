
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vpfe_device {size_t std_index; int initialized; int pdev; int v4l2_dev; scalar_t__ current_input; } ;
struct TYPE_4__ {int (* open ) (int ) ;} ;
struct TYPE_6__ {TYPE_1__ hw_ops; int owner; } ;
struct TYPE_5__ {int std_id; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct vpfe_device*,int *) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static int FUNC_6(struct vpfe_device *VAR_4)
{
 int VAR_5 = 0;


 VAR_4->current_input = 0;


 VAR_4->std_index = 0;


 VAR_5 = FUNC_5(VAR_4,
    &VAR_3[VAR_4->std_index].std_id);
 if (VAR_5)
  return VAR_5;


 FUNC_0(&VAR_2);
 if (((void*)0) == VAR_1) {
  FUNC_4(&VAR_4->v4l2_dev, "ccdc device not registered\n");
  VAR_5 = -VAR_0;
  goto unlock;
 }

 if (!FUNC_3(VAR_1->owner)) {
  FUNC_4(&VAR_4->v4l2_dev, "Couldn't lock ccdc module\n");
  VAR_5 = -VAR_0;
  goto unlock;
 }
 VAR_5 = VAR_1->hw_ops.open(VAR_4->pdev);
 if (!VAR_5)
  VAR_4->initialized = 1;
unlock:
 FUNC_1(&VAR_2);
 return VAR_5;
}
