
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ (* gva_to_gpa ) (struct kvm_vcpu*,int,int ,int *) ;} ;
struct TYPE_3__ {TYPE_2__ mmu; } ;
struct kvm_vcpu {int kvm; TYPE_1__ arch; } ;
typedef int gva_t ;
typedef scalar_t__ gpa_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__,void*,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,int,int ,int *) ;

__attribute__((used)) static int FUNC_3(gva_t VAR_5, void *VAR_6, unsigned int VAR_7,
          struct kvm_vcpu *VAR_8, u32 VAR_9,
          u32 *VAR_10)
{
 void *VAR_11 = VAR_6;
 int VAR_12 = VAR_2;

 while (VAR_7) {
  gpa_t VAR_13 = VAR_8->arch.mmu.gva_to_gpa(VAR_8, VAR_5, VAR_9, VAR_10);
  unsigned VAR_14 = VAR_5 & (VAR_0-1);
  unsigned VAR_15 = FUNC_1(VAR_7, (unsigned)VAR_0 - VAR_14);
  int VAR_16;

  if (VAR_13 == VAR_1) {
   VAR_12 = VAR_3;
   goto out;
  }
  VAR_16 = FUNC_0(VAR_8->kvm, VAR_13, VAR_11, VAR_15);
  if (VAR_16 < 0) {
   VAR_12 = VAR_4;
   goto out;
  }

  VAR_7 -= VAR_15;
  VAR_11 += VAR_15;
  VAR_5 += VAR_15;
 }
out:
 return VAR_12;
}
