
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxds_args {int xarg; int args; int func; } ;
struct acpi_buffer {struct mxds_args* member_1; int member_0; } ;
typedef int args ;
typedef int acpi_status ;
typedef int acpi_size ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int,int,struct acpi_buffer*,struct acpi_buffer*) ;

int FUNC_3(int VAR_3)
{
 struct mxds_args VAR_4 = {
  .func = VAR_1,
  .args = 0,
  .xarg = 1,
 };
 struct acpi_buffer VAR_5 = { (acpi_size)sizeof(VAR_4), &VAR_4 };
 struct acpi_buffer VAR_6 = { VAR_0, ((void*)0) };
 acpi_status VAR_7;

 FUNC_1("calling mux switch %d\n", VAR_3);

 VAR_7 = FUNC_2(VAR_2, 0x1, VAR_3, &VAR_5,
         &VAR_6);

 if (FUNC_0(VAR_7))
  return VAR_7;

 FUNC_1("mux mutex set switched %d\n", VAR_7);
 return 0;

}
