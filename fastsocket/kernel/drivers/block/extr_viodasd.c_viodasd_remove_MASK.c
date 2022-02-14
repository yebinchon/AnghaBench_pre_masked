
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct viodasd_device {int * dev; TYPE_1__* disk; } ;
struct vio_dev {size_t unit_address; } ;
struct TYPE_3__ {int queue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 struct viodasd_device* VAR_0 ;

__attribute__((used)) static int FUNC_3(struct vio_dev *VAR_1)
{
 struct viodasd_device *VAR_2;

 VAR_2 = &VAR_0[VAR_1->unit_address];
 if (VAR_2->disk) {
  FUNC_1(VAR_2->disk);
  FUNC_0(VAR_2->disk->queue);
  FUNC_2(VAR_2->disk);
  VAR_2->disk = ((void*)0);
 }
 VAR_2->dev = ((void*)0);
 return 0;
}
