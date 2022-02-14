
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unwind_table_entry {scalar_t__ region_start; } ;



__attribute__((used)) static void
FUNC_0(struct unwind_table_entry *VAR_0,
    struct unwind_table_entry *VAR_1)
{
 struct unwind_table_entry VAR_2, *VAR_3, *VAR_4;

 for (VAR_3 = VAR_0 + 1; VAR_3 < VAR_1; ++VAR_3) {
  if (VAR_3[0].region_start < VAR_3[-1].region_start) {
   VAR_2 = *VAR_3;
   VAR_4 = VAR_3;
   do {
    VAR_4[0] = VAR_4[-1];
    --VAR_4;
   } while (VAR_4 > VAR_0 &&
     VAR_2.region_start < VAR_4[-1].region_start);
   *VAR_4 = VAR_2;
  }
 }
}
