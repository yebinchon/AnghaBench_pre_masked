
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vqconfig {int dummy; } ;
struct kvm_device_desc {int num_vq; int feature_len; int config_len; } ;



__attribute__((used)) static unsigned FUNC_0(const struct kvm_device_desc *VAR_0)
{
 return sizeof(*VAR_0)
  + VAR_0->num_vq * sizeof(struct kvm_vqconfig)
  + VAR_0->feature_len * 2
  + VAR_0->config_len;
}
