
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int acpi_name ;


 int VAR_0 ;
 int FUNC_0 (char,int) ;

acpi_name FUNC_1(char *VAR_1)
{
       u32 VAR_2;
 char VAR_3[VAR_0];

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3[VAR_2] = VAR_1[VAR_2];






  if (!FUNC_0(VAR_1[VAR_2], VAR_2)) {
   VAR_3[VAR_2] = '*';
  }
 }

 return (*(u32 *) VAR_3);
}
