
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vq_callback_t ;
struct virtqueue {int dummy; } ;
struct virtio_device {int dummy; } ;
struct kvm_device {TYPE_1__* desc; } ;
struct TYPE_2__ {unsigned int num_vq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct virtqueue*) ;
 int FUNC_1 (struct virtqueue*) ;
 int FUNC_2 (struct virtio_device*) ;
 struct virtqueue* FUNC_3 (struct virtio_device*,int,int *,char const*) ;
 struct kvm_device* FUNC_4 (struct virtio_device*) ;

__attribute__((used)) static int FUNC_5(struct virtio_device *VAR_1, unsigned VAR_2,
   struct virtqueue *VAR_3[],
   vq_callback_t *VAR_4[],
   const char *VAR_5[])
{
 struct kvm_device *VAR_6 = FUNC_4(VAR_1);
 int VAR_7;


 if (VAR_2 > VAR_6->desc->num_vq)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
  VAR_3[VAR_7] = FUNC_3(VAR_1, VAR_7, VAR_4[VAR_7], VAR_5[VAR_7]);
  if (FUNC_0(VAR_3[VAR_7]))
   goto error;
 }
 return 0;

error:
 FUNC_2(VAR_1);
 return FUNC_1(VAR_3[VAR_7]);
}
