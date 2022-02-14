
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {struct socket* private_data; } ;
struct vhost_net {scalar_t__ poll; int tx_poll_state; struct vhost_virtqueue* vqs; } ;
struct socket {int file; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vhost_net*,struct socket*) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct vhost_net *VAR_3,
    struct vhost_virtqueue *VAR_4)
{
 struct socket *VAR_5 = VAR_4->private_data;
 if (!VAR_5)
  return;
 if (VAR_4 == VAR_3->vqs + VAR_2) {
  VAR_3->tx_poll_state = VAR_0;
  FUNC_0(VAR_3, VAR_5);
 } else
  FUNC_1(VAR_3->poll + VAR_1, VAR_5->file);
}
