
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int param_count; } ;
union acpi_predefined_info {TYPE_3__ info; } ;
typedef int u32 ;
struct acpi_namespace_node {scalar_t__ type; int flags; TYPE_2__* object; } ;
struct TYPE_4__ {int param_count; } ;
struct TYPE_5__ {TYPE_1__ method; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;

void
FUNC_1(char *VAR_4,
         struct acpi_namespace_node *VAR_5,
         u32 VAR_6,
         const union acpi_predefined_info *VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;



 VAR_8 = 0;
 if (VAR_5->type == VAR_0) {
  VAR_8 = VAR_5->object->method.param_count;
 }

 if (!VAR_7) {
  if (VAR_6 < VAR_8) {
   FUNC_0((VAR_3, VAR_4,
           VAR_2,
           "Insufficient arguments - needs %u, found %u",
           VAR_8, VAR_6));
  } else if (VAR_6 > VAR_8) {
   FUNC_0((VAR_3, VAR_4,
           VAR_2,
           "Excess arguments - needs %u, found %u",
           VAR_8, VAR_6));
  }
  return;
 }





 VAR_9 = VAR_7->info.param_count & 0x0F;
 VAR_10 = VAR_7->info.param_count >> 4;

 if (VAR_6 != VAR_1) {
  if ((VAR_6 != VAR_9) &&
      (VAR_6 != VAR_10)) {
   FUNC_0((VAR_3, VAR_4,
           VAR_2,
           "Parameter count mismatch - "
           "caller passed %u, ACPI requires %u",
           VAR_6,
           VAR_9));
  }
 }






 if ((VAR_8 != VAR_9) &&
     (VAR_8 != VAR_10)) {
  FUNC_0((VAR_3, VAR_4, VAR_5->flags,
          "Parameter count mismatch - ASL declared %u, ACPI requires %u",
          VAR_8, VAR_9));
 }
}
