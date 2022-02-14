
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct virtio_scsi {int ** tgt; } ;
struct virtio_device {TYPE_1__* config; } ;
struct Scsi_Host {size_t max_id; } ;
struct TYPE_2__ {int (* del_vqs ) (struct virtio_device*) ;int (* reset ) (struct virtio_device*) ;} ;


 int FUNC_0 (int *) ;
 struct virtio_scsi* FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (struct virtio_device*) ;
 int FUNC_3 (struct virtio_device*) ;
 struct Scsi_Host* FUNC_4 (struct virtio_device*) ;

__attribute__((used)) static void FUNC_5(struct virtio_device *VAR_0)
{
 struct Scsi_Host *VAR_1 = FUNC_4(VAR_0);
 struct virtio_scsi *VAR_2 = FUNC_1(VAR_1);
 u32 VAR_3, VAR_4;


 VAR_0->config->reset(VAR_0);

 VAR_4 = VAR_1->max_id;
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  FUNC_0(VAR_2->tgt[VAR_3]);
  VAR_2->tgt[VAR_3] = ((void*)0);
 }

 VAR_0->config->del_vqs(VAR_0);
}
