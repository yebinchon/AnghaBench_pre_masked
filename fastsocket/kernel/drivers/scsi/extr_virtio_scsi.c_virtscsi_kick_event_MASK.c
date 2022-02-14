
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_scsi_event_node {int event; } ;
struct virtio_scsi_event {int dummy; } ;
struct TYPE_2__ {int vq_lock; int vq; } ;
struct virtio_scsi {TYPE_1__ event_vq; } ;
struct scatterlist {int dummy; } ;


 int FUNC_0 (struct scatterlist*,int *,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,struct scatterlist*,int ,int,struct virtio_scsi_event_node*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct virtio_scsi *VAR_0,
          struct virtio_scsi_event_node *VAR_1)
{
 int VAR_2;
 struct scatterlist VAR_3;
 unsigned long VAR_4;

 FUNC_0(&VAR_3, &VAR_1->event, sizeof(struct virtio_scsi_event));

 FUNC_1(&VAR_0->event_vq.vq_lock, VAR_4);

 VAR_2 = FUNC_3(VAR_0->event_vq.vq, &VAR_3, 0, 1, VAR_1);
 if (VAR_2 >= 0)
  FUNC_4(VAR_0->event_vq.vq);

 FUNC_2(&VAR_0->event_vq.vq_lock, VAR_4);

 return VAR_2;
}
