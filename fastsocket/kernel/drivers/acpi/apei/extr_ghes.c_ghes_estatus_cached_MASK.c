
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ghes_estatus_cache {scalar_t__ estatus_len; unsigned long long time_in; int count; } ;
struct acpi_hest_generic_status {int dummy; } ;


 int VAR_0 ;
 struct acpi_hest_generic_status* FUNC_0 (struct ghes_estatus_cache*) ;
 unsigned long long VAR_1 ;
 scalar_t__ FUNC_1 (struct acpi_hest_generic_status*) ;
 int FUNC_2 (int *) ;
 int * VAR_2 ;
 scalar_t__ FUNC_3 (struct acpi_hest_generic_status*,struct acpi_hest_generic_status*,scalar_t__) ;
 struct ghes_estatus_cache* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 unsigned long long FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct acpi_hest_generic_status *VAR_3)
{
 u32 VAR_4;
 int VAR_5, VAR_6 = 0;
 unsigned long long VAR_7;
 struct ghes_estatus_cache *VAR_8;
 struct acpi_hest_generic_status *VAR_9;

 VAR_4 = FUNC_1(VAR_3);
 FUNC_5();
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_8 = FUNC_4(VAR_2[VAR_5]);
  if (VAR_8 == ((void*)0))
   continue;
  if (VAR_4 != VAR_8->estatus_len)
   continue;
  VAR_9 = FUNC_0(VAR_8);
  if (FUNC_3(VAR_3, VAR_9, VAR_4))
   continue;
  FUNC_2(&VAR_8->count);
  VAR_7 = FUNC_7();
  if (VAR_7 - VAR_8->time_in < VAR_1)
   VAR_6 = 1;
  break;
 }
 FUNC_6();
 return VAR_6;
}
