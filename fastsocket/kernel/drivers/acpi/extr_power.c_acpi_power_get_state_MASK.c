
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_buffer {int member_0; char* member_1; } ;
typedef int node_name ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,int *,unsigned long long*) ;
 int FUNC_3 (int ,int ,struct acpi_buffer*) ;

__attribute__((used)) static int FUNC_4(acpi_handle VAR_7, int *VAR_8)
{
 acpi_status VAR_9 = VAR_4;
 unsigned long long VAR_10 = 0;
 char VAR_11[5];
 struct acpi_buffer VAR_12 = { sizeof(VAR_11), VAR_11 };


 if (!VAR_7 || !VAR_8)
  return -VAR_5;

 VAR_9 = FUNC_2(VAR_7, "_STA", ((void*)0), &VAR_10);
 if (FUNC_1(VAR_9))
  return -VAR_6;

 *VAR_8 = (VAR_10 & 0x01)?VAR_2:
         VAR_1;

 FUNC_3(VAR_7, VAR_3, &VAR_12);

 FUNC_0((VAR_0, "Resource [%s] is %s\n",
     VAR_11,
    *VAR_8 ? "on" : "off"));

 return 0;
}
