
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;

__attribute__((used)) static acpi_status
FUNC_2(acpi_handle VAR_3, u32 VAR_4, void *VAR_5, void **VAR_6)
{
 int *VAR_7 = (int *)VAR_5;

 if (FUNC_1(VAR_3)) {
  FUNC_0(VAR_3, VAR_0,
    VAR_2, ((void*)0));
   (*VAR_7)++;
 }
 return VAR_1 ;
}
