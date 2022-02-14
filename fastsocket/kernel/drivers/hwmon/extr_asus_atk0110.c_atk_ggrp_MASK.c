
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int count; } ;
struct TYPE_5__ {int value; } ;
union acpi_object {scalar_t__ type; TYPE_3__ package; TYPE_2__ integer; } ;
typedef int u16 ;
struct device {int dummy; } ;
struct atk_data {int enumerate_handle; TYPE_1__* acpi_dev; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_buffer {union acpi_object* pointer; int length; } ;
typedef scalar_t__ acpi_status ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (union acpi_object*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 union acpi_object* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,struct acpi_object_list*,struct acpi_buffer*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct device*,char*,int ,...) ;

__attribute__((used)) static union acpi_object *FUNC_5(struct atk_data *VAR_6, u16 VAR_7)
{
 struct device *VAR_8 = &VAR_6->acpi_dev->dev;
 struct acpi_buffer VAR_9;
 acpi_status VAR_10;
 struct acpi_object_list VAR_11;
 union acpi_object VAR_12;
 union acpi_object *VAR_13;

 VAR_12.type = VAR_1;
 VAR_12.integer.value = VAR_7;
 VAR_11.count = 1;
 VAR_11.pointer = &VAR_12;

 VAR_9.length = VAR_0;
 VAR_10 = FUNC_2(VAR_6->enumerate_handle, ((void*)0), &VAR_11, &VAR_9);
 if (VAR_10 != VAR_3) {
  FUNC_4(VAR_8, "GGRP[%#x] ACPI exception: %s\n", VAR_7,
    FUNC_3(VAR_10));
  return FUNC_1(-VAR_4);
 }
 VAR_13 = VAR_9.pointer;
 if (VAR_13->type != VAR_2) {

  FUNC_0(VAR_13);
  return FUNC_1(-VAR_5);
 }

 if (VAR_13->package.count < 1) {
  FUNC_4(VAR_8, "GGRP[%#x] package is too small\n", VAR_7);
  FUNC_0(VAR_13);
  return FUNC_1(-VAR_4);
 }
 return VAR_13;
}
