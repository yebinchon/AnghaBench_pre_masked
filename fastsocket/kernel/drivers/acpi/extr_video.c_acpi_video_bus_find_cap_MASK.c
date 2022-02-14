
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int _DOS; int _DOD; int _ROM; int _GPD; int _SPD; int _VPO; } ;
struct acpi_video_bus {TYPE_2__ cap; TYPE_1__* device; } ;
typedef int acpi_handle ;
struct TYPE_3__ {int handle; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int *) ;

__attribute__((used)) static void FUNC_2(struct acpi_video_bus *VAR_0)
{
 acpi_handle VAR_1;

 if (FUNC_0(FUNC_1(VAR_0->device->handle, "_DOS", &VAR_1))) {
  VAR_0->cap._DOS = 1;
 }
 if (FUNC_0(FUNC_1(VAR_0->device->handle, "_DOD", &VAR_1))) {
  VAR_0->cap._DOD = 1;
 }
 if (FUNC_0(FUNC_1(VAR_0->device->handle, "_ROM", &VAR_1))) {
  VAR_0->cap._ROM = 1;
 }
 if (FUNC_0(FUNC_1(VAR_0->device->handle, "_GPD", &VAR_1))) {
  VAR_0->cap._GPD = 1;
 }
 if (FUNC_0(FUNC_1(VAR_0->device->handle, "_SPD", &VAR_1))) {
  VAR_0->cap._SPD = 1;
 }
 if (FUNC_0(FUNC_1(VAR_0->device->handle, "_VPO", &VAR_1))) {
  VAR_0->cap._VPO = 1;
 }
}
