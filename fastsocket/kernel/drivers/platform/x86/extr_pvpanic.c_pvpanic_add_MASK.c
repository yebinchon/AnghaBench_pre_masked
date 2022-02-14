
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct acpi_device {int handle; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int *,int*) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct acpi_device *VAR_6)
{
 acpi_status VAR_7;
 u64 VAR_8;

 VAR_7 = FUNC_1(VAR_6->handle, "_STA", ((void*)0),
           &VAR_8);

 if (FUNC_0(VAR_7) || (VAR_8 & 0x0B) != 0x0B)
  return -VAR_0;

 FUNC_2(VAR_6->handle, VAR_1,
       VAR_5, ((void*)0));

 if (!VAR_3)
  return -VAR_0;

 FUNC_3(&VAR_2,
           &VAR_4);

 return 0;
}
