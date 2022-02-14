
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int u64 ;
typedef int u16 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_pt_regs {int cr_ipsr; int cr_iip; } ;
struct ia64_psr {int ri; } ;
struct TYPE_24__ {int* bits; } ;
struct ia64_fpreg {TYPE_8__ u; } ;
typedef int s32 ;
struct TYPE_25__ {int major; int m; int x; int x6; int r3; int f2; int f1; } ;
struct TYPE_23__ {int major; int x6; int s; int i; int imm7; int r3; } ;
struct TYPE_22__ {int major; int x6; int s; int i; int imm7; int r3; int f2; } ;
struct TYPE_21__ {int major; int x6; scalar_t__ m; scalar_t__ x; int f2; } ;
struct TYPE_20__ {int major; int x6; int s; int i; int imm7; int r3; } ;
struct TYPE_19__ {int x6; int s; int i; int imm7; int r3; int r2; } ;
struct TYPE_18__ {int major; int m; scalar_t__ x; int x6; int r3; int r2; } ;
struct TYPE_17__ {int r2; } ;
struct TYPE_16__ {int slot0; int slot1a; int slot1b; int slot2; int * i64; } ;
struct TYPE_14__ {int major; scalar_t__ m; scalar_t__ x; int x6; int r1; } ;
struct TYPE_15__ {int inst; TYPE_10__ M1; TYPE_9__ M12; TYPE_7__ M15; TYPE_6__ M10; TYPE_5__ M9; TYPE_4__ M3; TYPE_3__ M5; TYPE_2__ M2; TYPE_1__ M4; } ;
typedef TYPE_11__ INST64 ;
typedef TYPE_12__ IA64_BUNDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*,int ,TYPE_12__*) ;
 int FUNC_1 (struct kvm_vcpu*,int,int*,int,int,int) ;
 int FUNC_2 (struct kvm_vcpu*,char*,...) ;
 int FUNC_3 (struct kvm_vcpu*,int ,struct ia64_fpreg*) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 struct kvm_pt_regs* FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*,int ,struct ia64_fpreg*) ;
 int FUNC_8 (struct kvm_vcpu*,int ,int,int ) ;

