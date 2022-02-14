
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct key_entry {int type; int keycode; } ;
struct acpi_device {int dummy; } ;
struct TYPE_4__ {int device_class; } ;
struct TYPE_6__ {int dev; TYPE_1__ pnp; } ;
struct TYPE_5__ {scalar_t__ inputdev; TYPE_3__* device; int * event_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int FUNC_0 (int ,int ,int,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,int,scalar_t__) ;
 struct key_entry* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 TYPE_2__* VAR_5 ;
 int FUNC_4 (scalar_t__,int ,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int,int ) ;

__attribute__((used)) static void FUNC_8(struct acpi_device *VAR_6, u32 VAR_7)
{
 static struct key_entry *VAR_8;
 u16 VAR_9;


 if (!VAR_5)
  return;





 if (VAR_7 == VAR_1) {
  FUNC_7(((void*)0), 1, VAR_4);
  FUNC_6(VAR_3);
 } else if (VAR_7 == VAR_0) {
  FUNC_7(((void*)0), 0, VAR_4);
  FUNC_6(VAR_2);
 }

 VAR_9 = VAR_5->event_count[VAR_7 % 128]++;
 FUNC_1(VAR_5->device, VAR_7, VAR_9);
 FUNC_0(VAR_5->device->pnp.device_class,
     FUNC_3(&VAR_5->device->dev), VAR_7,
     VAR_9);

 if (VAR_5->inputdev) {
  VAR_8 = FUNC_2(VAR_7);
  if (!VAR_8)
   return ;

  switch (VAR_8->type) {
  case 128:
   FUNC_4(VAR_5->inputdev, VAR_8->keycode, 1);
   FUNC_5(VAR_5->inputdev);
   FUNC_4(VAR_5->inputdev, VAR_8->keycode, 0);
   FUNC_5(VAR_5->inputdev);
   break;
  }
 }
}
