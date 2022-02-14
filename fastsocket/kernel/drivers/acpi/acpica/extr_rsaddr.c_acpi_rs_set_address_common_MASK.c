
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int specific_flags; } ;
union aml_resource {TYPE_4__ address; } ;
struct TYPE_5__ {int type_specific; } ;
struct TYPE_6__ {scalar_t__ resource_type; TYPE_1__ info; } ;
struct TYPE_7__ {TYPE_2__ address; } ;
struct acpi_resource {TYPE_3__ data; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct acpi_resource*,union aml_resource*,int ) ;

void
FUNC_2(union aml_resource *VAR_5,
      struct acpi_resource *VAR_6)
{
 FUNC_0();



 (void)FUNC_1(VAR_6, VAR_5,
           VAR_2);



 if (VAR_6->data.address.resource_type == VAR_1) {
  (void)FUNC_1(VAR_6, VAR_5,
            VAR_4);
 } else if (VAR_6->data.address.resource_type == VAR_0) {
  (void)FUNC_1(VAR_6, VAR_5,
            VAR_3);
 } else {


  VAR_5->address.specific_flags =
      VAR_6->data.address.info.type_specific;
 }
}
