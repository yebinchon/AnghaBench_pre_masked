
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtqueue {struct lguest_vq_info* priv; } ;
struct virtio_device {int dev; } ;
struct TYPE_3__ {int irq; int num; scalar_t__ pfn; } ;
struct lguest_vq_info {int pages; TYPE_1__ config; } ;
struct lguest_device {TYPE_2__* desc; } ;
struct TYPE_4__ {unsigned int num_vq; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct virtqueue* FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct lguest_vq_info*) ;
 struct lguest_vq_info* FUNC_4 (int,int ) ;
 int VAR_7 ;
 unsigned int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (unsigned long,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,unsigned int,int) ;
 int FUNC_10 (char*,unsigned int,unsigned long) ;
 int FUNC_11 (int ,int ,int ,int ,struct virtqueue*) ;
 struct lguest_device* FUNC_12 (struct virtio_device*) ;
 int FUNC_13 (struct virtqueue*) ;
 int VAR_8 ;
 struct virtqueue* FUNC_14 (int ,int ,struct virtio_device*,int ,int ,void (*) (struct virtqueue*),char const*) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static struct virtqueue *FUNC_16(struct virtio_device *VAR_9,
        unsigned VAR_10,
        void (*VAR_11)(struct virtqueue *VAR_12),
        const char *VAR_13)
{
 struct lguest_device *VAR_14 = FUNC_12(VAR_9);
 struct lguest_vq_info *VAR_15;
 struct virtqueue *VAR_16;
 int VAR_17;


 if (VAR_10 >= VAR_14->desc->num_vq)
  return FUNC_1(-VAR_0);

 VAR_15 = FUNC_4(sizeof(*VAR_15), VAR_2);
 if (!VAR_15)
  return FUNC_1(-VAR_1);






 FUNC_9(&VAR_15->config, FUNC_5(VAR_14->desc)+VAR_10, sizeof(VAR_15->config));

 FUNC_10("Mapping virtqueue %i addr %lx\n", VAR_10,
        (unsigned long)VAR_15->config.pfn << VAR_5);

 VAR_15->pages = FUNC_6((unsigned long)VAR_15->config.pfn << VAR_5,
    FUNC_0(FUNC_15(VAR_15->config.num,
       VAR_4),
          VAR_6));
 if (!VAR_15->pages) {
  VAR_17 = -VAR_1;
  goto free_lvq;
 }





 VAR_16 = FUNC_14(VAR_15->config.num, VAR_4,
     VAR_9, VAR_15->pages, VAR_7, VAR_11, VAR_13);
 if (!VAR_16) {
  VAR_17 = -VAR_1;
  goto unmap;
 }


 FUNC_7(VAR_15->config.irq);
 VAR_17 = FUNC_11(VAR_15->config.irq, VAR_8, VAR_3,
     FUNC_2(&VAR_9->dev), VAR_16);
 if (VAR_17)
  goto destroy_vring;





 VAR_16->priv = VAR_15;
 return VAR_16;

destroy_vring:
 FUNC_13(VAR_16);
unmap:
 FUNC_8(VAR_15->pages);
free_lvq:
 FUNC_3(VAR_15);
 return FUNC_1(VAR_17);
}
