
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct kvm_device_desc {scalar_t__ num_vq; } ;


 scalar_t__ FUNC_0 (struct kvm_device_desc const*) ;

__attribute__((used)) static u8 *FUNC_1(const struct kvm_device_desc *VAR_0)
{
 return (u8 *)(FUNC_0(VAR_0) + VAR_0->num_vq);
}
