
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct virtqueue {TYPE_1__* vdev; } ;
struct virtio_blk {TYPE_3__* disk; int pool; int vq; } ;
struct TYPE_7__ {int errors; int sense_len; int residual; } ;
struct virtblk_req {int status; TYPE_5__* req; TYPE_2__ in_hdr; } ;
struct TYPE_10__ {scalar_t__ cmd_type; int errors; int sense_len; int resid_len; } ;
struct TYPE_9__ {int queue_lock; } ;
struct TYPE_8__ {TYPE_4__* queue; } ;
struct TYPE_6__ {struct virtio_blk* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;


 int FUNC_0 (TYPE_5__*,int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct virtblk_req*,int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 struct virtblk_req* FUNC_5 (int ,unsigned int*) ;

__attribute__((used)) static void FUNC_6(struct virtqueue *VAR_4)
{
 struct virtio_blk *VAR_5 = VAR_4->vdev->priv;
 struct virtblk_req *VAR_6;
 unsigned int VAR_7;
 unsigned long VAR_8;

 FUNC_3(VAR_5->disk->queue->queue_lock, VAR_8);
 while ((VAR_6 = FUNC_5(VAR_5->vq, &VAR_7)) != ((void*)0)) {
  int VAR_9;

  switch (VAR_6->status) {
  case 129:
   VAR_9 = 0;
   break;
  case 128:
   VAR_9 = -VAR_1;
   break;
  default:
   VAR_9 = -VAR_0;
   break;
  }

  if (VAR_6->req->cmd_type == VAR_2) {
   VAR_6->req->resid_len = VAR_6->in_hdr.residual;
   VAR_6->req->sense_len = VAR_6->in_hdr.sense_len;
   VAR_6->req->errors = VAR_6->in_hdr.errors;
  }
  if (VAR_6->req->cmd_type == VAR_3)
   VAR_6->req->errors = (VAR_9 != 0);

  FUNC_0(VAR_6->req, VAR_9);
  FUNC_2(VAR_6, VAR_5->pool);
 }

 FUNC_1(VAR_5->disk->queue);
 FUNC_4(VAR_5->disk->queue->queue_lock, VAR_8);
}
