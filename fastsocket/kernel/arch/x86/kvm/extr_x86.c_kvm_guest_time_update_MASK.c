
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct pvclock_vcpu_time_info {int flags; } ;
struct TYPE_10__ {scalar_t__ tsc_timestamp; int version; int flags; scalar_t__ system_time; int tsc_to_system_mul; int tsc_shift; } ;
struct kvm_vcpu_arch {scalar_t__ last_guest_tsc; scalar_t__ last_kernel_ns; unsigned long hw_tsc_khz; unsigned long long time; int pvclock_set_guest_stopped_request; TYPE_3__ hv_clock; int pv_time; int pv_time_enabled; scalar_t__ tsc_catchup; } ;
struct kvm_vcpu {TYPE_2__* kvm; int requests; struct kvm_vcpu_arch arch; } ;
typedef scalar_t__ s64 ;
typedef int guest_hv_clock ;
typedef unsigned long long gpa_t ;
struct TYPE_8__ {scalar_t__ kvmclock_offset; } ;
struct TYPE_9__ {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct kvm_vcpu*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*,scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct kvm_vcpu*,int ,scalar_t__*) ;
 int FUNC_4 (int,unsigned long,int *,int *) ;
 int FUNC_5 (TYPE_2__*,unsigned long long,struct pvclock_vcpu_time_info*,int) ;
 int FUNC_6 (TYPE_2__*,int *,struct pvclock_vcpu_time_info*,int) ;
 int FUNC_7 (TYPE_2__*,unsigned long long,TYPE_3__*,int) ;
 int FUNC_8 (TYPE_2__*,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (unsigned long) ;
 int FUNC_12 (unsigned long long) ;
 scalar_t__ FUNC_13 (scalar_t__,int ,int ) ;
 int FUNC_14 (int ,int *) ;
 scalar_t__ FUNC_15 (int) ;
 unsigned long FUNC_16 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_17(struct kvm_vcpu *VAR_6)
{
 unsigned long VAR_7;
 struct kvm_vcpu_arch *VAR_8 = &VAR_6->arch;
 unsigned long VAR_9;
 s64 VAR_10, VAR_11;
 u64 VAR_12;
 struct pvclock_vcpu_time_info VAR_13;
 u8 VAR_14;
 bool VAR_15;
 gpa_t VAR_16;


 FUNC_11(VAR_7);
 FUNC_3(VAR_6, VAR_2, &VAR_12);
 VAR_10 = FUNC_2();
 VAR_9 = FUNC_16(VAR_6);

 if (FUNC_15(VAR_9 == 0)) {
  FUNC_10(VAR_7);
  FUNC_14(VAR_1, &VAR_6->requests);
  return 1;
 }
 if (VAR_8->tsc_catchup) {
  u64 VAR_17 = FUNC_1(VAR_6, VAR_10);
  if (VAR_17 > VAR_12) {
   FUNC_0(VAR_6, VAR_17 - VAR_12);
   VAR_12 = VAR_17;
  }
 }

 FUNC_10(VAR_7);

 if (!VAR_8->pv_time_enabled)
  return 0;
 VAR_11 = 0;
 if (VAR_8->hv_clock.tsc_timestamp && VAR_8->last_guest_tsc) {
  VAR_11 = VAR_8->last_guest_tsc -
    VAR_8->hv_clock.tsc_timestamp;
  VAR_11 = FUNC_13(VAR_11,
        VAR_8->hv_clock.tsc_to_system_mul,
        VAR_8->hv_clock.tsc_shift);
  VAR_11 += VAR_8->last_kernel_ns;
 }

 if (FUNC_15(VAR_8->hw_tsc_khz != VAR_9)) {
  FUNC_4(VAR_3 / 1000, VAR_9,
       &VAR_8->hv_clock.tsc_shift,
       &VAR_8->hv_clock.tsc_to_system_mul);
  VAR_8->hw_tsc_khz = VAR_9;
 }

 if (VAR_11 > VAR_10)
  VAR_10 = VAR_11;


 VAR_8->hv_clock.tsc_timestamp = VAR_12;
 VAR_8->hv_clock.system_time = VAR_10 + VAR_6->kvm->arch.kvmclock_offset;
 VAR_8->last_kernel_ns = VAR_10;
 VAR_8->last_guest_tsc = VAR_12;







 VAR_8->hv_clock.version += 2;

 VAR_16 = VAR_8->time & ~1ULL;
 VAR_15 = sizeof(VAR_13) <= (VAR_4 -
    FUNC_12(VAR_16));

 if (FUNC_9(VAR_15)) {
  if (FUNC_15(FUNC_6(VAR_6->kvm, &VAR_8->pv_time,
    &VAR_13, sizeof(VAR_13))))
   return -VAR_0;
 } else if (FUNC_15(FUNC_5(VAR_6->kvm, VAR_16,
    &VAR_13, sizeof(VAR_13))))
   return -VAR_0;


 VAR_14 = (VAR_13.flags & VAR_5);

 if (VAR_8->pvclock_set_guest_stopped_request) {
  VAR_14 |= VAR_5;
  VAR_8->pvclock_set_guest_stopped_request = 0;
 }

 VAR_8->hv_clock.flags = VAR_14;

 if (FUNC_9(VAR_15))
  FUNC_8(VAR_6->kvm, &VAR_8->pv_time,
     &VAR_8->hv_clock,
     sizeof(VAR_8->hv_clock));
 else
  FUNC_7(VAR_6->kvm, VAR_16, &VAR_8->hv_clock,
    sizeof(VAR_13));

 return 0;
}
