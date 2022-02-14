
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef int u32 ;
typedef int acpi_status ;
typedef void* acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*,int ,int *,unsigned long long*) ;

__attribute__((used)) static acpi_status FUNC_2(acpi_handle VAR_3, u32 VAR_4,
          void *VAR_5, void **VAR_6)
{
 unsigned long long VAR_7;
 acpi_status VAR_8;

 VAR_8 = FUNC_1(VAR_3, VAR_2, ((void*)0), &VAR_7);
 if (FUNC_0(VAR_8) && VAR_7 == *((u64 *)VAR_5)) {
  *VAR_6 = VAR_3;
  return VAR_0;
 }
 return VAR_1;
}
