
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,struct resource*) ;
 int VAR_3 ;

__attribute__((used)) static acpi_status FUNC_2(acpi_handle VAR_4,
          struct resource *VAR_5)
{
 acpi_status VAR_6;

 VAR_5->start = -1;
 VAR_6 =
     FUNC_1(VAR_4, VAR_2,
    VAR_3, VAR_5);
 if (FUNC_0(VAR_6))
  return VAR_6;
 if (VAR_5->start == -1)
  return VAR_0;
 return VAR_1;
}
