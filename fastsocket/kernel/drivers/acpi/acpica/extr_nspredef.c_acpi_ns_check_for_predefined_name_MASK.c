
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int expected_btypes; scalar_t__* name; } ;
union acpi_predefined_info {TYPE_2__ info; } ;
struct TYPE_3__ {char* ascii; } ;
struct acpi_namespace_node {TYPE_1__ name; } ;


 scalar_t__ FUNC_0 (char*,scalar_t__*) ;
 int VAR_0 ;
 union acpi_predefined_info* VAR_1 ;

const union acpi_predefined_info *FUNC_1(struct
            acpi_namespace_node
            *VAR_2)
{
 const union acpi_predefined_info *VAR_3;



 if (VAR_2->name.ascii[0] != '_') {
  return (((void*)0));
 }



 VAR_3 = VAR_1;
 while (VAR_3->info.name[0]) {
  if (FUNC_0(VAR_2->name.ascii, VAR_3->info.name)) {
   return (VAR_3);
  }





  if (VAR_3->info.expected_btypes & VAR_0) {
   VAR_3++;
  }

  VAR_3++;
 }

 return (((void*)0));
}
