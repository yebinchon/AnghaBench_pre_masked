
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ghes_estatus_cache {int time_in; struct acpi_hest_generic* generic; int count; int estatus_len; } ;
struct acpi_hest_generic_status {int dummy; } ;
struct acpi_hest_generic {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct acpi_hest_generic_status* FUNC_1 (struct ghes_estatus_cache*) ;
 int FUNC_2 (struct acpi_hest_generic_status*) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (struct acpi_hest_generic_status*,struct acpi_hest_generic_status*,int ) ;
 int FUNC_8 () ;

__attribute__((used)) static struct ghes_estatus_cache *FUNC_9(
 struct acpi_hest_generic *VAR_3,
 struct acpi_hest_generic_status *VAR_4)
{
 int VAR_5;
 u32 VAR_6, VAR_7;
 struct ghes_estatus_cache *VAR_8;
 struct acpi_hest_generic_status *VAR_9;

 VAR_5 = FUNC_3(1, &VAR_1);
 if (VAR_5 > VAR_0) {
  FUNC_4(&VAR_1);
  return ((void*)0);
 }
 VAR_6 = FUNC_2(VAR_4);
 VAR_7 = FUNC_0(VAR_6);
 VAR_8 = (void *)FUNC_6(VAR_2, VAR_7);
 if (!VAR_8) {
  FUNC_4(&VAR_1);
  return ((void*)0);
 }
 VAR_9 = FUNC_1(VAR_8);
 FUNC_7(VAR_9, VAR_4, VAR_6);
 VAR_8->estatus_len = VAR_6;
 FUNC_5(&VAR_8->count, 0);
 VAR_8->generic = VAR_3;
 VAR_8->time_in = FUNC_8();
 return VAR_8;
}
