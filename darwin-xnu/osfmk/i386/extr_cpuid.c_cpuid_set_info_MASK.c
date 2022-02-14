
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_6__ {scalar_t__ cpuid_cpu_type; int cpuid_features; int cpuid_extfeatures; int cpuid_leaf7_features; scalar_t__ cpuid_cpu_subtype; scalar_t__ cpuid_cpufamily; scalar_t__ core_count; scalar_t__ cpuid_cores_per_package; scalar_t__ thread_count; scalar_t__ cpuid_logical_per_package; char* cpuid_model_string; int cpuid_vendor; } ;
typedef TYPE_1__ i386_cpu_info_t ;
typedef int enable_x86_64h ;
typedef int disable_x86_64h ;
typedef scalar_t__ boolean_t ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (char*,scalar_t__*,int) ;
 scalar_t__ VAR_11 ;
 void* FUNC_2 (int ,int,int) ;
 TYPE_1__ VAR_12 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ,int ) ;

void
FUNC_11(void)
{
 i386_cpu_info_t *VAR_13 = &VAR_12;
 boolean_t VAR_14 = VAR_11;

 FUNC_5(VAR_13);


 if ((FUNC_10(VAR_2, VAR_13->cpuid_vendor,
       FUNC_6(FUNC_9(VAR_1) + 1,
    sizeof(VAR_13->cpuid_vendor)))) ||
    (FUNC_4(VAR_13) == VAR_0))
  FUNC_7("Unsupported CPU");

 VAR_13->cpuid_cpu_type = VAR_8;

 if (!FUNC_1("-enable_x86_64h", &VAR_14, sizeof(VAR_14))) {
  boolean_t VAR_15 = VAR_9;

  if (FUNC_1("-disable_x86_64h", &VAR_15, sizeof(VAR_15))) {
   VAR_14 = VAR_9;
  }
 }

 if (VAR_14 &&
     ((VAR_13->cpuid_features & VAR_4) == VAR_4) &&
     ((VAR_13->cpuid_extfeatures & VAR_3) == VAR_3) &&
     ((VAR_13->cpuid_leaf7_features & VAR_5) == VAR_5)) {
  VAR_13->cpuid_cpu_subtype = VAR_6;
 } else {
  VAR_13->cpuid_cpu_subtype = VAR_7;
 }


 if (VAR_13->cpuid_cpufamily == 129)
  FUNC_3(VAR_13);





 switch (VAR_13->cpuid_cpufamily) {
 case 129:
  VAR_13->core_count = VAR_13->cpuid_cores_per_package;
  VAR_13->thread_count = VAR_13->cpuid_logical_per_package;
  break;
 case 128: {
  uint64_t VAR_16 = FUNC_8(VAR_10);
  VAR_13->core_count = FUNC_2((uint32_t)VAR_16, 19, 16);
  VAR_13->thread_count = FUNC_2((uint32_t)VAR_16, 15, 0);
  break;
  }
 default: {
  uint64_t VAR_17 = FUNC_8(VAR_10);
  if (VAR_17 == 0)

   VAR_17 = (1 << 16) + 1;
  VAR_13->core_count = FUNC_2((uint32_t)VAR_17, 31, 16);
  VAR_13->thread_count = FUNC_2((uint32_t)VAR_17, 15, 0);
  break;
  }
 }
 if (VAR_13->core_count == 0) {
  VAR_13->core_count = VAR_13->cpuid_cores_per_package;
  VAR_13->thread_count = VAR_13->cpuid_logical_per_package;
 }

 if (VAR_13->cpuid_cpufamily != 129)
  FUNC_3(VAR_13);

 FUNC_0("cpuid_set_info():\n");
 FUNC_0("  core_count   : %d\n", VAR_13->core_count);
 FUNC_0("  thread_count : %d\n", VAR_13->thread_count);
 FUNC_0("       cpu_type: 0x%08x\n", VAR_13->cpuid_cpu_type);
 FUNC_0("    cpu_subtype: 0x%08x\n", VAR_13->cpuid_cpu_subtype);

 VAR_13->cpuid_model_string = "";
}
