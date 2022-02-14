
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * parent; } ;
struct TYPE_6__ {int version; void* product; void* vendor; int bustype; } ;
struct input_dev {char* name; int* evbit; TYPE_3__ dev; TYPE_2__ id; scalar_t__ keycodemax; scalar_t__ keycodesize; int keybit; int phys; } ;
struct em28xx {int sbutton_query_work; struct input_dev* sbutton_input_dev; TYPE_4__* udev; int snapshot_button_path; } ;
struct TYPE_5__ {int idProduct; int idVendor; } ;
struct TYPE_8__ {int dev; TYPE_1__ descriptor; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_5 ;
 struct input_dev* FUNC_4 () ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct input_dev*) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,char*,int) ;
 int FUNC_12 (TYPE_4__*,int ,int) ;

void FUNC_13(struct em28xx *VAR_6)
{
 struct input_dev *VAR_7;
 int VAR_8;

 FUNC_3("Registering snapshot button...\n");
 VAR_7 = FUNC_4();
 if (!VAR_7) {
  FUNC_2("input_allocate_device failed\n");
  return;
 }

 FUNC_12(VAR_6->udev, VAR_6->snapshot_button_path,
        sizeof(VAR_6->snapshot_button_path));
 FUNC_11(VAR_6->snapshot_button_path, "/sbutton",
  sizeof(VAR_6->snapshot_button_path));
 FUNC_1(&VAR_6->sbutton_query_work, VAR_5);

 VAR_7->name = "em28xx snapshot button";
 VAR_7->phys = VAR_6->snapshot_button_path;
 VAR_7->evbit[0] = FUNC_0(VAR_3) | FUNC_0(VAR_4);
 FUNC_10(VAR_2, VAR_7->keybit);
 VAR_7->keycodesize = 0;
 VAR_7->keycodemax = 0;
 VAR_7->id.bustype = VAR_0;
 VAR_7->id.vendor = FUNC_7(VAR_6->udev->descriptor.idVendor);
 VAR_7->id.product = FUNC_7(VAR_6->udev->descriptor.idProduct);
 VAR_7->id.version = 1;
 VAR_7->dev.parent = &VAR_6->udev->dev;

 VAR_8 = FUNC_6(VAR_7);
 if (VAR_8) {
  FUNC_2("input_register_device failed\n");
  FUNC_5(VAR_7);
  return;
 }

 VAR_6->sbutton_input_dev = VAR_7;
 FUNC_9(&VAR_6->sbutton_query_work,
         FUNC_8(VAR_1));
 return;

}
