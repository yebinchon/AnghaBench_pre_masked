
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_device {int dummy; } ;
struct kvm_device_desc {unsigned int config_len; } ;
struct TYPE_2__ {struct kvm_device_desc* desc; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct kvm_device_desc*) ;
 int FUNC_2 (void*,scalar_t__,unsigned int) ;
 TYPE_1__* FUNC_3 (struct virtio_device*) ;

__attribute__((used)) static void FUNC_4(struct virtio_device *VAR_0, unsigned int VAR_1,
     void *VAR_2, unsigned VAR_3)
{
 struct kvm_device_desc *VAR_4 = FUNC_3(VAR_0)->desc;

 FUNC_0(VAR_1 + VAR_3 > VAR_4->config_len);
 FUNC_2(VAR_2, FUNC_1(VAR_4) + VAR_1, VAR_3);
}
