
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhost_virtqueue {int mutex; struct vhost_ubuf_ref* private_data; struct vhost_ubuf_ref* ubufs; } ;
struct vhost_ubuf_ref {int file; } ;
struct TYPE_2__ {int mutex; } ;
struct vhost_net {TYPE_1__ dev; struct vhost_virtqueue* vqs; } ;
struct socket {int file; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct vhost_ubuf_ref*) ;
 int FUNC_1 (struct vhost_ubuf_ref*) ;
 unsigned int VAR_2 ;
 int FUNC_2 (int ) ;
 struct vhost_ubuf_ref* FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct vhost_ubuf_ref*,struct vhost_ubuf_ref*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct vhost_virtqueue*) ;
 int FUNC_9 (struct vhost_net*,struct vhost_virtqueue*) ;
 int FUNC_10 (struct vhost_net*,struct vhost_virtqueue*) ;
 int FUNC_11 (struct vhost_net*,unsigned int) ;
 scalar_t__ FUNC_12 (struct vhost_ubuf_ref*) ;
 struct vhost_ubuf_ref* FUNC_13 (struct vhost_virtqueue*,int) ;
 int FUNC_14 (struct vhost_ubuf_ref*) ;
 int FUNC_15 (struct vhost_virtqueue*) ;
 int FUNC_16 (struct vhost_virtqueue*) ;

__attribute__((used)) static long FUNC_17(struct vhost_net *VAR_3, unsigned VAR_4, int VAR_5)
{
 struct socket *VAR_6, *VAR_7;
 struct vhost_virtqueue *VAR_8;
 struct vhost_ubuf_ref *VAR_9, *VAR_10 = ((void*)0);
 int VAR_11;

 FUNC_4(&VAR_3->dev.mutex);
 VAR_11 = FUNC_7(&VAR_3->dev);
 if (VAR_11)
  goto err;

 if (VAR_4 >= VAR_2) {
  VAR_11 = -VAR_1;
  goto err;
 }
 VAR_8 = VAR_3->vqs + VAR_4;
 FUNC_4(&VAR_8->mutex);


 if (!FUNC_15(VAR_8)) {
  VAR_11 = -VAR_0;
  goto err_vq;
 }
 VAR_6 = FUNC_3(VAR_5);
 if (FUNC_0(VAR_6)) {
  VAR_11 = FUNC_1(VAR_6);
  goto err_vq;
 }


 VAR_7 = VAR_8->private_data;
 if (VAR_6 != VAR_7) {
  VAR_9 = FUNC_13(VAR_8, VAR_6 && FUNC_12(VAR_6));
  if (FUNC_0(VAR_9)) {
   VAR_11 = FUNC_1(VAR_9);
   goto err_ubufs;
  }
  VAR_10 = VAR_8->ubufs;
  VAR_8->ubufs = VAR_9;
  FUNC_9(VAR_3, VAR_8);
  FUNC_6(VAR_8->private_data, VAR_6);
  FUNC_10(VAR_3, VAR_8);

  VAR_11 = FUNC_8(VAR_8);
  if (VAR_11)
   goto err_vq;
 }

 FUNC_5(&VAR_8->mutex);

 if (VAR_10) {
  FUNC_14(VAR_10);
  FUNC_4(&VAR_8->mutex);
  FUNC_16(VAR_8);
  FUNC_5(&VAR_8->mutex);
 }

 if (VAR_7) {
  FUNC_11(VAR_3, VAR_4);
  FUNC_2(VAR_7->file);
 }

 FUNC_5(&VAR_3->dev.mutex);
 return 0;

err_ubufs:
 FUNC_2(VAR_6->file);
err_vq:
 FUNC_5(&VAR_8->mutex);
err:
 FUNC_5(&VAR_3->dev.mutex);
 return VAR_11;
}
