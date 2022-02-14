
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {union acpi_parse_object* parent; union acpi_parse_object* next; } ;
union acpi_parse_object {TYPE_1__ common; } ;


 int FUNC_0 (int ,union acpi_parse_object*) ;
 int FUNC_1 (union acpi_parse_object*) ;
 union acpi_parse_object* FUNC_2 (union acpi_parse_object*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_3(union acpi_parse_object *VAR_2)
{
 union acpi_parse_object *VAR_3 = VAR_2;
 union acpi_parse_object *VAR_4 = ((void*)0);
 union acpi_parse_object *VAR_5 = ((void*)0);

 FUNC_0(VAR_0, VAR_2);



 while (VAR_3) {



  if (VAR_3 != VAR_5) {



   VAR_4 = FUNC_2(VAR_3, 0);
   if (VAR_4) {



    VAR_3 = VAR_4;
    continue;
   }
  }



  VAR_4 = VAR_3->common.next;
  VAR_5 = VAR_3->common.parent;

  FUNC_1(VAR_3);



  if (VAR_3 == VAR_2) {
   VAR_1;
  }
  if (VAR_4) {
   VAR_3 = VAR_4;
  } else {
   VAR_3 = VAR_5;
  }
 }

 VAR_1;
}
