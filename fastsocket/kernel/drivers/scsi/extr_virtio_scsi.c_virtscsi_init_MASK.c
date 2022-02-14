
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vq_callback_t ;
typedef int u32 ;
struct virtqueue {int dummy; } ;
struct virtio_scsi {int * tgt; int req_vq; int event_vq; int ctrl_vq; } ;
struct virtio_device {TYPE_1__* config; } ;
struct TYPE_2__ {int (* find_vqs ) (struct virtio_device*,int,struct virtqueue**,int **,char const**) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct virtio_device*,int,struct virtqueue**,int **,char const**) ;
 scalar_t__ FUNC_1 (struct virtio_device*,int ) ;
 int FUNC_2 (struct virtio_device*,int) ;
 scalar_t__ FUNC_3 (struct virtio_device*,int ) ;
 int FUNC_4 (struct virtio_device*,int ,int ) ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_5 (int *,struct virtqueue*) ;
 int FUNC_6 (struct virtio_scsi*) ;
 int FUNC_7 (struct virtio_device*) ;
 int * VAR_9 ;

__attribute__((used)) static int FUNC_8(struct virtio_device *VAR_10,
    struct virtio_scsi *VAR_11, int VAR_12)
{
 int VAR_13;
 struct virtqueue *VAR_14[3];
 u32 VAR_15, VAR_16;

 vq_callback_t *VAR_17[] = {
  VAR_7,
  VAR_8,
  VAR_9
 };
 const char *VAR_18[] = {
  "control",
  "event",
  "request"
 };


 VAR_13 = VAR_10->config->find_vqs(VAR_10, 3, VAR_14, VAR_17, VAR_18);
 if (VAR_13)
  return VAR_13;

 FUNC_5(&VAR_11->ctrl_vq, VAR_14[0]);
 FUNC_5(&VAR_11->event_vq, VAR_14[1]);
 FUNC_5(&VAR_11->req_vq, VAR_14[2]);

 FUNC_4(VAR_10, VAR_4, VAR_1);
 FUNC_4(VAR_10, VAR_6, VAR_3);

 if (FUNC_1(VAR_10, VAR_2))
  FUNC_6(VAR_11);


 VAR_16 = FUNC_3(VAR_10, VAR_5) ?: 1;

 for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++) {
  VAR_11->tgt[VAR_15] = FUNC_2(VAR_10, VAR_16);
  if (!VAR_11->tgt[VAR_15]) {
   VAR_13 = -VAR_0;
   goto out;
  }
 }
 VAR_13 = 0;

out:
 if (VAR_13)
  FUNC_7(VAR_10);
 return VAR_13;
}
