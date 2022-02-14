
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_status ;
typedef int * acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int **) ;

__attribute__((used)) static int FUNC_2(char *VAR_1, acpi_handle * VAR_2,
       char **VAR_3, int VAR_4)
{
 int VAR_5;
 acpi_status VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_6 = FUNC_1(((void*)0), VAR_3[VAR_5], VAR_2);
  if (FUNC_0(VAR_6))
   return 0;
 }

 *VAR_2 = ((void*)0);
 return -VAR_0;
}
