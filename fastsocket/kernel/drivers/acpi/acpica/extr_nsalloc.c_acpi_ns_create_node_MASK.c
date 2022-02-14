
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ integer; } ;
struct acpi_namespace_node {TYPE_1__ name; } ;
struct TYPE_4__ {scalar_t__ total_allocated; scalar_t__ total_freed; scalar_t__ max_occupied; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct acpi_namespace_node*,int ) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 struct acpi_namespace_node* FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (struct acpi_namespace_node*) ;

struct acpi_namespace_node *FUNC_5(u32 VAR_4)
{
 struct acpi_namespace_node *VAR_5;




 FUNC_0(VAR_3);

 VAR_5 = FUNC_3(VAR_1);
 if (!VAR_5) {
  FUNC_4(((void*)0));
 }

 FUNC_1(VAR_2->total_allocated++);
 VAR_5->name.integer = VAR_4;
 FUNC_2(VAR_5, VAR_0);
 FUNC_4(VAR_5);
}
