
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct kvm_vcpu {int mmio_needed; int mmio_phys_addr; unsigned int mmio_size; int mmio_is_write; int mmio_data; } ;
typedef int gpa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*,int,void const*,unsigned int) ;
 int FUNC_1 (struct kvm_vcpu*,unsigned long,int ) ;
 int FUNC_2 (struct kvm_vcpu*,unsigned long,int *) ;
 int FUNC_3 (int ,void const*,unsigned int) ;
 int FUNC_4 (int ,unsigned int,int,int ) ;
 int FUNC_5 (struct kvm_vcpu*,int,unsigned int,void const*) ;

__attribute__((used)) static int FUNC_6(unsigned long VAR_6,
        const void *VAR_7,
        unsigned int VAR_8,
        struct kvm_vcpu *VAR_9)
{
 gpa_t VAR_10;
 u32 VAR_11;

 VAR_10 = FUNC_2(VAR_9, VAR_6, &VAR_11);

 if (VAR_10 == VAR_3) {
  FUNC_1(VAR_9, VAR_6, VAR_11);
  return VAR_5;
 }


 if ((VAR_10 & VAR_2) == VAR_0)
  goto mmio;

 if (FUNC_0(VAR_9, VAR_10, VAR_7, VAR_8))
  return VAR_4;

mmio:
 FUNC_4(VAR_1, VAR_8, VAR_10, *(u64 *)VAR_7);



 if (!FUNC_5(VAR_9, VAR_10, VAR_8, VAR_7))
  return VAR_4;

 VAR_9->mmio_needed = 1;
 VAR_9->mmio_phys_addr = VAR_10;
 VAR_9->mmio_size = VAR_8;
 VAR_9->mmio_is_write = 1;
 FUNC_3(VAR_9->mmio_data, VAR_7, VAR_8);

 return VAR_4;
}
