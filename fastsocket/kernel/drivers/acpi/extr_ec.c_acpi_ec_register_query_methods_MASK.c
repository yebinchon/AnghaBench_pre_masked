
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_ec {int dummy; } ;
struct acpi_buffer {int member_0; char* member_1; } ;
typedef int node_name ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct acpi_ec*,int,int ,int *,int *) ;
 int FUNC_2 (int ,int ,struct acpi_buffer*) ;
 int FUNC_3 (char*,char*,int*) ;

__attribute__((used)) static acpi_status
FUNC_4(acpi_handle VAR_2, u32 VAR_3,
          void *VAR_4, void **VAR_5)
{
 char VAR_6[5];
 struct acpi_buffer VAR_7 = { sizeof(VAR_6), VAR_6 };
 struct acpi_ec *VAR_8 = VAR_4;
 int VAR_9 = 0;
 acpi_status VAR_10;

 VAR_10 = FUNC_2(VAR_2, VAR_0, &VAR_7);

 if (FUNC_0(VAR_10) && FUNC_3(VAR_6, "_Q%x", &VAR_9) == 1) {
  FUNC_1(VAR_8, VAR_9, VAR_2, ((void*)0), ((void*)0));
 }
 return VAR_1;
}
