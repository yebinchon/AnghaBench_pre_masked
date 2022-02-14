
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int flags; } ;
struct TYPE_6__ {int flags; scalar_t__ length; int address; int space_id; struct acpi_namespace_node* node; } ;
struct TYPE_5__ {int aml_start; int aml_length; } ;
union acpi_operand_object {TYPE_4__ common; TYPE_2__ region; TYPE_1__ extra; } ;
struct TYPE_7__ {int ascii; } ;
struct acpi_namespace_node {TYPE_3__ name; int parent; } ;
typedef int acpi_status ;
typedef int acpi_size ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,union acpi_operand_object*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct acpi_namespace_node*,int ,int ,int ) ;
 union acpi_operand_object* FUNC_6 (union acpi_operand_object*) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,struct acpi_namespace_node*,int *) ;
 int FUNC_9 (struct acpi_namespace_node*) ;
 int VAR_7 ;
 int FUNC_10 (int ) ;

acpi_status FUNC_11(union acpi_operand_object *VAR_8)
{
 struct acpi_namespace_node *VAR_9;
 acpi_status VAR_10;
 union acpi_operand_object *VAR_11;

 FUNC_4(VAR_7, VAR_8);

 if (VAR_8->region.flags & VAR_5) {
  FUNC_10(VAR_4);
 }

 VAR_11 = FUNC_6(VAR_8);
 if (!VAR_11) {
  FUNC_10(VAR_3);
 }



 VAR_9 = VAR_8->region.node;

 FUNC_0(FUNC_8
   (VAR_1, VAR_9, ((void*)0)));

 FUNC_1((VAR_0, "[%4.4s] OpRegion Arg Init at AML %p\n",
     FUNC_9(VAR_9),
     VAR_11->extra.aml_start));



 VAR_10 = FUNC_5(VAR_9, VAR_9->parent,
        VAR_11->extra.aml_length,
        VAR_11->extra.aml_start);
 if (FUNC_3(VAR_10)) {
  FUNC_10(VAR_10);
 }



 VAR_10 = FUNC_7(VAR_8->region.space_id,
       VAR_8->region.address,
       (acpi_size) VAR_8->region.length,
       FUNC_9(VAR_9));

 if (FUNC_3(VAR_10)) {





  FUNC_2((VAR_2, VAR_10,
    "During address validation of OpRegion [%4.4s]",
    VAR_9->name.ascii));
  VAR_8->common.flags |= VAR_6;
  VAR_10 = VAR_4;
 }

 FUNC_10(VAR_10);
}
