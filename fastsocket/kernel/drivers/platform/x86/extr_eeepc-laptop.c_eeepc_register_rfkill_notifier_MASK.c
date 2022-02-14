
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
 int VAR_2 ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int FUNC_5(char *VAR_4)
{
 acpi_status VAR_5 = VAR_1;
 acpi_handle VAR_6;

 VAR_5 = FUNC_2(((void*)0), VAR_4, &VAR_6);

 if (FUNC_1(VAR_5)) {
  VAR_5 = FUNC_3(VAR_6,
           VAR_0,
           VAR_3,
           ((void*)0));
  if (FUNC_0(VAR_5))
   FUNC_4("Failed to register notify on %s\n", VAR_4);
 } else
  return -VAR_2;

 return 0;
}
