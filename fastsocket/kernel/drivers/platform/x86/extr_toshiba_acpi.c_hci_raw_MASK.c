
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int count; TYPE_3__* elements; } ;
struct TYPE_5__ {int value; } ;
union acpi_object {TYPE_4__ package; TYPE_1__ integer; int type; } ;
typedef int u32 ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_buffer {int length; union acpi_object* pointer; } ;
typedef int out_objs ;
typedef scalar_t__ acpi_status ;
struct TYPE_6__ {int value; } ;
struct TYPE_7__ {TYPE_2__ integer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,char*,struct acpi_object_list*,struct acpi_buffer*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static acpi_status FUNC_1(const u32 VAR_4[VAR_2], u32 VAR_5[VAR_2])
{
 struct acpi_object_list VAR_6;
 union acpi_object VAR_7[VAR_2];
 struct acpi_buffer VAR_8;
 union acpi_object VAR_9[VAR_2 + 1];
 acpi_status VAR_10;
 int VAR_11;

 VAR_6.count = VAR_2;
 VAR_6.pointer = VAR_7;
 for (VAR_11 = 0; VAR_11 < VAR_2; ++VAR_11) {
  VAR_7[VAR_11].type = VAR_0;
  VAR_7[VAR_11].integer.value = VAR_4[VAR_11];
 }

 VAR_8.length = sizeof(VAR_9);
 VAR_8.pointer = VAR_9;

 VAR_10 = FUNC_0(((void*)0), (char *)VAR_3, &VAR_6,
          &VAR_8);
 if ((VAR_10 == VAR_1) && (VAR_9->package.count <= VAR_2)) {
  for (VAR_11 = 0; VAR_11 < VAR_9->package.count; ++VAR_11) {
   VAR_5[VAR_11] = VAR_9->package.elements[VAR_11].integer.value;
  }
 }

 return VAR_10;
}
