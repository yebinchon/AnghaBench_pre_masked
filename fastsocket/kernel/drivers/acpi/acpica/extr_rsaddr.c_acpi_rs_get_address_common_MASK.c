
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int resource_type; int specific_flags; } ;
union aml_resource {TYPE_4__ address; } ;
typedef int u8 ;
struct TYPE_5__ {int type_specific; } ;
struct TYPE_6__ {scalar_t__ resource_type; TYPE_1__ info; } ;
struct TYPE_7__ {TYPE_2__ address; } ;
struct acpi_resource {TYPE_3__ data; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct acpi_resource*,union aml_resource*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

u8
FUNC_2(struct acpi_resource *VAR_7,
      union aml_resource *VAR_8)
{
 FUNC_0();



 if ((VAR_8->address.resource_type > 2)
     && (VAR_8->address.resource_type < 0xC0)) {
  return (VAR_2);
 }



 (void)FUNC_1(VAR_7, VAR_8,
           VAR_4);



 if (VAR_7->data.address.resource_type == VAR_1) {
  (void)FUNC_1(VAR_7, VAR_8,
            VAR_6);
 } else if (VAR_7->data.address.resource_type == VAR_0) {
  (void)FUNC_1(VAR_7, VAR_8,
            VAR_5);
 } else {


  VAR_7->data.address.info.type_specific =
      VAR_8->address.specific_flags;
 }

 return (VAR_3);
}
