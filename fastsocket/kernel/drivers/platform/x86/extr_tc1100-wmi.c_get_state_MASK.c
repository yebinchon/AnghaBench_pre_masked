
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {scalar_t__ type; TYPE_1__ integer; } ;
typedef int u8 ;
typedef int u32 ;
struct acpi_buffer {scalar_t__ length; scalar_t__ pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int,struct acpi_buffer*) ;

__attribute__((used)) static int FUNC_3(u32 *VAR_5, u8 VAR_6)
{
 u32 VAR_7;
 acpi_status VAR_8;
 struct acpi_buffer VAR_9 = { VAR_0, ((void*)0) };
 union acpi_object *VAR_10;

 if (!VAR_5)
  return -VAR_2;

 if (VAR_6 > 2)
  return -VAR_3;

 VAR_8 = FUNC_2(VAR_4, VAR_6, &VAR_9);
 if (FUNC_0(VAR_8))
  return -VAR_3;

 VAR_10 = (union acpi_object *) VAR_9.pointer;
 if (VAR_10 && VAR_10->type == VAR_1) {
  VAR_7 = VAR_10->integer.value;
 } else {
  VAR_7 = 0;
 }

 if (VAR_9.length > 0 && VAR_9.pointer)
  FUNC_1(VAR_9.pointer);

 switch (VAR_6) {
 case 128:
  *VAR_5 = (VAR_7 == 3) ? 1 : 0;
  return 0;
 case 129:
  *VAR_5 = (VAR_7 == 1) ? 0 : 1;
  return 0;
 default:
  return -VAR_3;
 }
}
