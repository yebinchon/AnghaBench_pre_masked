
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int dummy; } ;


 int FUNC_0 (int ,char*,int,int*) ;
 int FUNC_1 (int,int,int*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct acpi_device *VAR_1)
{
 int VAR_2;


 FUNC_0(VAR_0, "SN02", 0xffff, &VAR_2);


 FUNC_1(0x0100, 0, &VAR_2);
 FUNC_1(0x0101, 0, &VAR_2);
 FUNC_1(0x0102, 0x100, &VAR_2);
 FUNC_1(0x0127, 0, &VAR_2);

 return 0;
}
