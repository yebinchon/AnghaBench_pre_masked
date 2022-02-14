
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mutex; } ;
struct vhost_net {TYPE_1__ dev; } ;
struct socket {int file; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 long FUNC_3 (TYPE_1__*) ;
 long FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct vhost_net*) ;
 int FUNC_6 (struct vhost_net*,struct socket**,struct socket**) ;

__attribute__((used)) static long FUNC_7(struct vhost_net *VAR_0)
{
 struct socket *VAR_1 = ((void*)0);
 struct socket *VAR_2 = ((void*)0);
 long VAR_3;
 FUNC_1(&VAR_0->dev.mutex);
 VAR_3 = FUNC_3(&VAR_0->dev);
 if (VAR_3)
  goto done;
 FUNC_6(VAR_0, &VAR_1, &VAR_2);
 FUNC_5(VAR_0);
 VAR_3 = FUNC_4(&VAR_0->dev);
done:
 FUNC_2(&VAR_0->dev.mutex);
 if (VAR_1)
  FUNC_0(VAR_1->file);
 if (VAR_2)
  FUNC_0(VAR_2->file);
 return VAR_3;
}
