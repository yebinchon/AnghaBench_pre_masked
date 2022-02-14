
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct msr_data {int data; } ;
struct TYPE_6__ {scalar_t__ tsc_timestamp; } ;
struct TYPE_7__ {int last_tsc_write; int last_tsc_nsec; TYPE_2__ hv_clock; } ;
struct kvm_vcpu {TYPE_3__ arch; struct kvm* kvm; } ;
struct TYPE_5__ {int last_tsc_nsec; int last_tsc_write; int last_tsc_offset; int tsc_write_lock; } ;
struct kvm {TYPE_1__ arch; } ;
typedef int s64 ;
struct TYPE_8__ {int (* compute_tsc_offset ) (struct kvm_vcpu*,int) ;int (* write_tsc_offset ) (struct kvm_vcpu*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_4__* VAR_1 ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct kvm_vcpu*,int) ;
 int FUNC_7 (struct kvm_vcpu*,int) ;

void FUNC_8(struct kvm_vcpu *VAR_2, struct msr_data *VAR_3)
{
 struct kvm *VAR_4 = VAR_2->kvm;
 u64 VAR_5, VAR_6, VAR_7;
 unsigned long VAR_8;
 s64 VAR_9;
 u64 VAR_10;
 u64 VAR_11 = VAR_3->data;

 FUNC_4(&VAR_4->arch.tsc_write_lock, VAR_8);
 VAR_5 = VAR_1->compute_tsc_offset(VAR_2, VAR_11);
 VAR_6 = FUNC_1();
 VAR_7 = VAR_6 - VAR_4->arch.last_tsc_nsec;
 VAR_9 = VAR_11 - VAR_4->arch.last_tsc_write;
 if (VAR_9 < 0)
  VAR_9 = -VAR_9;
 VAR_10 = FUNC_2(VAR_2, VAR_7);
 VAR_9 -= VAR_10;
 if (VAR_9 < 0)
  VAR_9 = -VAR_9;
 if (VAR_9 < FUNC_2(VAR_2, 1 * VAR_0) ) {
  if (!FUNC_0()) {
   VAR_5 = VAR_4->arch.last_tsc_offset;
   FUNC_3("kvm: matched tsc offset for %llu\n", VAR_11);
  } else {

   FUNC_3("kvm: matched write on unstable tsc\n");
  }
 } else {
  VAR_4->arch.last_tsc_nsec = VAR_6;
  VAR_4->arch.last_tsc_write = VAR_11;
  VAR_4->arch.last_tsc_offset = VAR_5;
 }
 VAR_1->write_tsc_offset(VAR_2, VAR_5);
 FUNC_5(&VAR_4->arch.tsc_write_lock, VAR_8);


 VAR_2->arch.hv_clock.tsc_timestamp = 0;
 VAR_2->arch.last_tsc_write = VAR_11;
 VAR_2->arch.last_tsc_nsec = VAR_6;
}
