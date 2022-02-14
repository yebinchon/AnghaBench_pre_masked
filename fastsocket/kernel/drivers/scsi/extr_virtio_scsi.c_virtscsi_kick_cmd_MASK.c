
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_scsi_vq {int vq; int vq_lock; } ;
struct virtio_scsi_target_state {int tgt_lock; int sg; } ;
struct virtio_scsi_cmd {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int ,unsigned int,unsigned int,struct virtio_scsi_cmd*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct virtio_scsi_target_state*,struct virtio_scsi_cmd*,unsigned int*,unsigned int*,size_t,size_t) ;

__attribute__((used)) static int FUNC_8(struct virtio_scsi_target_state *VAR_0,
        struct virtio_scsi_vq *VAR_1,
        struct virtio_scsi_cmd *VAR_2,
        size_t VAR_3, size_t VAR_4)
{
 unsigned int VAR_5, VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 FUNC_1(&VAR_0->tgt_lock, VAR_7);
 FUNC_7(VAR_0, VAR_2, &VAR_5, &VAR_6, VAR_3, VAR_4);

 FUNC_0(&VAR_1->vq_lock);
 VAR_8 = FUNC_4(VAR_1->vq, VAR_0->sg, VAR_5, VAR_6, VAR_2);
 FUNC_2(&VAR_0->tgt_lock);
 if (VAR_8 >= 0)
  VAR_8 = FUNC_5(VAR_1->vq);

 FUNC_3(&VAR_1->vq_lock, VAR_7);

 if (VAR_8 > 0)
  FUNC_6(VAR_1->vq);
 return VAR_8;
}
