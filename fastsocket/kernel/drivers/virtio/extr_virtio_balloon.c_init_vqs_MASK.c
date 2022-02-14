
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vq_callback_t ;
struct virtqueue {int dummy; } ;
struct virtio_balloon {struct virtqueue* stats_vq; int stats; TYPE_2__* vdev; struct virtqueue* deflate_vq; struct virtqueue* inflate_vq; } ;
struct scatterlist {int dummy; } ;
struct TYPE_5__ {TYPE_1__* config; } ;
struct TYPE_4__ {int (* find_vqs ) (TYPE_2__*,int,struct virtqueue**,int **,char const**) ;} ;


 int FUNC_0 () ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (struct scatterlist*,int ,int) ;
 int * VAR_2 ;
 int FUNC_2 (TYPE_2__*,int,struct virtqueue**,int **,char const**) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (struct virtqueue*,struct scatterlist*,int,int ,struct virtio_balloon*) ;
 int FUNC_5 (struct virtqueue*) ;

__attribute__((used)) static int FUNC_6(struct virtio_balloon *VAR_3)
{
 struct virtqueue *VAR_4[3];
 vq_callback_t *VAR_5[] = { VAR_1, VAR_1, VAR_2 };
 const char *VAR_6[] = { "inflate", "deflate", "stats" };
 int VAR_7, VAR_8;





 VAR_8 = FUNC_3(VAR_3->vdev, VAR_0) ? 3 : 2;
 VAR_7 = VAR_3->vdev->config->find_vqs(VAR_3->vdev, VAR_8, VAR_4, VAR_5, VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_3->inflate_vq = VAR_4[0];
 VAR_3->deflate_vq = VAR_4[1];
 if (FUNC_3(VAR_3->vdev, VAR_0)) {
  struct scatterlist VAR_9;
  VAR_3->stats_vq = VAR_4[2];





  FUNC_1(&VAR_9, VAR_3->stats, sizeof VAR_3->stats);
  if (FUNC_4(VAR_3->stats_vq,
        &VAR_9, 1, 0, VAR_3) < 0)
   FUNC_0();
  FUNC_5(VAR_3->stats_vq);
 }
 return 0;
}
