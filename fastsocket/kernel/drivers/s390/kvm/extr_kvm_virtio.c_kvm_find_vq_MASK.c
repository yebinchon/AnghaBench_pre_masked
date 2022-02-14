
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct virtqueue {struct kvm_vqconfig* priv; } ;
struct virtio_device {int dummy; } ;
struct kvm_vqconfig {int num; scalar_t__ address; scalar_t__ token; } ;
struct kvm_device {TYPE_1__* desc; } ;
struct TYPE_2__ {unsigned int num_vq; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct virtqueue* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct kvm_vqconfig* FUNC_1 (TYPE_1__*) ;
 struct kvm_device* FUNC_2 (struct virtio_device*) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 struct virtqueue* FUNC_5 (int ,int ,struct virtio_device*,void*,int ,void (*) (struct virtqueue*),char const*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static struct virtqueue *FUNC_7(struct virtio_device *VAR_4,
         unsigned VAR_5,
         void (*VAR_6)(struct virtqueue *VAR_7),
         const char *VAR_8)
{
 struct kvm_device *VAR_9 = FUNC_2(VAR_4);
 struct kvm_vqconfig *VAR_10;
 struct virtqueue *VAR_11;
 int VAR_12;

 if (VAR_5 >= VAR_9->desc->num_vq)
  return FUNC_0(-VAR_0);

 VAR_10 = FUNC_1(VAR_9->desc)+VAR_5;

 VAR_12 = FUNC_3(VAR_10->address,
          FUNC_6(VAR_10->num,
       VAR_2));
 if (VAR_12)
  goto out;

 VAR_11 = FUNC_5(VAR_10->num, VAR_2,
     VAR_4, (void *) VAR_10->address,
     VAR_3, VAR_6, VAR_8);
 if (!VAR_11) {
  VAR_12 = -VAR_1;
  goto unmap;
 }





 VAR_10->token = (u64) VAR_11;

 VAR_11->priv = VAR_10;
 return VAR_11;
unmap:
 FUNC_4(VAR_10->address,
       FUNC_6(VAR_10->num,
           VAR_2));
out:
 return FUNC_0(VAR_12);
}
