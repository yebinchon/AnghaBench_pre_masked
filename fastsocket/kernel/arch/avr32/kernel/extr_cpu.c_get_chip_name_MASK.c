
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct avr32_cpuinfo {int dummy; } ;
struct TYPE_2__ {unsigned int mid; unsigned int pn; char const* name; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (struct avr32_cpuinfo*) ;
 unsigned int FUNC_1 (struct avr32_cpuinfo*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static const char *FUNC_2(struct avr32_cpuinfo *VAR_2)
{
 unsigned int VAR_3;
 unsigned int VAR_4 = FUNC_0(VAR_2);
 unsigned int VAR_5 = FUNC_1(VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1[VAR_3].mid == VAR_4 && VAR_1[VAR_3].pn == VAR_5)
   return VAR_1[VAR_3].name;
 }

 return "(unknown)";
}
