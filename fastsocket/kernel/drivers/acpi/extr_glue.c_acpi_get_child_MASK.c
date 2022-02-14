
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_integer ;
typedef int * acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int,int ,int *,void**) ;
 int VAR_1 ;

acpi_handle FUNC_1(acpi_handle VAR_2, acpi_integer VAR_3)
{
 void *VAR_4 = ((void*)0);

 if (!VAR_2)
  return ((void*)0);

 FUNC_0(VAR_0, VAR_2, 1,
       VAR_1, &VAR_3, &VAR_4);
 return (acpi_handle)VAR_4;
}
