
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vq_callback_t ;
struct virtqueue {int dummy; } ;
struct virtnet_info {TYPE_2__* dev; TYPE_3__* vdev; struct virtqueue* cvq; struct virtqueue* svq; struct virtqueue* rvq; } ;
struct TYPE_7__ {TYPE_1__* config; } ;
struct TYPE_6__ {int features; } ;
struct TYPE_5__ {int (* find_vqs ) (TYPE_3__*,int,struct virtqueue**,int **,char const**) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (TYPE_3__*,int,struct virtqueue**,int **,char const**) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_2(struct virtnet_info *VAR_5)
{
 struct virtqueue *VAR_6[3];
 vq_callback_t *VAR_7[] = { VAR_3, VAR_4, ((void*)0)};
 const char *VAR_8[] = { "input", "output", "control" };
 int VAR_9, VAR_10;



 VAR_9 = FUNC_1(VAR_5->vdev, VAR_2) ? 3 : 2;

 VAR_10 = VAR_5->vdev->config->find_vqs(VAR_5->vdev, VAR_9, VAR_6, VAR_7, VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_5->rvq = VAR_6[0];
 VAR_5->svq = VAR_6[1];

 if (FUNC_1(VAR_5->vdev, VAR_2)) {
  VAR_5->cvq = VAR_6[2];

  if (FUNC_1(VAR_5->vdev, VAR_1))
   VAR_5->dev->features |= VAR_0;
 }
 return 0;
}
