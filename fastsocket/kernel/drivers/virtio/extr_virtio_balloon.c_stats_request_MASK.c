
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int dummy; } ;
struct virtio_balloon {int need_stats_update; int config_change; } ;


 struct virtio_balloon* FUNC_0 (struct virtqueue*,unsigned int*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct virtqueue *VAR_0)
{
 struct virtio_balloon *VAR_1;
 unsigned int VAR_2;

 VAR_1 = FUNC_0(VAR_0, &VAR_2);
 if (!VAR_1)
  return;
 VAR_1->need_stats_update = 1;
 FUNC_1(&VAR_1->config_change);
}
