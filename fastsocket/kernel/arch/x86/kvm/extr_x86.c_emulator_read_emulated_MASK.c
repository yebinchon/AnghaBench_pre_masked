
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct kvm_vcpu {int mmio_phys_addr; int mmio_needed; unsigned int mmio_size; scalar_t__ mmio_is_write; scalar_t__ mmio_read_completed; int mmio_data; } ;
typedef int gpa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct kvm_vcpu*,unsigned long,int ) ;
 int FUNC_1 (struct kvm_vcpu*,unsigned long,int *) ;
 int FUNC_2 (unsigned long,void*,unsigned int,struct kvm_vcpu*,int *) ;
 int FUNC_3 (void*,int ,unsigned int) ;
 int FUNC_4 (int ,unsigned int,int,int ) ;
 int FUNC_5 (struct kvm_vcpu*,int,unsigned int,void*) ;

__attribute__((used)) static int FUNC_6(unsigned long VAR_8,
      void *VAR_9,
      unsigned int VAR_10,
      struct kvm_vcpu *VAR_11)
{
 gpa_t VAR_12;
 u32 VAR_13;

 if (VAR_11->mmio_read_completed) {
  FUNC_3(VAR_9, VAR_11->mmio_data, VAR_10);
  FUNC_4(VAR_1, VAR_10,
          VAR_11->mmio_phys_addr, *(u64 *)VAR_9);
  VAR_11->mmio_read_completed = 0;
  return VAR_5;
 }

 VAR_12 = FUNC_1(VAR_11, VAR_8, &VAR_13);

 if (VAR_12 == VAR_4) {
  FUNC_0(VAR_11, VAR_8, VAR_13);
  return VAR_6;
 }


 if ((VAR_12 & VAR_3) == VAR_0)
  goto mmio;

 if (FUNC_2(VAR_8, VAR_9, VAR_10, VAR_11, ((void*)0))
    == VAR_5)
  return VAR_5;

mmio:



 if (!FUNC_5(VAR_11, VAR_12, VAR_10, VAR_9)) {
  FUNC_4(VAR_1, VAR_10, VAR_12, *(u64 *)VAR_9);
  return VAR_5;
 }

 FUNC_4(VAR_2, VAR_10, VAR_12, 0);

 VAR_11->mmio_needed = 1;
 VAR_11->mmio_phys_addr = VAR_12;
 VAR_11->mmio_size = VAR_10;
 VAR_11->mmio_is_write = 0;

 return VAR_7;
}
