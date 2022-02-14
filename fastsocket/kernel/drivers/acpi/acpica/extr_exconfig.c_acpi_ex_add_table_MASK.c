
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; int class; } ;
struct TYPE_3__ {int flags; } ;
union acpi_operand_object {TYPE_2__ reference; TYPE_1__ common; } ;
typedef int u32 ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,struct acpi_namespace_node*) ;
 union acpi_operand_object* FUNC_6 (int ) ;
 int FUNC_7 (union acpi_operand_object*) ;
 int VAR_4 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static acpi_status
FUNC_9(u32 VAR_5,
    struct acpi_namespace_node *VAR_6,
    union acpi_operand_object **VAR_7)
{
 acpi_status VAR_8;
 union acpi_operand_object *VAR_9;

 FUNC_1(VAR_4);



 VAR_9 = FUNC_6(VAR_1);
 if (!VAR_9) {
  FUNC_8(VAR_2);
 }



 VAR_9->common.flags |= VAR_3;
 VAR_9->reference.class = VAR_0;
 *VAR_7 = VAR_9;



 VAR_9->reference.value = VAR_5;



 VAR_8 = FUNC_5(VAR_5, VAR_6);
 if (FUNC_0(VAR_8)) {
  FUNC_7(VAR_9);
  *VAR_7 = ((void*)0);
  FUNC_8(VAR_8);
 }



 FUNC_3();
 FUNC_4();
 FUNC_2();

 FUNC_8(VAR_8);
}
