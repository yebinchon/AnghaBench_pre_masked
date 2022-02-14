
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(char *VAR_3)
{
 acpi_status VAR_4 = VAR_1;
 acpi_handle VAR_5;

 VAR_4 = FUNC_2(((void*)0), VAR_3, &VAR_5);

 if (FUNC_1(VAR_4)) {
  VAR_4 = FUNC_3(VAR_5,
           VAR_0,
           VAR_2);
  if (FUNC_0(VAR_4))
   FUNC_4("Error removing rfkill notify handler %s\n",
    VAR_3);
 }
}
