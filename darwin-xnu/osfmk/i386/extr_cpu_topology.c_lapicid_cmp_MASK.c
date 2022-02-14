
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cpu_phys_number; } ;
typedef TYPE_1__ cpu_data_t ;


 int FUNC_0 (char*,void const*,void const*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 cpu_data_t *VAR_2 = *((cpu_data_t **)(uintptr_t)VAR_0);
 cpu_data_t *VAR_3 = *((cpu_data_t **)(uintptr_t)VAR_1);

 FUNC_0("lapicid_cmp(%p,%p) (%d,%d)\n",
  VAR_0, VAR_1, VAR_2->cpu_phys_number, VAR_3->cpu_phys_number);
 if (VAR_2->cpu_phys_number < VAR_3->cpu_phys_number)
  return -1;
 if (VAR_2->cpu_phys_number == VAR_3->cpu_phys_number)
  return 0;
 return 1;
}
