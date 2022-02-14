
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backlight_device {int dummy; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int *,unsigned long long*) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct backlight_device *VAR_2)
{
 unsigned long long VAR_3;
 acpi_status VAR_4 = VAR_0;

 VAR_4 = FUNC_1(VAR_1, ((void*)0), ((void*)0), &VAR_3);
 if (FUNC_0(VAR_4))
  FUNC_2("Error reading brightness\n");

 return VAR_3;
}
