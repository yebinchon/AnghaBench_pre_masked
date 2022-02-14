
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtqueue {int vdev; } ;
struct TYPE_2__ {int vq_lock; } ;
struct virtio_scsi {TYPE_1__ req_vq; } ;
struct Scsi_Host {int dummy; } ;


 struct virtio_scsi* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct Scsi_Host* FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (struct virtqueue*,int ) ;

__attribute__((used)) static void FUNC_5(struct virtqueue *VAR_1)
{
 struct Scsi_Host *VAR_2 = FUNC_3(VAR_1->vdev);
 struct virtio_scsi *VAR_3 = FUNC_0(VAR_2);
 unsigned long VAR_4;

 FUNC_1(&VAR_3->req_vq.vq_lock, VAR_4);
 FUNC_4(VAR_1, VAR_0);
 FUNC_2(&VAR_3->req_vq.vq_lock, VAR_4);
}
