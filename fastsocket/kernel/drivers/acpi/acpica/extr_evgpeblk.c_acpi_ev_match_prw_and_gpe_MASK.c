
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ value; } ;
struct TYPE_8__ {int count; union acpi_operand_object** elements; } ;
struct TYPE_6__ {struct acpi_namespace_node* node; } ;
struct TYPE_5__ {scalar_t__ type; } ;
union acpi_operand_object {TYPE_3__ integer; TYPE_4__ package; TYPE_2__ reference; TYPE_1__ common; } ;
typedef scalar_t__ u32 ;
struct acpi_namespace_node {int dummy; } ;
struct acpi_gpe_walk_info {struct acpi_gpe_block_info* gpe_block; struct acpi_namespace_node* gpe_device; } ;
struct acpi_gpe_event_info {int flags; } ;
struct acpi_gpe_block_info {scalar_t__ block_base_number; int register_count; struct acpi_gpe_event_info* event_info; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct acpi_gpe_event_info*,int ) ;
 int FUNC_3 (struct acpi_gpe_event_info*,int ) ;
 struct acpi_namespace_node* VAR_10 ;
 int FUNC_4 (int ,int ,int ,union acpi_operand_object**) ;
 int FUNC_5 (union acpi_operand_object*) ;
 int VAR_11 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static acpi_status
FUNC_7(acpi_handle VAR_12,
     u32 VAR_13, void *VAR_14, void **VAR_15)
{
 struct acpi_gpe_walk_info *VAR_16 = (void *)VAR_14;
 struct acpi_namespace_node *VAR_17;
 struct acpi_gpe_block_info *VAR_18;
 struct acpi_namespace_node *VAR_19;
 struct acpi_gpe_event_info *VAR_20;
 union acpi_operand_object *VAR_21;
 union acpi_operand_object *VAR_22;
 u32 VAR_23;
 acpi_status VAR_24;

 FUNC_1(VAR_11);



 VAR_24 = FUNC_4(VAR_12, VAR_9,
      VAR_0, &VAR_21);
 if (FUNC_0(VAR_24)) {



  FUNC_6(VAR_8);
 }



 if (VAR_21->package.count < 2) {
  goto cleanup;
 }



 VAR_17 = VAR_16->gpe_device;
 VAR_18 = VAR_16->gpe_block;





 VAR_22 = VAR_21->package.elements[0];

 if (VAR_22->common.type == VAR_5) {



  VAR_19 = VAR_10;



  VAR_23 = (u32) VAR_22->integer.value;
 } else if (VAR_22->common.type == VAR_7) {



  if ((VAR_22->package.count < 2) ||
      ((VAR_22->package.elements[0])->common.type !=
       VAR_6) ||
      ((VAR_22->package.elements[1])->common.type !=
       VAR_5)) {
   goto cleanup;
  }



  VAR_19 =
      VAR_22->package.elements[0]->reference.node;
  VAR_23 = (u32) VAR_22->package.elements[1]->integer.value;
 } else {


  goto cleanup;
 }
 if ((VAR_17 == VAR_19) &&
     (VAR_23 >= VAR_18->block_base_number) &&
     (VAR_23 < VAR_18->block_base_number +
      (VAR_18->register_count * 8))) {
  VAR_20 = &VAR_18->event_info[VAR_23 -
       VAR_18->
       block_base_number];



  VAR_20->flags &=
      ~(VAR_4 | VAR_2);

  VAR_24 =
      FUNC_2(VAR_20, VAR_3);
  if (FUNC_0(VAR_24)) {
   goto cleanup;
  }

  VAR_24 =
      FUNC_3(VAR_20,
          VAR_1);
 }

      cleanup:
 FUNC_5(VAR_21);
 FUNC_6(VAR_8);
}
