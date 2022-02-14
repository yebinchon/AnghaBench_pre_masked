
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tps_key_entry {int keycode; scalar_t__ code; } ;
struct topstar_hkey {TYPE_2__* inputdev; } ;
struct TYPE_5__ {int bustype; } ;
struct TYPE_6__ {char* name; char* phys; int keybit; int evbit; int setkeycode; int getkeycode; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;
 struct tps_key_entry* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct topstar_hkey *VAR_6)
{
 struct tps_key_entry *VAR_7;

 VAR_6->inputdev = FUNC_0();
 if (!VAR_6->inputdev) {
  FUNC_3("Unable to allocate input device\n");
  return -VAR_1;
 }
 VAR_6->inputdev->name = "Topstar Laptop extra buttons";
 VAR_6->inputdev->phys = "topstar/input0";
 VAR_6->inputdev->id.bustype = VAR_0;
 VAR_6->inputdev->getkeycode = VAR_3;
 VAR_6->inputdev->setkeycode = VAR_5;
 for (VAR_7 = VAR_4; VAR_7->code; VAR_7++) {
  FUNC_4(VAR_2, VAR_6->inputdev->evbit);
  FUNC_4(VAR_7->keycode, VAR_6->inputdev->keybit);
 }
 if (FUNC_2(VAR_6->inputdev)) {
  FUNC_3("Unable to register input device\n");
  FUNC_1(VAR_6->inputdev);
  return -VAR_1;
 }

 return 0;
}
