
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dock_station {int handle; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int *,unsigned long long*) ;

__attribute__((used)) static int FUNC_2(struct dock_station *VAR_0)
{
 unsigned long long VAR_1;
 acpi_status VAR_2;

 if (VAR_0) {
  VAR_2 = FUNC_1(VAR_0->handle, "_STA", ((void*)0), &VAR_1);
  if (FUNC_0(VAR_2) && VAR_1)
   return 1;
 }
 return 0;
}
