
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_e500 {int mas4; int mas0; int mas1; unsigned int mas2; int mas3; int mas6; scalar_t__ mas7; int * pid; int * guest_tlb_nv; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (unsigned int) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct kvm_vcpu*) ;
 unsigned int FUNC_6 (struct kvmppc_vcpu_e500*) ;
 struct kvmppc_vcpu_e500* FUNC_7 (struct kvm_vcpu*) ;

__attribute__((used)) static inline void FUNC_8(struct kvm_vcpu *VAR_10,
  unsigned int VAR_11, int VAR_12)
{
 struct kvmppc_vcpu_e500 *VAR_13 = FUNC_7(VAR_10);
 unsigned int VAR_14, VAR_15, VAR_16;
 int VAR_17;


 VAR_17 = (VAR_13->mas4 >> 28) & 0x1;
 VAR_14 = (VAR_17 == 0) ? FUNC_6(VAR_13) : 0;
 VAR_15 = (VAR_13->mas4 >> 16) & 0xf;
 VAR_16 = (VAR_13->mas4 >> 7) & 0x1f;

 VAR_13->mas0 = FUNC_2(VAR_17) | FUNC_0(VAR_14)
  | FUNC_1(VAR_13->guest_tlb_nv[VAR_17]);
 VAR_13->mas1 = VAR_1 | (VAR_12 ? VAR_0 : 0)
  | FUNC_3(VAR_13->pid[VAR_15])
  | FUNC_4(VAR_16);
 VAR_13->mas2 = (VAR_11 & VAR_3)
  | (VAR_13->mas4 & VAR_2);
 VAR_13->mas3 &= VAR_4 | VAR_5 | VAR_6 | VAR_7;
 VAR_13->mas6 = (VAR_13->mas6 & VAR_9)
  | (FUNC_5(VAR_10) << 16)
  | (VAR_12 ? VAR_8 : 0);
 VAR_13->mas7 = 0;
}