void FUNC_9(struct kvm_vcpu *VAR_4, u64 VAR_5, u64 VAR_6)
{
 struct kvm_pt_regs *VAR_7;
 IA64_BUNDLE VAR_8;
 int VAR_9, VAR_10 = 0;
 int VAR_11 = -1;
 u16 VAR_12 = 0;
 u64 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 s32 VAR_18;
 INST64 VAR_19;

 VAR_7 = FUNC_6(VAR_4);

 if (FUNC_0(VAR_4, VAR_7->cr_iip, &VAR_8)) {

  return;
 }
 VAR_9 = ((struct ia64_psr *)&(VAR_7->cr_ipsr))->ri;
 if (!VAR_9)
  VAR_19.inst = VAR_8.slot0;
 else if (VAR_9 == 1) {
  VAR_14 = VAR_8.slot1a;
  VAR_15 = VAR_8.slot1b;
  VAR_19.inst = VAR_14 + (VAR_15 << 18);
 } else if (VAR_9 == 2)
  VAR_19.inst = VAR_8.slot2;


 if (VAR_19.M1.major == 4 && VAR_19.M1.m == 0 && VAR_19.M1.x == 0) {
  VAR_11 = VAR_3;
  VAR_12 = (VAR_19.M1.x6 & 0x3);
  if ((VAR_19.M1.x6 >> 2) > 0xb) {

   VAR_10 = VAR_1;
   VAR_13 = FUNC_4(VAR_4, VAR_19.M4.r2);
  } else if ((VAR_19.M1.x6 >> 2) < 0xb) {

   VAR_10 = VAR_0;
  }
 } else if (VAR_19.M2.major == 4 && VAR_19.M2.m == 1 && VAR_19.M2.x == 0) {

  VAR_11 = VAR_3;
  VAR_10 = VAR_0;
  VAR_12 = (VAR_19.M2.x6 & 0x3);
  VAR_16 = FUNC_4(VAR_4, VAR_19.M2.r3);
  VAR_17 = FUNC_4(VAR_4, VAR_19.M2.r2);
  VAR_16 += VAR_17;
  FUNC_8(VAR_4, VAR_19.M2.r3, VAR_16, 0);
 } else if (VAR_19.M3.major == 5) {

  VAR_11 = VAR_3;
  VAR_12 = (VAR_19.M3.x6&0x3);
  if ((VAR_19.M5.x6 >> 2) > 0xb) {

   VAR_10 = VAR_1;
   VAR_13 = FUNC_4(VAR_4, VAR_19.M5.r2);
   VAR_16 = FUNC_4(VAR_4, VAR_19.M5.r3);
   VAR_18 = (VAR_19.M5.s << 31) | (VAR_19.M5.i << 30) |
    (VAR_19.M5.imm7 << 23);
   VAR_16 += VAR_18 >> 23;
   FUNC_8(VAR_4, VAR_19.M5.r3, VAR_16, 0);

  } else if ((VAR_19.M3.x6 >> 2) < 0xb) {

   VAR_10 = VAR_0;
   VAR_16 = FUNC_4(VAR_4, VAR_19.M3.r3);
   VAR_18 = (VAR_19.M3.s << 31) | (VAR_19.M3.i << 30) |
    (VAR_19.M3.imm7 << 23);
   VAR_16 += VAR_18 >> 23;
   FUNC_8(VAR_4, VAR_19.M3.r3, VAR_16, 0);

  }
 } else if (VAR_19.M9.major == 6 && VAR_19.M9.x6 == 0x3B
    && VAR_19.M9.m == 0 && VAR_19.M9.x == 0) {

  struct ia64_fpreg VAR_20;

  VAR_11 = VAR_2;
  VAR_10 = VAR_1;
  FUNC_3(VAR_4, VAR_19.M9.f2, &VAR_20);

  VAR_20.u.bits[1] &= 0x3ffff;
  FUNC_1(VAR_4, VAR_5 + 8, (u64 *)&VAR_20.u.bits[1], 8,
       VAR_6, VAR_1);
  VAR_13 = VAR_20.u.bits[0];
  VAR_12 = 3;
 } else if (VAR_19.M10.major == 7 && VAR_19.M10.x6 == 0x3B) {

  struct ia64_fpreg VAR_21;

  VAR_11 = VAR_2;
  VAR_10 = VAR_1;
  FUNC_3(VAR_4, VAR_19.M10.f2, &VAR_21);
  VAR_16 = FUNC_4(VAR_4, VAR_19.M10.r3);
  VAR_18 = (VAR_19.M10.s << 31) | (VAR_19.M10.i << 30) |
   (VAR_19.M10.imm7 << 23);
  VAR_16 += VAR_18 >> 23;
  FUNC_8(VAR_4, VAR_19.M10.r3, VAR_16, 0);


  VAR_21.u.bits[1] &= 0x3ffff;
  FUNC_1(VAR_4, VAR_5 + 8, (u64 *)&VAR_21.u.bits[1],
       8, VAR_6, VAR_1);
  VAR_13 = VAR_21.u.bits[0];
  VAR_12 = 3;
 } else if (VAR_19.M10.major == 7 && VAR_19.M10.x6 == 0x31) {

  struct ia64_fpreg VAR_22;
  VAR_11 = VAR_2;
  VAR_10 = VAR_1;
  VAR_12 = 3;
  FUNC_3(VAR_4, VAR_19.M10.f2, &VAR_22);
  VAR_13 = VAR_22.u.bits[0];
  VAR_16 = FUNC_4(VAR_4, VAR_19.M10.r3);
  VAR_18 = (VAR_19.M10.s << 31) | (VAR_19.M10.i << 30) |
   (VAR_19.M10.imm7 << 23);
  VAR_16 += VAR_18 >> 23;
  FUNC_8(VAR_4, VAR_19.M10.r3, VAR_16, 0);
 } else if (VAR_19.M15.major == 7 && VAR_19.M15.x6 >= 0x2c
   && VAR_19.M15.x6 <= 0x2f) {
  VAR_16 = FUNC_4(VAR_4, VAR_19.M15.r3);
  VAR_18 = (VAR_19.M15.s << 31) | (VAR_19.M15.i << 30) |
   (VAR_19.M15.imm7 << 23);
  VAR_16 += VAR_18 >> 23;
  FUNC_8(VAR_4, VAR_19.M15.r3, VAR_16, 0);

  FUNC_5(VAR_4);
  return;
 } else if (VAR_19.M12.major == 6 && VAR_19.M12.m == 1
   && VAR_19.M12.x == 1 && VAR_19.M12.x6 == 1) {

  struct ia64_fpreg VAR_23;

  VAR_11 = VAR_2;
  VAR_10 = VAR_0;
  VAR_12 = 8;
  FUNC_1(VAR_4, VAR_5, &VAR_13, VAR_12, VAR_6, VAR_10);
  VAR_23.u.bits[0] = VAR_13;
  VAR_23.u.bits[1] = 0x1003E;
  FUNC_7(VAR_4, VAR_19.M12.f1, &VAR_23);
  VAR_5 += 8;
  FUNC_1(VAR_4, VAR_5, &VAR_13, VAR_12, VAR_6, VAR_10);
  VAR_23.u.bits[0] = VAR_13;
  VAR_23.u.bits[1] = 0x1003E;
  FUNC_7(VAR_4, VAR_19.M12.f2, &VAR_23);
  VAR_5 += 8;
  FUNC_8(VAR_4, VAR_19.M12.r3, VAR_5, 0);
  FUNC_5(VAR_4);
  return;
 } else {
  VAR_11 = -1;
  FUNC_2(VAR_4, "Unsupported MMIO access instruction! 				Bunld[0]=0x%lx, Bundle[1]=0x%lx\n",

    VAR_8.i64[0], VAR_8.i64[1]);
 }

 VAR_12 = 1 << VAR_12;
 if (VAR_10 == VAR_1) {
  FUNC_1(VAR_4, VAR_5, &VAR_13, VAR_12, VAR_6, VAR_10);
 } else {
  FUNC_1(VAR_4, VAR_5, &VAR_13, VAR_12, VAR_6, VAR_10);
  if (VAR_11 == VAR_3)
   FUNC_8(VAR_4, VAR_19.M1.r1, VAR_13, 0);
  else
   FUNC_2(VAR_4, "Unsupported instruction type!\n");

 }
 FUNC_5(VAR_4);
}
