
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aml_start; } ;
union acpi_operand_object {TYPE_1__ method; } ;
struct acpi_evaluate_info {int prefix_node; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct acpi_evaluate_info*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,union acpi_operand_object*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct acpi_evaluate_info*) ;
 union acpi_operand_object* FUNC_7 (int ) ;
 int FUNC_8 (union acpi_operand_object*) ;
 int FUNC_9 (union acpi_operand_object*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_10(union acpi_operand_object *VAR_6,
    struct acpi_evaluate_info *VAR_7)
{
 union acpi_operand_object *VAR_8;
 acpi_status VAR_9;

 FUNC_2(VAR_4);



 FUNC_3(VAR_7, 0, sizeof(struct acpi_evaluate_info));
 VAR_7->prefix_node = VAR_3;






 VAR_8 = FUNC_7(VAR_3);
 FUNC_8(VAR_8);



 VAR_9 = FUNC_4(VAR_3, VAR_6,
           VAR_2);
 if (FUNC_1(VAR_9)) {
  goto exit;
 }



 VAR_9 = FUNC_6(VAR_7);

 FUNC_0((VAR_0, "Executed module-level code at %p\n",
     VAR_6->method.aml_start));



 FUNC_5(VAR_3);



 VAR_9 =
     FUNC_4(VAR_3, VAR_8,
      VAR_1);

      exit:
 FUNC_9(VAR_8);
 VAR_5;
}
