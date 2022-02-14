
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct virtnet_info {struct virtio_device* vdev; } ;
struct virtio_device {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,scalar_t__) ;
 struct virtnet_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct virtio_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, u32 VAR_3)
{
 struct virtnet_info *VAR_4 = FUNC_1(VAR_2);
 struct virtio_device *VAR_5 = VAR_4->vdev;

 if (VAR_3 && !FUNC_2(VAR_5, VAR_1))
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_3);
}
