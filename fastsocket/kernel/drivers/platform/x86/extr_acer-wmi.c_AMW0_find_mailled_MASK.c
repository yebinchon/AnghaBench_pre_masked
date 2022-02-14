
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; scalar_t__ pointer; } ;
union acpi_object {scalar_t__ type; TYPE_1__ buffer; } ;
struct wmab_ret {int eex; } ;
struct wmab_args {int eax; scalar_t__ edx; scalar_t__ ecx; scalar_t__ ebx; } ;
struct acpi_buffer {scalar_t__ pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;
struct TYPE_4__ {int capability; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct wmab_args*,struct acpi_buffer*) ;

__attribute__((used)) static acpi_status FUNC_3(void)
{
 struct wmab_args VAR_6;
 struct wmab_ret VAR_7;
 acpi_status VAR_8 = VAR_4;
 struct acpi_buffer VAR_9 = { VAR_1, ((void*)0) };
 union acpi_object *VAR_10;

 VAR_6.eax = 0x86;
 VAR_6.ebx = VAR_6.ecx = VAR_6.edx = 0;

 VAR_8 = FUNC_2(&VAR_6, &VAR_9);
 if (FUNC_0(VAR_8))
  return VAR_8;

 VAR_10 = (union acpi_object *) VAR_9.pointer;
 if (VAR_10 && VAR_10->type == VAR_2 &&
 VAR_10->buffer.length == sizeof(struct wmab_ret)) {
  VAR_7 = *((struct wmab_ret *) VAR_10->buffer.pointer);
 } else {
  return VAR_3;
 }

 if (VAR_7.eex & 0x1)
  VAR_5->capability |= VAR_0;

 FUNC_1(VAR_9.pointer);

 return VAR_4;
}
