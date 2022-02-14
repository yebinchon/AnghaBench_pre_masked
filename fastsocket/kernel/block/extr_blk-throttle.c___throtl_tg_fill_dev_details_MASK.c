
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct throtl_grp {TYPE_2__ blkg; } ;
struct throtl_data {TYPE_1__* queue; } ;
struct backing_dev_info {scalar_t__ dev; } ;
struct TYPE_3__ {struct backing_dev_info backing_dev_info; } ;


 int FUNC_0 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,char*,unsigned int*,unsigned int*) ;

__attribute__((used)) static void
FUNC_3(struct throtl_data *VAR_0, struct throtl_grp *VAR_1)
{
 struct backing_dev_info *VAR_2 = &VAR_0->queue->backing_dev_info;
 unsigned int VAR_3, VAR_4;

 if (!VAR_1 || VAR_1->blkg.dev)
  return;






 if (VAR_2->dev && FUNC_1(VAR_2->dev)) {
  FUNC_2(FUNC_1(VAR_2->dev), "%u:%u", &VAR_3, &VAR_4);
  VAR_1->blkg.dev = FUNC_0(VAR_3, VAR_4);
 }
}
