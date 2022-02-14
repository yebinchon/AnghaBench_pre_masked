
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_segment {int type; } ;
struct desc_struct {int dpl; int type; int p; } ;
struct TYPE_2__ {int (* get_cpl ) (struct kvm_vcpu*) ;int (* get_rflags ) (struct kvm_vcpu*) ;int (* set_cr0 ) (struct kvm_vcpu*,int) ;int (* set_rflags ) (struct kvm_vcpu*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct desc_struct*) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 (struct kvm_vcpu*,int,int *) ;
 int FUNC_4 (struct kvm_vcpu*,int ,int) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*,struct kvm_segment*,int ) ;
 int FUNC_7 (struct kvm_vcpu*,int,int,int,struct desc_struct*) ;
 int FUNC_8 (struct kvm_vcpu*,int,int,int,struct desc_struct*,int,int) ;
 TYPE_1__* VAR_9 ;
 scalar_t__ FUNC_9 (struct kvm_vcpu*,int,struct desc_struct*) ;
 int FUNC_10 (struct kvm_vcpu*,int,struct desc_struct*) ;
 int FUNC_11 (struct desc_struct*,int,struct kvm_segment*) ;
 int FUNC_12 (struct kvm_vcpu*) ;
 int FUNC_13 (struct kvm_vcpu*) ;
 int FUNC_14 (struct kvm_vcpu*,int) ;
 int FUNC_15 (struct kvm_vcpu*) ;
 int FUNC_16 (struct kvm_vcpu*,int) ;
 int FUNC_17 (struct kvm_vcpu*,int) ;

int FUNC_18(struct kvm_vcpu *VAR_10, u16 VAR_11, int VAR_12,
      bool VAR_13, u32 VAR_14)
{
 struct kvm_segment VAR_15;
 struct desc_struct VAR_16;
 struct desc_struct VAR_17;
 int VAR_18 = 0;
 u32 VAR_19 = FUNC_1(VAR_10, VAR_6);
 u16 VAR_20 = FUNC_2(VAR_10, VAR_6);

 VAR_19 = FUNC_3(VAR_10, VAR_19, ((void*)0));




 if (FUNC_9(VAR_10, VAR_11, &VAR_17))
  goto out;

 if (FUNC_9(VAR_10, VAR_20, &VAR_16))
  goto out;

 if (VAR_12 != VAR_3) {
  int VAR_21;

  VAR_21 = VAR_9->get_cpl(VAR_10);
  if ((VAR_11 & 3) > VAR_17.dpl || VAR_21 > VAR_17.dpl) {
   FUNC_4(VAR_10, VAR_0, 0);
   return 1;
  }
 }

 if (!VAR_17.p || FUNC_0(&VAR_17) < 0x67) {
  FUNC_4(VAR_10, VAR_5, VAR_11 & 0xfffc);
  return 1;
 }

 if (VAR_12 == VAR_3 || VAR_12 == VAR_4) {
  VAR_16.type &= ~(1 << 1);
  FUNC_10(VAR_10, VAR_20, &VAR_16);
 }

 if (VAR_12 == VAR_3) {
  u32 VAR_22 = VAR_9->get_rflags(VAR_10);
  VAR_9->set_rflags(VAR_10, VAR_22 & ~VAR_8);
 }



 if (VAR_12 != VAR_1 && VAR_12 != VAR_2)
  VAR_20 = 0xffff;



 if (VAR_12 != VAR_1 && VAR_12 != VAR_2)
  VAR_20 = 0xffff;

 if (VAR_17.type & 8)
  VAR_18 = FUNC_8(VAR_10, VAR_11, VAR_20,
      VAR_19, &VAR_17,
      VAR_13, VAR_14);
 else
  VAR_18 = FUNC_7(VAR_10, VAR_11, VAR_20,
      VAR_19, &VAR_17);

 if (VAR_12 == VAR_1 || VAR_12 == VAR_2) {
  u32 VAR_23 = VAR_9->get_rflags(VAR_10);
  VAR_9->set_rflags(VAR_10, VAR_23 | VAR_8);
 }

 if (VAR_12 != VAR_3) {
  VAR_17.type |= (1 << 1);
  FUNC_10(VAR_10, VAR_11,
           &VAR_17);
 }

 VAR_9->set_cr0(VAR_10, FUNC_5(VAR_10) | VAR_7);
 FUNC_11(&VAR_17, VAR_11, &VAR_15);
 VAR_15.type = 11;
 FUNC_6(VAR_10, &VAR_15, VAR_6);
out:
 return VAR_18;
}
