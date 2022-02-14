
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int handle; } ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (int ,int ,int ,int ,long*,int *) ;

long FUNC_3(struct acpi_device *VAR_6)
{
 acpi_handle VAR_7;
 long VAR_8 = 0;

 if (!VAR_6)
  return 0;


 if (FUNC_0(FUNC_1(VAR_6->handle, "_DOD", &VAR_7)) ||
     FUNC_0(FUNC_1(VAR_6->handle, "_DOS", &VAR_7)))
  VAR_8 |= VAR_3;


 if (FUNC_0(FUNC_1(VAR_6->handle, "_ROM", &VAR_7)))
  VAR_8 |= VAR_4;


 if (FUNC_0(FUNC_1(VAR_6->handle, "_VPO", &VAR_7)) &&
     FUNC_0(FUNC_1(VAR_6->handle, "_GPD", &VAR_7)) &&
     FUNC_0(FUNC_1(VAR_6->handle, "_SPD", &VAR_7)))
  VAR_8 |= VAR_2;


 if (VAR_8)
  FUNC_2(VAR_0, VAR_6->handle,
        VAR_1, VAR_5,
        &VAR_8, ((void*)0));

 return VAR_8;
}
