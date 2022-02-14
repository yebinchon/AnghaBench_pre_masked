
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * parent; int debug; } ;
struct stk_camera {TYPE_2__ vdev; TYPE_1__* interface; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct stk_camera *VAR_3)
{
 int VAR_4;

 VAR_3->vdev = VAR_2;
 VAR_3->vdev.debug = VAR_1;
 VAR_3->vdev.parent = &VAR_3->interface->dev;
 VAR_4 = FUNC_3(&VAR_3->vdev, VAR_0, -1);
 if (VAR_4)
  FUNC_0("v4l registration failed\n");
 else
  FUNC_1("Syntek USB2.0 Camera is now controlling device %s\n",
    FUNC_2(&VAR_3->vdev));
 return VAR_4;
}
