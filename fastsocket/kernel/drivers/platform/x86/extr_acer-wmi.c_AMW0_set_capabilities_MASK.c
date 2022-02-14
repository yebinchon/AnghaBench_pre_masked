
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; scalar_t__ pointer; } ;
union acpi_object {scalar_t__ type; TYPE_1__ buffer; } ;
struct wmab_ret {int eax; } ;
struct wmab_args {int ebx; scalar_t__ edx; scalar_t__ ecx; int eax; } ;
struct acpi_buffer {scalar_t__ pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;
struct TYPE_6__ {int capability; } ;
struct TYPE_5__ {scalar_t__ brightness; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__* VAR_11 ;
 int FUNC_1 (scalar_t__) ;
 TYPE_2__* VAR_12 ;
 int FUNC_2 (struct wmab_args*,struct acpi_buffer*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static acpi_status FUNC_4(void)
{
 struct wmab_args VAR_13;
 struct wmab_ret VAR_14;
 acpi_status VAR_15 = VAR_9;
 struct acpi_buffer VAR_16 = { VAR_6, ((void*)0) };
 union acpi_object *VAR_17;





 if (FUNC_3(VAR_10)) {
  VAR_11->capability |= VAR_5;
  return VAR_9;
 }

 VAR_13.eax = VAR_2;
 VAR_13.ecx = VAR_13.edx = 0;

 VAR_13.ebx = 0xa2 << 8;
 VAR_13.ebx |= VAR_1;

 VAR_15 = FUNC_2(&VAR_13, &VAR_16);
 if (FUNC_0(VAR_15))
  return VAR_15;

 VAR_17 = (union acpi_object *) VAR_16.pointer;
 if (VAR_17 && VAR_17->type == VAR_7 &&
 VAR_17->buffer.length == sizeof(struct wmab_ret)) {
  VAR_14 = *((struct wmab_ret *) VAR_17->buffer.pointer);
 } else {
  return VAR_8;
 }

 if (VAR_14.eax & 0x1)
  VAR_11->capability |= VAR_5;

 VAR_13.ebx = 2 << 8;
 VAR_13.ebx |= VAR_0;

 VAR_15 = FUNC_2(&VAR_13, &VAR_16);
 if (FUNC_0(VAR_15))
  return VAR_15;

 VAR_17 = (union acpi_object *) VAR_16.pointer;
 if (VAR_17 && VAR_17->type == VAR_7
 && VAR_17->buffer.length == sizeof(struct wmab_ret)) {
  VAR_14 = *((struct wmab_ret *) VAR_17->buffer.pointer);
 } else {
  return VAR_8;
 }

 if (VAR_14.eax & 0x1)
  VAR_11->capability |= VAR_3;

 FUNC_1(VAR_16.pointer);






 if (VAR_12->brightness >= 0)
  VAR_11->capability |= VAR_4;

 return VAR_9;
}
