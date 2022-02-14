
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtqueue {TYPE_1__* vdev; } ;
struct virtnet_info {int napi; } ;
struct TYPE_2__ {struct virtnet_info* priv; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct virtqueue*) ;

__attribute__((used)) static void FUNC_3(struct virtqueue *VAR_0)
{
 struct virtnet_info *VAR_1 = VAR_0->vdev->priv;

 if (FUNC_1(&VAR_1->napi)) {
  FUNC_2(VAR_0);
  FUNC_0(&VAR_1->napi);
 }
}
