
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ghes_estatus_cache {unsigned long long time_in; int rcu; int count; } ;
struct acpi_hest_generic_status {int dummy; } ;
struct acpi_hest_generic {int dummy; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 struct ghes_estatus_cache* FUNC_2 (int *,struct ghes_estatus_cache*,struct ghes_estatus_cache*) ;
 int FUNC_3 (unsigned long long,int) ;
 struct ghes_estatus_cache* FUNC_4 (struct acpi_hest_generic*,struct acpi_hest_generic_status*) ;
 int FUNC_5 (struct ghes_estatus_cache*) ;
 int VAR_2 ;
 int * VAR_3 ;
 struct ghes_estatus_cache* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 unsigned long long FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(
 struct acpi_hest_generic *VAR_4,
 struct acpi_hest_generic_status *VAR_5)
{
 int VAR_6, VAR_7 = -1, VAR_8;
 unsigned long long VAR_9, VAR_10, VAR_11, VAR_12 = 0;
 struct ghes_estatus_cache *VAR_13, *VAR_14 = ((void*)0), *VAR_15;

 VAR_15 = FUNC_4(VAR_4, VAR_5);
 if (VAR_15 == ((void*)0))
  return;
 FUNC_7();
 VAR_9 = FUNC_9();
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_13 = FUNC_6(VAR_3[VAR_6]);
  if (VAR_13 == ((void*)0)) {
   VAR_7 = VAR_6;
   VAR_14 = ((void*)0);
   break;
  }
  VAR_10 = VAR_9 - VAR_13->time_in;
  if (VAR_10 >= VAR_1) {
   VAR_7 = VAR_6;
   VAR_14 = VAR_13;
   break;
  }
  VAR_8 = FUNC_0(&VAR_13->count);
  VAR_11 = VAR_10;
  FUNC_3(VAR_11, (VAR_8 + 1));
  if (VAR_11 > VAR_12) {
   VAR_12 = VAR_11;
   VAR_7 = VAR_6;
   VAR_14 = VAR_13;
  }
 }

 FUNC_10();
 if (VAR_7 != -1 && FUNC_2(VAR_3 + VAR_7,
      VAR_14, VAR_15) == VAR_14) {
  if (VAR_14)
   FUNC_1(&VAR_14->rcu, VAR_2);
 } else
  FUNC_5(VAR_15);
 FUNC_8();
}
