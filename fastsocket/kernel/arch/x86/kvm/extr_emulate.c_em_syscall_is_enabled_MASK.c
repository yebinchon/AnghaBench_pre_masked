
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct x86_emulate_ops {scalar_t__ (* get_cpuid ) (int ,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;} ;
struct x86_emulate_ctxt {scalar_t__ mode; int vcpu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static bool FUNC_1(struct x86_emulate_ctxt *VAR_10,
      struct x86_emulate_ops *VAR_11)
{
 u32 VAR_12, VAR_13, VAR_14, VAR_15;





 if (VAR_10->mode == VAR_9)
  return 1;

 VAR_12 = 0x00000000;
 VAR_14 = 0x00000000;
 if (VAR_11->get_cpuid(VAR_10->vcpu, &VAR_12, &VAR_13, &VAR_14, &VAR_15)) {
  if (VAR_13 == VAR_6 &&
      VAR_14 == VAR_7 &&
      VAR_15 == VAR_8)
   return 0;


      if (VAR_13 == VAR_3 &&
      VAR_14 == VAR_4 &&
      VAR_15 == VAR_5)
   return 1;


  if (VAR_13 == VAR_0 &&
      VAR_14 == VAR_1 &&
      VAR_15 == VAR_2)
   return 1;
 }


 return 0;
}
