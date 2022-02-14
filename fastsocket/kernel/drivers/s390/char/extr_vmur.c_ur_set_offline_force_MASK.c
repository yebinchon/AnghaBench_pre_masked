
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urdev {TYPE_1__* char_device; int ref_count; } ;
struct ccw_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;
 struct urdev* FUNC_4 (struct ccw_device*) ;
 int FUNC_5 (struct urdev*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct ccw_device *VAR_3, int VAR_4)
{
 struct urdev *VAR_5;
 int VAR_6;

 FUNC_0("ur_set_offline: cdev=%p\n", VAR_3);
 VAR_5 = FUNC_4(VAR_3);
 if (!VAR_5)

  return -VAR_1;
 if (!VAR_5->char_device) {

  VAR_6 = -VAR_0;
  goto fail_urdev_put;
 }
 if (!VAR_4 && (FUNC_1(&VAR_5->ref_count) > 2)) {

  FUNC_0("ur_set_offline: BUSY\n");
  VAR_6 = -VAR_0;
  goto fail_urdev_put;
 }
 FUNC_3(VAR_2, VAR_5->char_device->dev);
 FUNC_2(VAR_5->char_device);
 VAR_5->char_device = ((void*)0);
 VAR_6 = 0;

fail_urdev_put:
 FUNC_5(VAR_5);
 return VAR_6;
}
