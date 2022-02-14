
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct virtio_net_hdr_mrg_rxbuf {int dummy; } ;
struct virtio_net_hdr {int dummy; } ;
struct TYPE_4__ {int acked_features; int mutex; } ;
struct vhost_net {TYPE_2__ dev; TYPE_1__* vqs; } ;
struct TYPE_3__ {size_t vhost_hlen; size_t sock_hlen; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct vhost_net*) ;

__attribute__((used)) static int FUNC_5(struct vhost_net *VAR_5, u64 VAR_6)
{
 size_t VAR_7, VAR_8, VAR_9;
 int VAR_10;

 VAR_9 = (VAR_6 & (1 << VAR_4)) ?
   sizeof(struct virtio_net_hdr_mrg_rxbuf) :
   sizeof(struct virtio_net_hdr);
 if (VAR_6 & (1 << VAR_2)) {

  VAR_7 = VAR_9;
  VAR_8 = 0;
 } else {

  VAR_7 = 0;
  VAR_8 = VAR_9;
 }
 FUNC_0(&VAR_5->dev.mutex);
 if ((VAR_6 & (1 << VAR_1)) &&
     !FUNC_3(&VAR_5->dev)) {
  FUNC_1(&VAR_5->dev.mutex);
  return -VAR_0;
 }
 VAR_5->dev.acked_features = VAR_6;
 FUNC_2();
 for (VAR_10 = 0; VAR_10 < VAR_3; ++VAR_10) {
  FUNC_0(&VAR_5->vqs[VAR_10].mutex);
  VAR_5->vqs[VAR_10].vhost_hlen = VAR_7;
  VAR_5->vqs[VAR_10].sock_hlen = VAR_8;
  FUNC_1(&VAR_5->vqs[VAR_10].mutex);
 }
 FUNC_4(VAR_5);
 FUNC_1(&VAR_5->dev.mutex);
 return 0;
}
