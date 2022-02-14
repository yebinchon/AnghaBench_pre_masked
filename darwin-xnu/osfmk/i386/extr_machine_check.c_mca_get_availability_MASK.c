
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_6__ {int cpuid_features; scalar_t__ cpuid_family; scalar_t__ cpuid_model; scalar_t__ cpuid_stepping; } ;
struct TYPE_4__ {int mcg_ext_corr_err_p; int mcg_ctl_p; int count; } ;
struct TYPE_5__ {TYPE_1__ bits; int u64; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_0 () ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(void)
{
 uint64_t VAR_13 = FUNC_0()->cpuid_features;
 uint32_t VAR_14 = FUNC_0()->cpuid_family;
 uint32_t VAR_15 = FUNC_0()->cpuid_model;
 uint32_t VAR_16 = FUNC_0()->cpuid_stepping;

 if ((VAR_15 == VAR_3 && VAR_16 < 3) ||
     (VAR_15 == VAR_4 && VAR_16 < 1) ||
     (VAR_15 == VAR_2 && VAR_16 < 1))
  FUNC_1("Haswell pre-C0 steppings are not supported");

 VAR_8 = (VAR_13 & VAR_1) != 0;
 VAR_7 = (VAR_13 & VAR_0) != 0;
 VAR_12 = VAR_14;




 if (VAR_7) {
  VAR_6.u64 = FUNC_2(VAR_5);
  VAR_11 = VAR_6.bits.count;
  VAR_10 = VAR_6.bits.mcg_ctl_p;
  VAR_9 = VAR_6.bits.mcg_ext_corr_err_p;
 }
}
