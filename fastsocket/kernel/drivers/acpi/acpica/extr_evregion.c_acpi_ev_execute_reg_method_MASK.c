
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int value; } ;
struct TYPE_5__ {int space_id; } ;
struct TYPE_4__ {int * method_REG; } ;
union acpi_operand_object {TYPE_3__ integer; TYPE_2__ region; TYPE_1__ extra; } ;
typedef int u32 ;
struct acpi_evaluate_info {int * prefix_node; int flags; union acpi_operand_object** parameters; int * pathname; } ;
typedef int acpi_status ;


 struct acpi_evaluate_info* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct acpi_evaluate_info*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct acpi_evaluate_info*) ;
 union acpi_operand_object* FUNC_5 (union acpi_operand_object*) ;
 union acpi_operand_object* FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (union acpi_operand_object*) ;
 int VAR_6 ;
 int FUNC_9 (int ) ;

acpi_status
FUNC_10(union acpi_operand_object *VAR_7, u32 VAR_8)
{
 struct acpi_evaluate_info *VAR_9;
 union acpi_operand_object *VAR_10[3];
 union acpi_operand_object *VAR_11;
 acpi_status VAR_12;

 FUNC_3(VAR_6);

 VAR_11 = FUNC_5(VAR_7);
 if (!VAR_11) {
  FUNC_9(VAR_3);
 }

 if (VAR_11->extra.method_REG == ((void*)0)) {
  FUNC_9(VAR_5);
 }



 VAR_9 = FUNC_0(sizeof(struct acpi_evaluate_info));
 if (!VAR_9) {
  FUNC_9(VAR_4);
 }

 VAR_9->prefix_node = VAR_11->extra.method_REG;
 VAR_9->pathname = ((void*)0);
 VAR_9->parameters = VAR_10;
 VAR_9->flags = VAR_0;
 VAR_10[0] = FUNC_6(VAR_1);
 if (!VAR_10[0]) {
  VAR_12 = VAR_4;
  goto cleanup1;
 }

 VAR_10[1] = FUNC_6(VAR_1);
 if (!VAR_10[1]) {
  VAR_12 = VAR_4;
  goto cleanup2;
 }



 VAR_10[0]->integer.value = VAR_7->region.space_id;
 VAR_10[1]->integer.value = VAR_8;
 VAR_10[2] = ((void*)0);



 FUNC_1(FUNC_7
   (VAR_2, VAR_9->prefix_node, ((void*)0)));

 VAR_12 = FUNC_4(VAR_9);
 FUNC_8(VAR_10[1]);

      cleanup2:
 FUNC_8(VAR_10[0]);

      cleanup1:
 FUNC_2(VAR_9);
 FUNC_9(VAR_12);
}
