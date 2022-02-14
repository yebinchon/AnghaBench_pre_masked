
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_dev {int dummy; } ;
struct vhost_attach_cgroups_struct {int ret; int work; int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vhost_dev*,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct vhost_dev*,int *) ;

__attribute__((used)) static int FUNC_3(struct vhost_dev *VAR_2)
{
 struct vhost_attach_cgroups_struct VAR_3;
 VAR_3.owner = VAR_0;
 FUNC_1(&VAR_3.work, VAR_1);
 FUNC_2(VAR_2, &VAR_3.work);
 FUNC_0(VAR_2, &VAR_3.work);
 return VAR_3.ret;
}
