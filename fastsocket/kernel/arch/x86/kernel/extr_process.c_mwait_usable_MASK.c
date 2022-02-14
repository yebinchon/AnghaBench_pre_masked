
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpuinfo_x86 {scalar_t__ cpuid_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int*,int*,int*,int*) ;
 scalar_t__ VAR_3 ;

int FUNC_1(const struct cpuinfo_x86 *VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7, VAR_8;

 if (VAR_3)
  return 1;

 if (VAR_4->cpuid_level < VAR_2)
  return 0;

 FUNC_0(VAR_2, &VAR_5, &VAR_6, &VAR_7, &VAR_8);

 if (!(VAR_7 & VAR_0))
  return 1;





 return (VAR_8 & VAR_1);
}
