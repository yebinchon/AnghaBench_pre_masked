
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; scalar_t__ pointer; } ;
union acpi_object {scalar_t__ type; TYPE_1__ buffer; } ;
typedef int u32 ;
struct acpi_buffer {scalar_t__ pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;
struct TYPE_4__ {int capability; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int,struct acpi_buffer*) ;

__attribute__((used)) static acpi_status FUNC_2(void)
{
 struct acpi_buffer VAR_10 = {VAR_4, ((void*)0)};
 union acpi_object *VAR_11;
 acpi_status VAR_12;
 u32 VAR_13;

 VAR_12 = FUNC_1(VAR_7, 1, &VAR_10);
 if (FUNC_0(VAR_12))
  return VAR_12;

 VAR_11 = (union acpi_object *) VAR_10.pointer;
 if (VAR_11 && VAR_11->type == VAR_5 &&
  VAR_11->buffer.length == sizeof(u32)) {
  VAR_13 = *((u32 *) VAR_11->buffer.pointer);
 } else {
  return VAR_6;
 }


 VAR_8->capability |= VAR_3;
 VAR_8->capability |= VAR_2;


 VAR_8->capability |= VAR_1;

 if (VAR_13 & 0x10)
  VAR_8->capability |= VAR_0;

 if (!(VAR_13 & 0x20))
  VAR_9 = 0x9;

 return VAR_12;
}
