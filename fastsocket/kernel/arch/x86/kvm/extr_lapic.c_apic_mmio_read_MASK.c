
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct kvm_lapic {scalar_t__ base_address; } ;
struct kvm_io_device {int dummy; } ;
typedef scalar_t__ gpa_t ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_lapic*,scalar_t__) ;
 int FUNC_1 (struct kvm_lapic*,scalar_t__,int,void*) ;
 struct kvm_lapic* FUNC_2 (struct kvm_io_device*) ;

__attribute__((used)) static int FUNC_3(struct kvm_io_device *VAR_1,
      gpa_t VAR_2, int VAR_3, void *VAR_4)
{
 struct kvm_lapic *VAR_5 = FUNC_2(VAR_1);
 u32 VAR_6 = VAR_2 - VAR_5->base_address;

 if (!FUNC_0(VAR_5, VAR_2))
  return -VAR_0;

 FUNC_1(VAR_5, VAR_6, VAR_3, VAR_4);

 return 0;
}
