
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_net {int dev; } ;
struct socket {int file; } ;
struct inode {int dummy; } ;
struct file {struct vhost_net* private_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vhost_net*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vhost_net*) ;
 int FUNC_4 (struct vhost_net*,struct socket**,struct socket**) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, struct file *VAR_1)
{
 struct vhost_net *VAR_2 = VAR_1->private_data;
 struct socket *VAR_3;
 struct socket *VAR_4;

 FUNC_4(VAR_2, &VAR_3, &VAR_4);
 FUNC_3(VAR_2);
 FUNC_2(&VAR_2->dev);
 if (VAR_3)
  FUNC_0(VAR_3->file);
 if (VAR_4)
  FUNC_0(VAR_4->file);


 FUNC_3(VAR_2);
 FUNC_1(VAR_2);
 return 0;
}
