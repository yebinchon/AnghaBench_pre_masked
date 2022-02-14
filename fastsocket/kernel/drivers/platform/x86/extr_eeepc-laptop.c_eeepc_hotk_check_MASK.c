
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct acpi_buffer {int * member_1; int member_0; } ;
struct TYPE_4__ {scalar_t__ present; } ;
struct TYPE_6__ {TYPE_1__ status; } ;
struct TYPE_5__ {int cm_supported; int handle; int init_flag; TYPE_3__* device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 () ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (int ,char*,int *) ;
 scalar_t__ FUNC_6 (int ,char*,int ,struct acpi_buffer*) ;

__attribute__((used)) static int FUNC_7(void)
{
 struct acpi_buffer VAR_4 = { &VAR_0, ((void*)0) };
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3->device);
 if (VAR_5)
  return VAR_5;
 if (VAR_3->device->status.present) {
  if (FUNC_6(VAR_3->handle, "INIT", VAR_3->init_flag,
        &VAR_4)) {
   FUNC_2("Hotkey initialization failed\n");
   return -VAR_2;
  } else {
   FUNC_4("Hotkey init flags 0x%x\n", VAR_3->init_flag);
  }

  if (FUNC_5(VAR_3->handle, "CMSG"
       , &VAR_3->cm_supported)) {
   FUNC_2("Get control methods supported failed\n");
   return -VAR_2;
  } else {
   FUNC_1();
   FUNC_3("Get control methods supported: 0x%x\n",
    VAR_3->cm_supported);
  }
 } else {
  FUNC_2("Hotkey device not present, aborting\n");
  return -VAR_1;
 }
 return 0;
}
