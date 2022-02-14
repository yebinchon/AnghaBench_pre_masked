
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_device {TYPE_1__* config; struct virtio_balloon* priv; } ;
struct virtio_balloon {int tell_host_first; int thread; scalar_t__ need_stats_update; struct virtio_device* vdev; int config_change; scalar_t__ num_pages; int pages; } ;
struct TYPE_2__ {int (* del_vqs ) (struct virtio_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct virtio_balloon*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct virtio_balloon*) ;
 struct virtio_balloon* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,struct virtio_balloon*,char*) ;
 int FUNC_8 (struct virtio_device*) ;
 int FUNC_9 (struct virtio_device*,int ) ;

__attribute__((used)) static int FUNC_10(struct virtio_device *VAR_4)
{
 struct virtio_balloon *VAR_5;
 int VAR_6;

 VAR_4->priv = VAR_5 = FUNC_6(sizeof(*VAR_5), VAR_1);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto out;
 }

 FUNC_0(&VAR_5->pages);
 VAR_5->num_pages = 0;
 FUNC_4(&VAR_5->config_change);
 VAR_5->vdev = VAR_4;
 VAR_5->need_stats_update = 0;

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6)
  goto out_free_vb;

 VAR_5->thread = FUNC_7(VAR_3, VAR_5, "vballoon");
 if (FUNC_1(VAR_5->thread)) {
  VAR_6 = FUNC_2(VAR_5->thread);
  goto out_del_vqs;
 }

 VAR_5->tell_host_first
  = FUNC_9(VAR_4, VAR_2);

 return 0;

out_del_vqs:
 VAR_4->config->del_vqs(VAR_4);
out_free_vb:
 FUNC_5(VAR_5);
out:
 return VAR_6;
}
