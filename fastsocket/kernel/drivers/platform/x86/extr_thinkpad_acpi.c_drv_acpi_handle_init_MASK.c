
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_status ;
typedef int * acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int **) ;
 int FUNC_2 (int ,char*,char*,char*) ;
 int FUNC_3 (int ,char*,char*) ;

__attribute__((used)) static void FUNC_4(char *VAR_1,
      acpi_handle *VAR_2, acpi_handle VAR_3,
      char **VAR_4, int VAR_5, char **VAR_6)
{
 int VAR_7;
 acpi_status VAR_8;

 FUNC_3(VAR_0, "trying to locate ACPI handle for %s\n",
  VAR_1);

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_8 = FUNC_1(VAR_3, VAR_4[VAR_7], VAR_2);
  if (FUNC_0(VAR_8)) {
   *VAR_6 = VAR_4[VAR_7];
   FUNC_2(VAR_0,
       "Found ACPI handle %s for %s\n",
       *VAR_6, VAR_1);
   return;
  }
 }

 FUNC_3(VAR_0, "ACPI handle for %s not found\n",
      VAR_1);
 *VAR_2 = ((void*)0);
}
