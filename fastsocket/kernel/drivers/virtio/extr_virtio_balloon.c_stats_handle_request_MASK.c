
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int dummy; } ;
struct virtio_balloon {int stats; struct virtqueue* stats_vq; scalar_t__ need_stats_update; } ;
struct scatterlist {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct scatterlist*,int ,int) ;
 int FUNC_2 (struct virtio_balloon*) ;
 scalar_t__ FUNC_3 (struct virtqueue*,struct scatterlist*,int,int ,struct virtio_balloon*) ;
 int FUNC_4 (struct virtqueue*) ;

__attribute__((used)) static void FUNC_5(struct virtio_balloon *VAR_0)
{
 struct virtqueue *VAR_1;
 struct scatterlist VAR_2;

 VAR_0->need_stats_update = 0;
 FUNC_2(VAR_0);

 VAR_1 = VAR_0->stats_vq;
 FUNC_1(&VAR_2, VAR_0->stats, sizeof(VAR_0->stats));
 if (FUNC_3(VAR_1, &VAR_2, 1, 0, VAR_0) < 0)
  FUNC_0();
 FUNC_4(VAR_1);
}
