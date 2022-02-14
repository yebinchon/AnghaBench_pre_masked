
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cpuid_brand_string; int cpuid_signature; int cpuid_microcode_version; int cpuid_stepping; int cpuid_model; int cpuid_family; } ;
typedef TYPE_1__ i386_cpu_info_t ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (char*,int ,...) ;

__attribute__((used)) static void
FUNC_2(void)
{
 i386_cpu_info_t *VAR_0 = FUNC_0();

 FUNC_1(" family: %d model: %d stepping: %d microcode: %d\n",
  VAR_0->cpuid_family,
  VAR_0->cpuid_model,
  VAR_0->cpuid_stepping,
  VAR_0->cpuid_microcode_version);
 FUNC_1(" signature: 0x%x\n",
  VAR_0->cpuid_signature);
 FUNC_1(" %s\n",
  VAR_0->cpuid_brand_string);

}
