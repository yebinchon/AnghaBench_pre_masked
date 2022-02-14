
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num; } ;
struct cam_data {scalar_t__ open_count; TYPE_1__ vdev; int * ops; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct cam_data*) ;
 int FUNC_2 (struct cam_data*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(struct cam_data *VAR_0)
{
 FUNC_0("unregistering video\n");
 FUNC_4(&VAR_0->vdev);
 if (VAR_0->open_count) {
  FUNC_3(VAR_0->ops);
  FUNC_0("camera open -- setting ops to NULL\n");
  VAR_0->ops = ((void*)0);
 }





 if (!VAR_0->open_count) {
  FUNC_0("freeing camera\n");
  FUNC_2(VAR_0);
 }
}
