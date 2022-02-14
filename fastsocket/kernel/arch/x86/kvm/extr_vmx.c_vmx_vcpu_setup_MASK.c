
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_8__ {int pat; unsigned long cr4_guest_owned_bits; } ;
struct TYPE_9__ {TYPE_3__ arch; int kvm; } ;
struct TYPE_6__ {int guest; int host; } ;
struct vcpu_vmx {scalar_t__ vpid; int nmsrs; TYPE_4__ vcpu; TYPE_2__* guest_msrs; TYPE_1__ msr_autoload; } ;
struct descriptor_table {unsigned long base; } ;
struct TYPE_10__ {int pin_based_exec_ctrl; int cpu_based_exec_ctrl; int cpu_based_2nd_exec_ctrl; int vmexit_ctrl; int vmentry_ctrl; } ;
struct TYPE_7__ {int index; unsigned long long mask; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 unsigned long VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int FUNC_0 (int ) ;
 int VAR_65 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int VAR_66 ;
 scalar_t__ VAR_67 ;
 int FUNC_3 (struct descriptor_table*) ;
 int VAR_68 ;
 int VAR_69 ;
 int FUNC_4 (int ,int,int) ;
 scalar_t__ FUNC_5 (int,int*,int*) ;
 int FUNC_6 (int ,unsigned long) ;
 unsigned long FUNC_7 () ;
 unsigned long FUNC_8 () ;
 unsigned long FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 TYPE_5__ VAR_70 ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ,unsigned long) ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int* VAR_74 ;
 scalar_t__ FUNC_16 (int,int,int) ;

__attribute__((used)) static int FUNC_17(struct vcpu_vmx *VAR_75)
{
 u32 VAR_76, VAR_77, VAR_78;
 u32 VAR_79;
 u64 VAR_80;
 unsigned long VAR_81;
 struct descriptor_table VAR_82;
 int VAR_83;
 unsigned long VAR_84;
 u32 VAR_85;


 FUNC_14(VAR_30, FUNC_0(VAR_71));
 FUNC_14(VAR_31, FUNC_0(VAR_72));

 if (FUNC_2())
  FUNC_14(VAR_33, FUNC_0(VAR_73));

 FUNC_14(VAR_53, -1ull);


 FUNC_13(VAR_43,
  VAR_70.pin_based_exec_ctrl);

 VAR_85 = VAR_70.cpu_based_exec_ctrl;
 if (!FUNC_10(VAR_75->vcpu.kvm)) {
  VAR_85 &= ~VAR_5;




 }
 if (!VAR_66)
  VAR_85 |= VAR_1 |
    VAR_0 |
    VAR_4;
 FUNC_13(VAR_6, VAR_85);

 if (FUNC_1()) {
  VAR_85 = VAR_70.cpu_based_2nd_exec_ctrl;
  if (!FUNC_11(VAR_75->vcpu.kvm))
   VAR_85 &=
    ~VAR_51;
  if (VAR_75->vpid == 0)
   VAR_85 &= ~VAR_48;
  if (!VAR_66) {
   VAR_85 &= ~VAR_46;
   VAR_67 = 0;

   VAR_85 &= ~VAR_47;
  }
  if (!VAR_67)
   VAR_85 &= ~VAR_50;
  if (!VAR_68)
   VAR_85 &= ~VAR_49;
  FUNC_13(VAR_52, VAR_85);
 }

 if (VAR_68) {
  FUNC_13(VAR_44, VAR_68);
  FUNC_13(VAR_45, VAR_69);
 }

 FUNC_13(VAR_41, !!VAR_65);
 FUNC_13(VAR_42, !!VAR_65);
 FUNC_13(VAR_8, 0);

 FUNC_15(VAR_12, FUNC_7());
 FUNC_15(VAR_14, FUNC_9());
 FUNC_15(VAR_13, FUNC_8());

 FUNC_12(VAR_15, VAR_63);
 FUNC_12(VAR_16, VAR_64);
 FUNC_12(VAR_17, VAR_64);
 FUNC_12(VAR_19, 0);
 FUNC_12(VAR_21, 0);
 FUNC_12(VAR_28, VAR_64);






 FUNC_15(VAR_18, 0);
 FUNC_15(VAR_20, 0);


 FUNC_12(VAR_29, VAR_10*8);

 FUNC_3(&VAR_82);
 FUNC_15(VAR_26, VAR_82.base);

 asm("mov $.Lkvm_vmx_return, %0" : "=r"(VAR_84));
 FUNC_15(VAR_27, VAR_84);
 FUNC_13(VAR_62, 0);
 FUNC_13(VAR_61, 0);
 FUNC_14(VAR_60, FUNC_0(VAR_75->msr_autoload.host));
 FUNC_13(VAR_57, 0);
 FUNC_14(VAR_56, FUNC_0(VAR_75->msr_autoload.guest));

 FUNC_4(VAR_37, VAR_76, VAR_79);
 FUNC_13(VAR_23, VAR_76);
 FUNC_6(VAR_39, VAR_81);
 FUNC_15(VAR_25, VAR_81);
 FUNC_6(VAR_38, VAR_81);
 FUNC_15(VAR_24, VAR_81);

 if (VAR_70.vmexit_ctrl & VAR_59) {
  FUNC_4(VAR_36, VAR_77, VAR_78);
  VAR_80 = VAR_77 | ((u64) VAR_78 << 32);
  FUNC_14(VAR_22, VAR_80);
 }
 if (VAR_70.vmentry_ctrl & VAR_55) {
  FUNC_4(VAR_36, VAR_77, VAR_78);
  VAR_80 = VAR_77 | ((u64) VAR_78 << 32);

  FUNC_14(VAR_11, VAR_80);

  VAR_75->vcpu.arch.pat = VAR_80;
 }

 for (VAR_83 = 0; VAR_83 < VAR_40; ++VAR_83) {
  u32 VAR_86 = VAR_74[VAR_83];
  u32 VAR_87, VAR_88;
  u64 VAR_89;
  int VAR_90 = VAR_75->nmsrs;

  if (FUNC_5(VAR_86, &VAR_87, &VAR_88) < 0)
   continue;
  if (FUNC_16(VAR_86, VAR_87, VAR_88) < 0)
   continue;
  VAR_89 = VAR_87 | ((u64)VAR_88 << 32);
  VAR_75->guest_msrs[VAR_90].index = VAR_83;
  VAR_75->guest_msrs[VAR_90].data = 0;
  VAR_75->guest_msrs[VAR_90].mask = -1ull;
  ++VAR_75->nmsrs;
 }

 FUNC_13(VAR_58, VAR_70.vmexit_ctrl);


 FUNC_13(VAR_54, VAR_70.vmentry_ctrl);

 FUNC_15(VAR_7, ~0UL);
 FUNC_15(VAR_9, VAR_32);
 VAR_75->vcpu.arch.cr4_guest_owned_bits = ~VAR_32;

 return 0;
}
