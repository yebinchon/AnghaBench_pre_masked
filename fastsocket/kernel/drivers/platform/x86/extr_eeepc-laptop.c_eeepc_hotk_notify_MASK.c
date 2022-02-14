
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
 int FUNC_0 (int ,int ,int,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,int,scalar_t__) ;
 int FUNC_2 (int *) ;
 struct key_entry* FUNC_3 (int) ;
 TYPE_2__* VAR_4 ;
 int FUNC_4 (scalar_t__,int ,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct acpi_device *VAR_5, u32 VAR_6)
{
 static struct key_entry *VAR_7;
 u16 VAR_8;
 int VAR_9 = -VAR_1;

 if (!VAR_4)
  return;
 if (VAR_6 > VAR_0)
  return;
 if (VAR_6 >= VAR_3 && VAR_6 <= VAR_2)
  VAR_9 = FUNC_6();
 VAR_8 = VAR_4->event_count[VAR_6 % 128]++;
 FUNC_1(VAR_4->device, VAR_6, VAR_8);
 FUNC_0(VAR_4->device->pnp.device_class,
     FUNC_2(&VAR_4->device->dev), VAR_6,
     VAR_8);
 if (VAR_4->inputdev) {
  if (VAR_9 != -VAR_1) {



   if (VAR_9 < 0)
    VAR_9 = VAR_6;
   else
    VAR_9 += VAR_3;
   if (VAR_6 < VAR_9)
    VAR_6 = VAR_3;
   else if (VAR_6 > VAR_9)
    VAR_6 = VAR_3 + 2;
   else
    VAR_6 = VAR_3 + 1;
  }
  VAR_7 = FUNC_3(VAR_6);
  if (VAR_7) {
   switch (VAR_7->type) {
   case 128:
    FUNC_4(VAR_4->inputdev, VAR_7->keycode,
       1);
    FUNC_5(VAR_4->inputdev);
    FUNC_4(VAR_4->inputdev, VAR_7->keycode,
       0);
    FUNC_5(VAR_4->inputdev);
    break;
   }
  }
 }
}
