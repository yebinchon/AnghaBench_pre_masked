
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ start; scalar_t__ end; } ;
struct acpi_resource_address64 {scalar_t__ address_length; scalar_t__ resource_type; scalar_t__ minimum; } ;
struct acpi_resource {scalar_t__ type; } ;
typedef int acpi_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct acpi_resource*,struct acpi_resource_address64*) ;

__attribute__((used)) static acpi_status
FUNC_1(struct acpi_resource *VAR_5, void *VAR_6)
{
 struct resource *VAR_7 = VAR_6;
 struct acpi_resource_address64 VAR_8;

 if (VAR_5->type != VAR_1 &&
     VAR_5->type != VAR_2 &&
     VAR_5->type != VAR_3)
  return VAR_4;

 FUNC_0(VAR_5, &VAR_8);
 if ((VAR_8.address_length > 0) &&
     (VAR_8.resource_type == VAR_0)) {
  VAR_7->start = VAR_8.minimum;
  VAR_7->end = VAR_8.minimum + VAR_8.address_length - 1;
 }

 return VAR_4;
}
