
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {int mutex; struct socket* private_data; } ;
struct vhost_net {int dummy; } ;
struct socket {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct socket*,int *) ;
 int FUNC_3 (struct vhost_net*,struct vhost_virtqueue*) ;

__attribute__((used)) static struct socket *FUNC_4(struct vhost_net *VAR_0,
     struct vhost_virtqueue *VAR_1)
{
 struct socket *VAR_2;

 FUNC_0(&VAR_1->mutex);
 VAR_2 = VAR_1->private_data;
 FUNC_3(VAR_0, VAR_1);
 FUNC_2(VAR_1->private_data, ((void*)0));
 FUNC_1(&VAR_1->mutex);
 return VAR_2;
}
