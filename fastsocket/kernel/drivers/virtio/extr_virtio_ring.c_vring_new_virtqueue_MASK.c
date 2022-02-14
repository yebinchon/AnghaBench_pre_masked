
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct virtqueue {void (* callback ) (struct virtqueue*) ;char const* name; int list; struct virtio_device* vdev; } ;
struct TYPE_6__ {TYPE_2__* desc; TYPE_1__* avail; } ;
struct vring_virtqueue {void (* notify ) (struct virtqueue*) ;int broken; int in_use; unsigned int num_free; struct virtqueue vq; int ** data; TYPE_3__ vring; scalar_t__ free_head; void* event; void* indirect; scalar_t__ num_added; scalar_t__ last_used_idx; } ;
struct virtio_device {int vqs; int dev; } ;
struct TYPE_5__ {unsigned int next; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,unsigned int) ;
 struct vring_virtqueue* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 void* FUNC_3 (struct virtio_device*,int ) ;
 int FUNC_4 (TYPE_3__*,unsigned int,void*,unsigned int) ;

struct virtqueue *FUNC_5(unsigned int VAR_4,
          unsigned int VAR_5,
          struct virtio_device *VAR_6,
          void *VAR_7,
          void (*VAR_8)(struct virtqueue *),
          void (*VAR_9)(struct virtqueue *),
          const char *VAR_10)
{
 struct vring_virtqueue *VAR_11;
 unsigned int VAR_12;


 if (VAR_4 & (VAR_4 - 1)) {
  FUNC_0(&VAR_6->dev, "Bad virtqueue length %u\n", VAR_4);
  return ((void*)0);
 }

 VAR_11 = FUNC_1(sizeof(*VAR_11) + sizeof(void *)*VAR_4, VAR_0);
 if (!VAR_11)
  return ((void*)0);

 FUNC_4(&VAR_11->vring, VAR_4, VAR_7, VAR_5);
 VAR_11->vq.callback = VAR_9;
 VAR_11->vq.vdev = VAR_6;
 VAR_11->vq.name = VAR_10;
 VAR_11->notify = VAR_8;
 VAR_11->broken = 0;
 VAR_11->last_used_idx = 0;
 VAR_11->num_added = 0;
 FUNC_2(&VAR_11->vq.list, &VAR_6->vqs);




 VAR_11->indirect = FUNC_3(VAR_6, VAR_2);
 VAR_11->event = FUNC_3(VAR_6, VAR_1);


 if (!VAR_9)
  VAR_11->vring.avail->flags |= VAR_3;


 VAR_11->num_free = VAR_4;
 VAR_11->free_head = 0;
 for (VAR_12 = 0; VAR_12 < VAR_4-1; VAR_12++) {
  VAR_11->vring.desc[VAR_12].next = VAR_12+1;
  VAR_11->data[VAR_12] = ((void*)0);
 }
 VAR_11->data[VAR_12] = ((void*)0);

 return &VAR_11->vq;
}
