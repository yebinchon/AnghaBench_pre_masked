
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; TYPE_3__* next_object; } ;
union acpi_operand_object {TYPE_2__ common; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_6__ {TYPE_1__ common; } ;


 int FUNC_0 (int ,union acpi_operand_object*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;

union acpi_operand_object *FUNC_2(union
       acpi_operand_object
       *VAR_2)
{
 FUNC_0(VAR_1, VAR_2);

 if ((!VAR_2) ||
     (VAR_2->common.type == VAR_0) ||
     (!VAR_2->common.next_object) ||
     ((VAR_2->common.next_object)->common.type ==
      VAR_0)) {
  FUNC_1(((void*)0));
 }

 FUNC_1(VAR_2->common.next_object);
}
