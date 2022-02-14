
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_ec {unsigned long long gpe; unsigned long long global_lock; int handle; scalar_t__ data_addr; scalar_t__ command_addr; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int *,unsigned long long*) ;
 int FUNC_2 (int ,int ,int ,struct acpi_ec*) ;
 int VAR_2 ;

__attribute__((used)) static acpi_status
FUNC_3(acpi_handle VAR_3, u32 VAR_4, void *VAR_5, void **VAR_6)
{
 acpi_status VAR_7;
 unsigned long long VAR_8 = 0;

 struct acpi_ec *VAR_9 = VAR_5;


 VAR_9->command_addr = VAR_9->data_addr = 0;

 VAR_7 = FUNC_2(VAR_3, VAR_1,
         VAR_2, VAR_9);
 if (FUNC_0(VAR_7))
  return VAR_7;



 VAR_7 = FUNC_1(VAR_3, "_GPE", ((void*)0), &VAR_8);
 if (FUNC_0(VAR_7))
  return VAR_7;
 VAR_9->gpe = VAR_8;

 VAR_8 = 0;
 FUNC_1(VAR_3, "_GLK", ((void*)0), &VAR_8);
 VAR_9->global_lock = VAR_8;
 VAR_9->handle = VAR_3;
 return VAR_0;
}
