
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_device {struct virtio_balloon* priv; } ;
struct virtio_balloon {int config_change; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct virtio_device *VAR_0)
{
 struct virtio_balloon *VAR_1 = VAR_0->priv;

 FUNC_0(&VAR_1->config_change);
}
